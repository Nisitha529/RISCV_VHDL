`timescale 1ns/1ps

module tb_imem;

  parameter DATA_WIDTH = 32;
  parameter MEM_DEPTH  = 16;
  parameter MEM_FILE   = "../top_cpu/program.hex";

  // DUT SIGNALS
  logic                      clk;
  logic                      rst;

  logic [DATA_WIDTH - 1 : 0] addr;
  logic                      instr_addr_valid;

  logic [DATA_WIDTH - 1 : 0] instr;
  logic                      instr_valid;

  // DUT
  imem #(
    .DATA_WIDTH       (DATA_WIDTH),
    .MEM_DEPTH        (MEM_DEPTH),
    .MEM_FILE         (MEM_FILE)
  ) dut (
    .clk              (clk),
    .rst              (rst),

    .addr             (addr),
    .instr_addr_valid (instr_addr_valid),

    .instr            (instr),
    .instr_valid      (instr_valid)
  );

  // CLOCK
  initial begin
    clk = 1'b0;

    forever #5 clk = ~clk;
  end

  // RESET
  initial begin
    rst              = 1'b1;

    addr             = '0;
    instr_addr_valid = 1'b0;

    #20;

    rst              = 1'b0;
  end

  // SELF CHECK TASK
  task check_instr (
    input [31 : 0] expected_instr,
    input          expected_valid,
    input [255:0]  test_name
  );
    begin

      @(posedge clk);
      #1;

      if ((instr !== expected_instr) || (instr_valid !== expected_valid)) begin
        $display("[FAIL] %0s", test_name);

        $display("Expected instr       = %h", expected_instr);
        $display("Actual   instr       = %h", instr);

        $display("Expected instr_valid = %b", expected_valid);
        $display("Actual   instr_valid = %b", instr_valid);

        $finish;

      end else begin
        $display("[PASS] %0s", test_name);

      end

    end

  endtask

  // TEST SEQUENCE
  initial begin
    // Wait reset release
    @(negedge rst);

    // FETCH INSTRUCTION 0
    addr             = 32'h00000000;
    instr_addr_valid = 1'b1;
    check_instr(32'h00A00093, 1'b1, "FETCH ADDI X1");

    // FETCH INSTRUCTION 1
    addr             = 32'h00000004;
    check_instr(32'h01400113, 1'b1, "FETCH ADDI X2");

    // FETCH INSTRUCTION 2
    addr             = 32'h00000008;
    check_instr(32'h002081B3, 1'b1, "FETCH ADD X3");

    // INVALID FETCH REQUEST
    instr_addr_valid = 1'b0;
    check_instr(32'h00000013, 1'b0, "INVALID FETCH");

    // OUT OF RANGE ACCESS
    instr_addr_valid = 1'b1;
    addr             = 32'h00001000;
    check_instr(32'h00000013, 1'b0, "OUT OF RANGE");

    // TEST PASSED
    $display("");
    $display("IMEM TEST PASSED");
    $display("");

    $finish;

  end

endmodule