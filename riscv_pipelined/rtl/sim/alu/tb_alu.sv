`timescale 1ns/1ps

module tb_alu;

  logic [31 : 0] op1;
  logic [31 : 0] op2;

  logic [3 : 0]  alu_op;

  logic [31 : 0] result;
  logic          zero;

  alu dut (
    .op1    (op1),
    .op2    (op2),

    .alu_op (alu_op),

    .result (result),
    .zero   (zero)
  );

  task automatic check_result (
    input [31 : 0] expected,
    input string   test_name
  );
    begin
      #1;
      if (result !== expected) begin
	      $display("[FAIL] %s", test_name);

	      $display("Expected : %h", expected);
	      $display("Actual   : %h", result);

	      $finish;
      end else begin
        $display("[PASS] %s -> %h", test_name, result);
      end
    end
  endtask

  initial begin

    op1    = 32'd10;
    op2    = 32'd20;
    alu_op = 4'd0;

    check_result(32'd30, "ADD");

    op1    = 32'd100;
    op2    = 32'd55;
    alu_op = 4'd1;

    check_result(32'd55, "PASS");

    op1    = 32'd50;
    op2    = 32'd15;
    alu_op = 4'd2;

    check_result(32'd35, "SUB");

    op1    = 32'hFF00_FF00;
    op2    = 32'h0F0F_0F0F;
    alu_op = 4'd3;

    check_result(32'h0F00_0F00, "AND");

    op1    = 32'hF000_0000;
    op2    = 32'h0000_1111;
    alu_op = 4'd4;

    check_result(32'hF000_1111, "OR");

    op1    = 32'hAAAA_AAAA;
    op2    = 32'hFFFF_0000;
    alu_op = 4'd5;

    check_result(32'h5555_AAAA, "XOR");

    op1    = 32'd1;
    op2    = 32'd4;
    alu_op = 4'd6;

    check_result(32'd16, "SLL");

    op1    = 32'd16;
    op2    = 32'd1;
    alu_op = 4'd7;

    check_result(32'd8, "SRL");

    op1    = 32'hFFFF_FFF0;
    op2    = 32'd2;
    alu_op = 4'd8;

    check_result(32'hFFFF_FFFC, "SRA");

    op1    = -32'sd5;
    op2    =  32'sd3;
    alu_op = 4'd9;

    check_result(32'd1, "SLT");

    op1    = 32'd3;
    op2    = 32'd5;
    alu_op = 4'd10;

    check_result(32'd1, "SLTU");

    op1    = 32'd10;
    op2    = 32'd10;
    alu_op = 4'd2;

    #1;

    if (zero == 1'b1)
	    $display("[PASS] ZERO FLAG");
    else begin
	    $display("[FAIL] ZERO FLAG %d",zero);
	    $finish;
    end

    $display("");
    $display("ALL TESTS PASSED");
    $display("");

    $finish;

  end

endmodule