`timescale 1ns/1ps
`include "memory_defines.vh"

module top_soc_uart_boot #(
  parameter CLKS_PER_BIT = 8
)(
  input  wire          clk,
  input  wire          rst_n,

  input  wire          uart_rx_pin,
  output wire          uart_tx_pin,

  output wire          bootload_busy,
  output wire          bootload_done,
  output wire          bootload_error,
  output wire          cpu_resetn_out,
  output wire [31 : 0] bytes_loaded_out
);

  wire                                                      rx_valid;
  wire [7 : 0]                                              rx_byte;

  wire                                                      bl_load_valid;
  wire [31 : 0]                                             bl_load_addr;
  wire [31 : 0]                                             bl_load_data;

  wire                                                      cpu_resetn;

  wire                                                      imem_valid;
  wire [31 : 0]                                             imem_addr;
  wire [31 : 0]                                             imem_rdata;

  wire                                                      dmem_valid;
  wire [31 : 0]                                             dmem_addr;
  wire                                                      dmem_write_enable;
  wire [1 : 0]                                              dmem_access_width;
  wire [31 : 0]                                             dmem_wdata;
  wire [31 : 0]                                             dmem_rdata;

  reg                                                       tx_dv;
  reg  [7 : 0]                                              tx_byte;
  wire                                                      tx_active;
  wire                                                      tx_done;

  reg                                                       bootload_done_d;
  reg                                                       bootload_error_d;

  wire [($clog2(`INSTRUCTION_MEMORY_SIZE_BYTES)+1) - 1 : 0] bytes_loaded;

  assign cpu_resetn_out   = cpu_resetn;
  assign bytes_loaded_out = {{(32-($clog2(`INSTRUCTION_MEMORY_SIZE_BYTES)+1)){1'b0}}, bytes_loaded};
  assign cpu_resetn       = rst_n && bootload_done && !bootload_error;

  uart_rx #(
    .CLKS_PER_BIT      (CLKS_PER_BIT)
	) uart_rx_01 (
    .i_clock           (clk),
    .rst_n             (rst_n),

    .i_rx_serial       (uart_rx_pin),

    .o_rx_dv           (rx_valid),
    .o_rx_byte         (rx_byte)
  );

  bootloader #(
    .MEM_BYTES         (`INSTRUCTION_MEMORY_SIZE_BYTES)
	) bootloader_01 (
    .clk               (clk),
    .rst_n             (rst_n),

    .uart_rx_valid     (rx_valid),
    .uart_rx_data      (rx_byte),

    .load_valid        (bl_load_valid),
    .load_addr         (bl_load_addr),
    .load_data         (bl_load_data),

    .bootload_busy     (bootload_busy),
    .bootload_done     (bootload_done),
    .bootload_error    (bootload_error),

    .bytes_loaded      (bytes_loaded)
  );

  inst_memory inst_memory_01 (
    .clk               (clk),
    .rst_n             (rst_n),

    .en                (imem_valid && cpu_resetn),
    .addr              (imem_addr),

    .data              (imem_rdata),

    .load_we           (bl_load_valid),
    .load_addr         (bl_load_addr),
    .load_data         (bl_load_data)
  );

  cpu cpu_01 (
    .clk               (clk),
    .resetn            (cpu_resetn),

    .imem_ready        (1'b1),
    .imem_valid        (imem_valid),
    .imem_addr         (imem_addr),
    .imem_rdata        (imem_rdata),

    .dmem_ready        (1'b1),
    .dmem_valid        (dmem_valid),
    .dmem_addr         (dmem_addr),
    .dmem_write_enable (dmem_write_enable),
    .dmem_access_width (dmem_access_width),
    .dmem_wdata        (dmem_wdata),
    .dmem_rdata        (dmem_rdata)
  );

  data_memory data_memory (
    .clk               (clk),
    .addr              (dmem_addr),

    .write_enable      (dmem_write_enable),
    .access_enable     (dmem_valid),

    .access_width      (dmem_access_width),

    .wdata             (dmem_wdata),
    .rdata             (dmem_rdata)
  );

  uart_tx #(
    .CLKS_PER_BIT      (CLKS_PER_BIT)
	) uart_tx_01 (
    .i_clock           (clk),
    .rst_n             (rst_n),

    .i_tx_dv           (tx_dv),
    .i_tx_byte         (tx_byte),

    .o_tx_active       (tx_active),
    .o_tx_serial       (uart_tx_pin),
    .o_tx_done         (tx_done)
  );

  always @(posedge clk) begin
    if (!rst_n) begin
      tx_dv            <= 1'b0;
      tx_byte          <= 8'h00;
      bootload_done_d  <= 1'b0;
      bootload_error_d <= 1'b0;
    end else begin
      tx_dv            <= 1'b0;

      bootload_done_d  <= bootload_done;
      bootload_error_d <= bootload_error;

      if (!tx_active) begin
        if (bootload_done && !bootload_done_d) begin
          tx_dv        <= 1'b1;
          tx_byte      <= 8'hA5;
        end else if (bootload_error && !bootload_error_d) begin
          tx_dv        <= 1'b1;
          tx_byte      <= 8'hEE;
        end
      end
    end
  end

endmodule