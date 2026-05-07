`timescale 1ns/1ps

module tb_immediate_generator;

  logic [31 : 0] instr;
  logic [2  : 0] imm_type;

  logic [31 : 0] imm_out;

  // DUT
  immediate_generator dut (
    .instr    (instr),
    .imm_type (imm_type),

    .imm_out  (imm_out)
  );

  // Self-check task
  task automatic check_imm (
    input [31 : 0] expected,
    input string   test_name
  );
    begin
      #1;
      if (imm_out !== expected) begin
        $display("[FAIL] %s", test_name);
        $display("Expected : %h", expected);
        $display("Actual   : %h", imm_out);

        $finish;
      end else begin
        $display("[PASS] %s -> %h", test_name, imm_out);
      end
    end
  endtask

  // Test sequence
  initial begin
    // I-TYPE
    // addi x1, x2, 100
    // imm = 100 = 0x64
    instr    = 32'b000001100100_00010_000_00001_0010011;
    imm_type = 3'd0;
    check_imm(32'd100, "I-TYPE POSITIVE");

    // I-TYPE NEGATIVE
    // imm = -1
    instr    = 32'hFFF00013;
    imm_type = 3'd0;
    check_imm(32'hFFFF_FFFF, "I-TYPE NEGATIVE");

    // S-TYPE
    // sw x5, 16(x2)
    // imm = 16
    instr    = 32'b0000000_00101_00010_010_10000_0100011;
    imm_type = 3'd1;
    check_imm(32'd16, "S-TYPE");

    // B-TYPE
    // beq x1, x2, 8
    // imm = 8
    instr    = 32'b0000000_00010_00001_000_01000_1100011;
    imm_type = 3'd2;
    check_imm(32'd8, "B-TYPE");

    // U-TYPE
    // lui x1, 0x12345
    instr    = 32'h123450B7;
    imm_type = 3'd3;
    check_imm(32'h12345000, "U-TYPE");

    // J-TYPE
    // jal x1, 2048 
    instr = 32'b00000000000100000000_00001_1101111;
    imm_type = 3'd4;
    check_imm(32'd2048, "J-TYPE");

    // DEFAULT
    instr = 32'hFFFFFFFF;
    imm_type = 3'd7;
    check_imm(32'd0, "DEFAULT");

    $display("");
    $display("ALL IMMEDIATE GENERATOR TESTS PASSED");
    $display("");

    $finish;
    
  end

endmodule