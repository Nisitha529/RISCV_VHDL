`timescale 1ns/1ps

`include "cpu_defines.vh"
`include "memory_defines.vh"

module tb_cpu_simple ();

  logic         clk;
  logic         resetn;

  // CPU <-> IMEM
  logic         imem_ready;
  logic         imem_valid;
  logic [31:0]  imem_addr;
  logic [31:0]  imem_rdata;

  // CPU <-> DMEM
  logic         dmem_ready;
  logic         dmem_valid;
  logic [31:0]  dmem_addr;
  logic         dmem_write_enable;
  logic [1:0]   dmem_access_width;
  logic [31:0]  dmem_wdata;
  logic [31:0]  dmem_rdata;

  // TB -> IMEM load port
  logic         tb_load_we;
  logic [31:0]  tb_load_addr;
  logic [31:0]  tb_load_data;

  integer       error_count;
  integer       cycle_count;

  localparam [31:0] EBREAK = 32'h00100073;

  initial clk = 1'b0;
  always #5 clk = ~clk;

  // ------------------------------------------------------------
  // DUT
  // ------------------------------------------------------------
  cpu cpu_dut (
    .clk               (clk),
    .resetn            (resetn),

    .imem_ready        (imem_ready),
    .imem_valid        (imem_valid),
    .imem_addr         (imem_addr),
    .imem_rdata        (imem_rdata),

    .dmem_ready        (dmem_ready),
    .dmem_valid        (dmem_valid),
    .dmem_addr         (dmem_addr),
    .dmem_write_enable (dmem_write_enable),
    .dmem_access_width (dmem_access_width),
    .dmem_wdata        (dmem_wdata),
    .dmem_rdata        (dmem_rdata)
  );

  inst_memory inst_mem (
    .clk       (clk),
    .rst_n     (resetn),
    .en        (imem_valid),
    .addr      (imem_addr),
    .data      (imem_rdata),
    .load_we   (tb_load_we),
    .load_addr (tb_load_addr),
    .load_data (tb_load_data)
  );

  data_memory data_mem (
    .clk           (clk),
    .addr          (dmem_addr),
    .write_enable  (dmem_write_enable),
    .access_enable (dmem_valid),
    .access_width  (dmem_access_width),
    .wdata         (dmem_wdata),
    .rdata         (dmem_rdata)
  );

  // ------------------------------------------------------------
  // RISC-V encoders
  // ------------------------------------------------------------
  function automatic [31:0] rv_addi(
    input [4:0] rd,
    input [4:0] rs1,
    input integer imm
  );
    reg [11:0] imm12;
    begin
      imm12   = imm[11:0];
      rv_addi = {imm12, rs1, 3'b000, rd, 7'b0010011};
    end
  endfunction

  function automatic [31:0] rv_add(
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2
  );
    begin
      rv_add = {7'b0000000, rs2, rs1, 3'b000, rd, 7'b0110011};
    end
  endfunction

  function automatic [31:0] rv_lui(
    input [4:0] rd,
    input [31:0] imm
  );
    begin
      rv_lui = {imm[31:12], rd, 7'b0110111};
    end
  endfunction

  function automatic [31:0] rv_sw(
    input [4:0] rs2,
    input [4:0] rs1,
    input integer imm
  );
    reg [11:0] imm12;
    begin
      imm12 = imm[11:0];
      rv_sw = {imm12[11:5], rs2, rs1, 3'b010, imm12[4:0], 7'b0100011};
    end
  endfunction

  function automatic [31:0] rv_lw(
    input [4:0] rd,
    input [4:0] rs1,
    input integer imm
  );
    reg [11:0] imm12;
    begin
      imm12 = imm[11:0];
      rv_lw = {imm12, rs1, 3'b010, rd, 7'b0000011};
    end
  endfunction

  localparam integer RAM_BASE = `DATA_RAM_BASE_ADDRESS;
  localparam integer RAM_HI20 = (RAM_BASE + 32'h800) >> 12;
  localparam integer RAM_LO12 = RAM_BASE - (RAM_HI20 << 12);

  // ------------------------------------------------------------
  // Helpers
  // ------------------------------------------------------------
  task reset_and_clear_imem();
    begin
      resetn       = 1'b0;
      imem_ready   = 1'b0;
      dmem_ready   = 1'b0;
      tb_load_we   = 1'b0;
      tb_load_addr = 32'h0;
      tb_load_data = 32'h0;
      cycle_count  = 0;

      repeat (4) @(posedge clk);
    end
  endtask

  task release_reset_but_keep_cpu_stalled();
    begin
      resetn = 1'b1;
      @(posedge clk);
      @(posedge clk);
    end
  endtask

  task start_cpu();
    begin
      imem_ready = 1'b1;
      dmem_ready = 1'b1;
      @(posedge clk);
    end
  endtask

  task load_word(input [31:0] addr, input [31:0] data);
    begin
      @(negedge clk);
      tb_load_we   = 1'b1;
      tb_load_addr = addr;
      tb_load_data = data;

      @(posedge clk);
      @(negedge clk);
      tb_load_we   = 1'b0;
      tb_load_addr = 32'h0;
      tb_load_data = 32'h0;
    end
  endtask

  task check_reg(input integer idx, input [31:0] expected);
    reg [31:0] got;
    begin
      got = cpu_dut.regfile_inst.regs[idx];
      if (got !== expected) begin
        $display("FAIL: x%0d expected=%08h got=%08h", idx, expected, got);
        error_count = error_count + 1;
      end else begin
        $display("PASS: x%0d = %08h", idx, got);
      end
    end
  endtask

  task check_imem_word(input [31:0] addr, input [31:0] expected);
    begin
      @(posedge clk);
      if (inst_mem.mem[addr[31:2]] !== expected) begin
        $display("FAIL: IMEM[%0d] expected=%08h got=%08h",
                 addr[31:2], expected, inst_mem.mem[addr[31:2]]);
        error_count = error_count + 1;
      end else begin
        $display("PASS: IMEM[%0d] = %08h", addr[31:2], inst_mem.mem[addr[31:2]]);
      end
    end
  endtask

  task check_ram_word(input [31:0] addr, input [31:0] expected);
    integer idx;
    reg [31:0] got;
    begin
      idx = (addr - `DATA_RAM_BASE_ADDRESS) >> 2;
      got = data_mem.ram_inst.mem[idx];
      if (got !== expected) begin
        $display("FAIL: RAM[%0d] expected=%08h got=%08h", idx, expected, got);
        error_count = error_count + 1;
      end else begin
        $display("PASS: RAM[%0d] = %08h", idx, got);
      end
    end
  endtask

  task wait_for_ebreak(input integer max_cycles);
    begin
      cycle_count = 0;
      while ((imem_rdata !== EBREAK) && (cycle_count < max_cycles)) begin
        @(posedge clk);
        cycle_count = cycle_count + 1;
      end

      if (imem_rdata !== EBREAK) begin
        $display("FAIL: timeout waiting for EBREAK");
        error_count = error_count + 1;
      end else begin
        $display("PASS: EBREAK reached at cycle %0d, pc=%08h", cycle_count, imem_addr);
      end
    end
  endtask

  // ------------------------------------------------------------
  // Main test
  // ------------------------------------------------------------
  initial begin
    error_count = 0;

    reset_and_clear_imem();
    release_reset_but_keep_cpu_stalled();

    $display("TEST 1: program load");
    load_word(32'h0000_0000, rv_addi(5'd1, 5'd0, 5));
    load_word(32'h0000_0004, rv_addi(5'd2, 5'd0, 7));
    load_word(32'h0000_0008, rv_add (5'd3, 5'd1, 5'd2));
    load_word(32'h0000_000C, rv_lui (5'd5, RAM_HI20 << 12));
    load_word(32'h0000_0010, rv_addi(5'd5, 5'd5, RAM_LO12));
    load_word(32'h0000_0014, rv_sw  (5'd3, 5'd5, 0));
    load_word(32'h0000_0018, rv_lw  (5'd6, 5'd5, 0));
    load_word(32'h0000_001C, 32'h00100073);

    check_imem_word(32'h0000_0000, rv_addi(5'd1, 5'd0, 5));
    check_imem_word(32'h0000_0004, rv_addi(5'd2, 5'd0, 7));
    check_imem_word(32'h0000_001C, 32'h00100073);

    $display("TEST 2: CPU run");
    start_cpu();
    wait_for_ebreak(100);

    check_reg(0, 32'h0000_0000);
    check_reg(1, 32'd5);
    check_reg(2, 32'd7);
    check_reg(3, 32'd12);
    check_reg(6, 32'd12);

    $display("TEST 3: RAM side effect");
    check_ram_word(`DATA_RAM_BASE_ADDRESS, 32'd12);

    if (error_count == 0) begin
      $display("ALL TESTS PASSED");
      $finish;
    end else begin
      $display("TESTS FAILED: %0d errors", error_count);
      $fatal;
    end
  end

endmodule