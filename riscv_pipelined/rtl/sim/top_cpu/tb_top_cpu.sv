`timescale 1ns/1ps

module tb_top_cpu;

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 5;
  parameter MEM_DEPTH  = 256;

  parameter MEM_FILE   = "program.hex";

  logic clk;
  logic rst;

  logic program_halted;

  // DUT

  top_cpu #(
    .DATA_WIDTH (DATA_WIDTH),
    .ADDR_WIDTH (ADDR_WIDTH),
    .MEM_DEPTH  (MEM_DEPTH),
    .MEM_FILE   (MEM_FILE)
  ) dut (
    .clk        (clk),
    .rst        (rst)
  );

  // Clock generation
  initial begin
    clk = 1'b0;

    forever #5 clk = ~clk;
  end

  // Reset
  initial begin
    rst = 1'b1;
    #20;

    rst = 1'b0;
  end

  // Self-check

  initial begin
    program_halted = 1'b0;
    wait(program_halted);

    #20;

    if (dut.stage_id_01.regfile_01.regs[1] !== 32'd10) begin
      $display("[FAIL] x1");

      $display("Expected : 10");
      $display("Actual   : %0d", dut.stage_id_01.regfile_01.regs[1]);
      $finish;
    end else begin
      $display("[PASS] x1");
    end

    if (dut.stage_id_01.regfile_01.regs[2] !== 32'd20) begin
      $display("[FAIL] x2");
      $display("Expected : 20");
      $display("Actual   : %0d", dut.stage_id_01.regfile_01.regs[2]);
      $finish;
    end else begin
      $display("[PASS] x2");
    end

    if (dut.stage_id_01.regfile_01.regs[3] !== 32'd30) begin
      $display("[FAIL] x3");
      $display("Expected : 30");
      $display("Actual   : %0d", dut.stage_id_01.regfile_01.regs[3]);
      $finish;
    end else begin
      $display("[PASS] x3");
    end

    $display("");
    $display("TOP CPU TEST PASSED");
    $display("");
    $finish;

  end

  always @(posedge clk) begin
    #1;
    // $display("HALT CHECK INSTR = 0x%08h", dut.if_id_instr);
    if (dut.if_id_instr == 32'hFFFFFFFF) begin
      // $display("PROGRAM HALTED");
      // $finish;
      program_halted = 1'b1;
    end
  end

  // always @(posedge clk) begin
  //   $display("--------------------------------");
  //   $display("PC           = %h", dut.imem_addr);
  //   $display("IF INSTR     = %h", dut.if_id_instr);
  //   $display("ID VALID     = %b", dut.id_ex_valid);
  //   $display("EX RD        = %0d", dut.ex_mem_rd);
  //   $display("WB RD        = %0d", dut.mem_wb_rd);
  //   $display("WB DATA      = %h", dut.regfile_rd_data);
  //   $display("x1 = %0d", dut.stage_id_01.regfile_01.regs[1]);
  //   $display("x2 = %0d", dut.stage_id_01.regfile_01.regs[2]);
  //   $display("x3 = %0d", dut.stage_id_01.regfile_01.regs[3]);
  //   $display("IMM        = %h", dut.id_ex_imm);
  //   $display("ALU_USE_IMM= %b", dut.id_ex_alu_use_imm);
  //   $display("ALU_OP     = %0d", dut.id_ex_alu_op);
  //   $display("A           = %h", dut.id_ex_A);
  //   $display("B           = %h", dut.id_ex_B);

  // end

endmodule