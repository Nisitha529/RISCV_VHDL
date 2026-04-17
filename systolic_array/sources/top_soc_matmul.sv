`timescale 1ns/1ps
`include "memory_defines.vh"
`include "cpu_defines.vh"

module top_soc_matmul #(
  parameter CLKS_PER_BIT = 8,
  parameter ACCEL_RAM_ADDR_WIDTH = 10,
  parameter ACCEL_CFG_BASE       = 32'h0300_0000,
  parameter ACCEL_CFG_SIZE_BYTES = 32
)(
  input  wire clk,
  input  wire rst_n,

  input  wire uart_rx_pin,
  output wire uart_tx_pin,

  output wire bootload_busy,
  output wire bootload_done,
  output wire bootload_error,
  output wire cpu_resetn_out,
  output wire [31:0] bytes_loaded_out,

  output wire accel_irq
);

  //----------------------------------
  // CPU / Boot / UART wires
  //----------------------------------
  wire rx_valid;
  wire [7:0] rx_byte;

  wire bl_load_valid;
  wire [31:0] bl_load_addr;
  wire [31:0] bl_load_data;

  wire cpu_resetn;

  wire imem_valid;
  wire [31:0] imem_addr;
  wire [31:0] imem_rdata;

  wire dmem_valid;
  wire [31:0] dmem_addr;
  wire dmem_write_enable;
  wire [1:0] dmem_access_width;
  wire [31:0] dmem_wdata;
  reg  [31:0] dmem_rdata;

  //----------------------------------
  // Shared RAM + accel wires
  //----------------------------------
  wire shared_ram_sel;
  wire [31:0] shared_ram_rel_addr;
  wire [31:0] shared_ram_cpu_rdata;

  wire accel_mem_we, accel_mem_re;
  wire [ACCEL_RAM_ADDR_WIDTH-1:0] accel_mem_addr;
  wire [31:0] accel_mem_wdata, accel_mem_rdata;

  //----------------------------------
  // Accelerator config
  //----------------------------------
  wire accel_cfg_sel;
  wire accel_cfg_we;
  wire [7:0] accel_cfg_addr;
  wire [31:0] accel_cfg_wdata;
  wire [31:0] accel_cfg_rdata;

  //----------------------------------
  // bytes_loaded width fix
  //----------------------------------
  wire [($clog2(`INSTRUCTION_MEMORY_SIZE_BYTES)+1)-1:0] bytes_loaded;

  //----------------------------------
  // Address decode
  //----------------------------------
  assign cpu_resetn     = rst_n && bootload_done && !bootload_error;
  assign cpu_resetn_out = cpu_resetn;

  assign bytes_loaded_out =
      {{(32-($clog2(`INSTRUCTION_MEMORY_SIZE_BYTES)+1)){1'b0}}, bytes_loaded};

  assign shared_ram_sel =
      dmem_valid &&
      (dmem_addr >= `DATA_RAM_BASE_ADDRESS) &&
      (dmem_addr < (`DATA_RAM_BASE_ADDRESS + `DATA_RAM_MEMORY_SIZE_BYTES));

  assign accel_cfg_sel =
      dmem_valid &&
      (dmem_addr >= ACCEL_CFG_BASE) &&
      (dmem_addr < (ACCEL_CFG_BASE + ACCEL_CFG_SIZE_BYTES));

  assign shared_ram_rel_addr = dmem_addr - `DATA_RAM_BASE_ADDRESS;

  assign accel_cfg_addr = dmem_addr[7:0];
  assign accel_cfg_we   = accel_cfg_sel && dmem_write_enable &&
                          (dmem_access_width == `MEM_ACCESS_WIDTH_32);

  assign accel_cfg_wdata =
      ((accel_cfg_addr == 8'h08) ||
       (accel_cfg_addr == 8'h0C) ||
       (accel_cfg_addr == 8'h10))
      ? ((dmem_wdata - `DATA_RAM_BASE_ADDRESS) >> 2)
      : dmem_wdata;

  //----------------------------------
  // UART RX
  //----------------------------------
  uart_rx #(.CLKS_PER_BIT(CLKS_PER_BIT)) uart_rx_i (
    .i_clock(clk),
    .rst_n(rst_n),
    .i_rx_serial(uart_rx_pin),
    .o_rx_dv(rx_valid),
    .o_rx_byte(rx_byte)
  );

  //----------------------------------
  // Bootloader
  //----------------------------------
  bootloader #(.MEM_BYTES(`INSTRUCTION_MEMORY_SIZE_BYTES)) bootloader_i (
    .clk(clk),
    .rst_n(rst_n),
    .uart_rx_valid(rx_valid),
    .uart_rx_data(rx_byte),
    .load_valid(bl_load_valid),
    .load_addr(bl_load_addr),
    .load_data(bl_load_data),
    .bootload_busy(bootload_busy),
    .bootload_done(bootload_done),
    .bootload_error(bootload_error),
    .bytes_loaded(bytes_loaded)
  );

  //----------------------------------
  // Instruction memory
  //----------------------------------
  inst_memory imem_i (
    .clk(clk),
    .rst_n(rst_n),
    .en(imem_valid && cpu_resetn),
    .addr(imem_addr),
    .data(imem_rdata),
    .load_we(bl_load_valid),
    .load_addr(bl_load_addr),
    .load_data(bl_load_data)
  );

  //----------------------------------
  // CPU
  //----------------------------------
  cpu cpu_i (
    .clk(clk),
    .resetn(cpu_resetn),

    .imem_ready(1'b1),
    .imem_valid(imem_valid),
    .imem_addr(imem_addr),
    .imem_rdata(imem_rdata),

    .dmem_ready(1'b1),
    .dmem_valid(dmem_valid),
    .dmem_addr(dmem_addr),
    .dmem_write_enable(dmem_write_enable),
    .dmem_access_width(dmem_access_width),
    .dmem_wdata(dmem_wdata),
    .dmem_rdata(dmem_rdata)
  );

  //----------------------------------
  // Shared RAM
  //----------------------------------
  shared_data_ram_accel #(
    .ADDR_WIDTH(ACCEL_RAM_ADDR_WIDTH)
  ) shared_ram_i (
    .clk(clk),

    .cpu_en(shared_ram_sel),
    .cpu_we(shared_ram_sel && dmem_write_enable),
    .cpu_access_width(dmem_access_width),
    .cpu_addr(shared_ram_rel_addr),
    .cpu_wdata(dmem_wdata),
    .cpu_rdata(shared_ram_cpu_rdata),

    .acc_we(accel_mem_we),
    .acc_re(accel_mem_re),
    .acc_addr(accel_mem_addr),
    .acc_wdata(accel_mem_wdata),
    .acc_rdata(accel_mem_rdata)
  );

  //----------------------------------
  // Accelerator
  //----------------------------------
  top_matmul_accel #(
    .N(4),
    .DATA_WIDTH(32),
    .ADDR_WIDTH(ACCEL_RAM_ADDR_WIDTH)
  ) accel_i (
    .clk(clk),
    .rst_n(cpu_resetn),

    .cfg_we(accel_cfg_we),
    .cfg_addr(accel_cfg_addr),
    .cfg_wdata(accel_cfg_wdata),
    .cfg_rdata(accel_cfg_rdata),

    .mem_we(accel_mem_we),
    .mem_re(accel_mem_re),
    .mem_addr(accel_mem_addr),
    .mem_wdata(accel_mem_wdata),
    .mem_rdata(accel_mem_rdata),

    .irq(accel_irq)
  );

  //----------------------------------
  // Read mux
  //----------------------------------
  always @(*) begin
    if (shared_ram_sel)
      dmem_rdata = shared_ram_cpu_rdata;
    else if (accel_cfg_sel)
      dmem_rdata = accel_cfg_rdata;
    else
      dmem_rdata = 32'hFFFF_FFFF;
  end

  //----------------------------------
  // UART TX unused in this wrapper version
  //----------------------------------
  assign uart_tx_pin = 1'b1;

endmodule