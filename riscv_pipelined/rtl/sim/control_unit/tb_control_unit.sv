`timescale 1ns/1ps

module tb_control_unit;

  logic [6 : 0] opcode;
  logic [2 : 0] funct3;
  logic [6 : 0] funct7;

  // ALU
  logic [3 : 0] alu_op;
  logic         alu_use_imm;

  // Register file
  logic         write_rd;

  // Memory
  logic         write_mem;
  logic         mem_access;
  logic [5 : 0] mem_width;

  // Control flow
  logic         jump;
  logic         is_branch;

  // Writeback
  logic [2 : 0] rd_data_src;

  // Immediate type
  logic [2 : 0] imm_type;

  // DUT
  control_unit dut (
    .opcode       (opcode),
    .funct3       (funct3),
    .funct7       (funct7),

    .alu_op       (alu_op),
    .alu_use_imm  (alu_use_imm),

    .write_rd     (write_rd),

    .write_mem    (write_mem),
    .mem_access   (mem_access),
    .mem_width    (mem_width),

    .jump         (jump),
    .is_branch    (is_branch),

    .rd_data_src  (rd_data_src),

    .imm_type     (imm_type)
  );

  // -------------------------------------------------
  // CHECK TASK
  // -------------------------------------------------

  task automatic check_control (

    input [3 : 0] expected_alu_op,
    input         expected_alu_use_imm,

    input         expected_write_rd,

    input         expected_write_mem,
    input         expected_mem_access,
    input [5 : 0] expected_mem_width,

    input         expected_jump,
    input         expected_is_branch,

    input [2 : 0] expected_rd_data_src,
    input [2 : 0] expected_imm_type,

    input string  test_name
  );

    begin

      #1;

      if (
        alu_op      !== expected_alu_op      ||
        alu_use_imm !== expected_alu_use_imm ||

        write_rd    !== expected_write_rd    ||

        write_mem   !== expected_write_mem   ||
        mem_access  !== expected_mem_access  ||
        mem_width   !== expected_mem_width   ||

        jump        !== expected_jump        ||
        is_branch   !== expected_is_branch   ||

        rd_data_src !== expected_rd_data_src ||
        imm_type    !== expected_imm_type
      ) begin

        $display("[FAIL] %s", test_name);

        $display("--------------------------------");

        $display("Expected:");
        $display("alu_op       = %0d", expected_alu_op);
        $display("alu_use_imm  = %0d", expected_alu_use_imm);

        $display("write_rd     = %0d", expected_write_rd);

        $display("write_mem    = %0d", expected_write_mem);
        $display("mem_access   = %0d", expected_mem_access);
        $display("mem_width    = %0d", expected_mem_width);

        $display("jump         = %0d", expected_jump);
        $display("is_branch    = %0d", expected_is_branch);

        $display("rd_data_src  = %0d", expected_rd_data_src);
        $display("imm_type     = %0d", expected_imm_type);

        $display("--------------------------------");

        $display("Actual:");
        $display("alu_op       = %0d", alu_op);
        $display("alu_use_imm  = %0d", alu_use_imm);

        $display("write_rd     = %0d", write_rd);

        $display("write_mem    = %0d", write_mem);
        $display("mem_access   = %0d", mem_access);
        $display("mem_width    = %0d", mem_width);

        $display("jump         = %0d", jump);
        $display("is_branch    = %0d", is_branch);

        $display("rd_data_src  = %0d", rd_data_src);
        $display("imm_type     = %0d", imm_type);

        $finish;

      end

      else begin

        $display("[PASS] %s", test_name);

      end

    end

  endtask

  // -------------------------------------------------
  // TEST SEQUENCE
  // -------------------------------------------------

  initial begin

    // -------------------------------------------------
    // ADD
    // -------------------------------------------------

    opcode = 7'h33;
    funct3 = 3'b000;
    funct7 = 7'h00;

    check_control(
      4'd0,
      1'b0,

      1'b1,

      1'b0,
      1'b0,
      32,

      1'b0,
      1'b0,

      3'd0,
      3'd7,

      "ADD"
    );

    // -------------------------------------------------
    // SUB
    // -------------------------------------------------

    opcode = 7'h33;
    funct3 = 3'b000;
    funct7 = 7'h20;

    check_control(
      4'd2,
      1'b0,

      1'b1,

      1'b0,
      1'b0,
      32,

      1'b0,
      1'b0,

      3'd0,
      3'd7,

      "SUB"
    );

    // -------------------------------------------------
    // LW
    // -------------------------------------------------

    opcode = 7'h03;
    funct3 = 3'b010;
    funct7 = 7'h00;

    check_control(
      4'd0,
      1'b1,

      1'b1,

      1'b0,
      1'b1,
      32,

      1'b0,
      1'b0,

      3'd4,
      3'd0,

      "LW"
    );

    // -------------------------------------------------
    // SW
    // -------------------------------------------------

    opcode = 7'h23;
    funct3 = 3'b010;
    funct7 = 7'h00;

    check_control(
      4'd0,
      1'b1,

      1'b0,

      1'b1,
      1'b1,
      32,

      1'b0,
      1'b0,

      3'd0,
      3'd1,

      "SW"
    );

    // -------------------------------------------------
    // BEQ
    // -------------------------------------------------

    opcode = 7'h63;
    funct3 = 3'b000;
    funct7 = 7'h00;

    check_control(
      4'd0,
      1'b0,

      1'b0,

      1'b0,
      1'b0,
      32,

      1'b0,
      1'b1,

      3'd0,
      3'd2,

      "BEQ"
    );

    // -------------------------------------------------
    // JAL
    // -------------------------------------------------

    opcode = 7'h6F;
    funct3 = 3'b000;
    funct7 = 7'h00;

    check_control(
      4'd0,
      1'b0,

      1'b1,

      1'b0,
      1'b0,
      32,

      1'b1,
      1'b0,

      3'd2,
      3'd4,

      "JAL"
    );

    // -------------------------------------------------
    // LUI
    // -------------------------------------------------

    opcode = 7'h37;
    funct3 = 3'b000;
    funct7 = 7'h00;

    check_control(
      4'd0,
      1'b0,

      1'b1,

      1'b0,
      1'b0,
      32,

      1'b0,
      1'b0,

      3'd3,
      3'd3,

      "LUI"
    );

    // -------------------------------------------------
    // AUIPC
    // -------------------------------------------------

    opcode = 7'h17;
    funct3 = 3'b000;
    funct7 = 7'h00;

    check_control(
      4'd0,
      1'b0,

      1'b1,

      1'b0,
      1'b0,
      32,

      1'b0,
      1'b0,

      3'd1,
      3'd3,

      "AUIPC"
    );

    // -------------------------------------------------
    // ANDI
    // -------------------------------------------------

    opcode = 7'h13;
    funct3 = 3'b111;
    funct7 = 7'h00;

    check_control(
      4'd3,
      1'b1,

      1'b1,

      1'b0,
      1'b0,
      32,

      1'b0,
      1'b0,

      3'd0,
      3'd0,

      "ANDI"
    );

    // -------------------------------------------------
    // DONE
    // -------------------------------------------------

    $display("");
    $display("ALL CONTROL UNIT TESTS PASSED");
    $display("");

    $finish;

  end

endmodule