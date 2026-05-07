`timescale 1ns/1ps

module tb_decoder;
  logic [31 : 0] instr;

  logic [6 : 0] opcode;

  logic [4 : 0] rd;
  logic [2 : 0] funct3;

  logic [4 : 0] rs1;
  logic [4 : 0] rs2;

  logic [6 : 0] funct7;

  // DUT
  decoder dut_decoder (
    .instr  (instr),

    .opcode (opcode),

    .rd     (rd),
    .funct3 (funct3),

    .rs1    (rs1),
    .rs2    (rs2),

   .funct7  (funct7)
  );

  task automatic check_decode (
    input [6 : 0] expected_opcode,

    input [4 : 0] expected_rd,
    input [2 : 0] expected_funct3,

    input [4 : 0] expected_rs1,
    input [4 : 0] expected_rs2,

    input [6 : 0] expected_funct7,

    input string  test_name
  );
    begin
      #1;

      if (opcode !== expected_opcode || rd !== expected_rd || funct3 !== expected_funct3 || rs1 !== expected_rs1 || rs2 !== expected_rs2 || funct7 !== expected_funct7) begin
        $display("[FAIL] %s", test_name);

        $display("Expected:");
        $display("opcode = %h", expected_opcode);
        $display("rd     = %0d", expected_rd);
        $display("funct3 = %h", expected_funct3);
        $display("rs1    = %0d", expected_rs1);
        $display("rs2    = %0d", expected_rs2);
        $display("funct7 = %h", expected_funct7);

        $display("");

        $display("Actual:");
        $display("opcode = %h", opcode);
        $display("rd     = %0d", rd);
        $display("funct3 = %h", funct3);
        $display("rs1    = %0d", rs1);
        $display("rs2    = %0d", rs2);
        $display("funct7 = %h", funct7);

        $finish;

      end else begin
        $display("[PASS] %s", test_name);
      end

    end

  endtask

  // Test sequence
  initial begin

    // ADD
    // add x5, x6, x7
    // funct7 = 0000000
    // rs2    = 00111
    // rs1    = 00110
    // funct3 = 000
    // rd     = 00101
    // opcode = 0110011
    instr = 32'b0000000_00111_00110_000_00101_0110011;
    check_decode(7'b0110011, 5'd5, 3'b000, 5'd6, 5'd7, 7'b0000000, "ADD");

    // SUB
    // sub x10, x11, x12
    instr = 32'b0100000_01100_01011_000_01010_0110011;
    check_decode(7'b0110011, 5'd10, 3'b000, 5'd11, 5'd12, 7'b0100000, "SUB");

    // LW
    // lw x3, 8(x4)
    instr = 32'b000000001000_00100_010_00011_0000011;
    check_decode(7'b0000011, 5'd3, 3'b010, 5'd4, 5'd8,7'b0000000, "LW");

    // SW
    // sw x9, 16(x2)
    instr = 32'b0000000_01001_00010_010_10000_0100011;
    check_decode(7'b0100011, 5'd16, 3'b010, 5'd2, 5'd9, 7'b0000000, "SW");

    // BEQ 
    instr = 32'b0000000_00101_00100_000_00000_1100011;
    check_decode(7'b1100011, 5'd0, 3'b000, 5'd4, 5'd5, 7'b0000000,"BEQ");

    // DONE
    $display("");
    $display("ALL DECODER TESTS PASSED");
    $display("");

    $finish;

  end

endmodule