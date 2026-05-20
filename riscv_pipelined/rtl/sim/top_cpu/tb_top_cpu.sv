`timescale 1ns/1ps

module tb_top_cpu ();

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 32;  
  parameter MEM_DEPTH  = 256;
  parameter MEM_FILE   = "program.hex";

  logic clk;
  logic rst;

  top_cpu #(
    .DATA_WIDTH (DATA_WIDTH),
    .ADDR_WIDTH (ADDR_WIDTH),
    .IMEM_DEPTH (MEM_DEPTH),
    .DMEM_DEPTH (MEM_DEPTH),
    .MEM_FILE   (MEM_FILE)
  ) dut (
    .clk        (clk),
    .rst        (rst)
  );

  initial begin
    clk = 0;
    forever #10 clk = ~clk;
  end

  // Reset
  initial begin
    rst = 1;

    repeat (2) @(posedge clk);
    rst = 0;
  end

  // Wait for program to finish 
  initial begin
    repeat (30) @(posedge clk);   
    #1;

    $display("Checking final registers");

    check_register(1, 32'd10);
    check_register(2, 32'd20);
    check_register(3, 32'd30);

    $display("TOP CPU TEST PASSED");
    $finish;
  end

  task automatic check_register(
    input int            reg_num,
    input logic [31 : 0] expected
  );
    logic [31 : 0] actual;

    actual = dut.stage_id_01.regfile_01.regs[reg_num];
    
    if (actual !== expected) begin
      $display("[FAIL] x%d: Expected = %0d, Actual = %0d", reg_num, expected, actual);
      $finish;
    end else begin
      $display("[PASS] x%d = %0d", reg_num, actual);
    end
  endtask

  initial begin
    $dumpfile("tb_top_cpu.vcd");
    $dumpvars(0, tb_top_cpu);
  end

endmodule