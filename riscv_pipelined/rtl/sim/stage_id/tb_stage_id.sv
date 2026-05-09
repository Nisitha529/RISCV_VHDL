`timescale 1ns/1ps

module tb_stage_id;
  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 5;

  logic                      clk;
  logic                      rst;

  // IF/ID inputs
  logic [DATA_WIDTH - 1 : 0] if_id_pc;
  logic [DATA_WIDTH - 1 : 0] if_id_instr;

  logic                      if_id_valid;

  // Hazard control
  logic                      stall;
  logic                      flush;

  // Writeback interface
  logic                      wb_write_enable;

  logic [ADDR_WIDTH - 1 : 0] wb_rd_addr;
  logic [DATA_WIDTH - 1 : 0] wb_rd_data;

  // ID/EX outputs
  logic [DATA_WIDTH - 1 : 0] id_ex_pc;

  logic [DATA_WIDTH - 1 : 0] id_ex_A;
  logic [DATA_WIDTH - 1 : 0] id_ex_B;

  logic [DATA_WIDTH - 1 : 0] id_ex_imm;

  logic [ADDR_WIDTH - 1 : 0] id_ex_rs1;
  logic [ADDR_WIDTH - 1 : 0] id_ex_rs2;
  logic [ADDR_WIDTH - 1 : 0] id_ex_rd;

  // Control signals
  logic [3 : 0]              id_ex_alu_op;
  logic                      id_ex_alu_use_imm;

  logic                      id_ex_write_rd;

  logic                      id_ex_write_mem;
  logic                      id_ex_mem_access;
  logic [5 : 0]              id_ex_mem_width;

  logic                      id_ex_jump;
  logic                      id_ex_is_branch;

  logic [2 : 0]              id_ex_rd_data_src;

  logic [2 : 0]              id_ex_imm_type;

  logic                      id_ex_valid;

  // DUT
  stage_id dut_stage_id (
    .clk               (clk),
    .rst               (rst),

    .if_id_pc          (if_id_pc),
    .if_id_instr       (if_id_instr),

    .if_id_valid       (if_id_valid),

    .stall             (stall),
    .flush             (flush),

    .wb_write_enable   (wb_write_enable),

    .wb_rd_addr        (wb_rd_addr),
    .wb_rd_data        (wb_rd_data),

    .id_ex_pc          (id_ex_pc),

    .id_ex_A           (id_ex_A),
    .id_ex_B           (id_ex_B),

    .id_ex_imm         (id_ex_imm),

    .id_ex_rs1         (id_ex_rs1),
    .id_ex_rs2         (id_ex_rs2),
    .id_ex_rd          (id_ex_rd),

    .id_ex_alu_op      (id_ex_alu_op),
    .id_ex_alu_use_imm (id_ex_alu_use_imm),

    .id_ex_write_rd    (id_ex_write_rd),

    .id_ex_write_mem   (id_ex_write_mem),
    .id_ex_mem_access  (id_ex_mem_access),
    .id_ex_mem_width   (id_ex_mem_width),

    .id_ex_jump        (id_ex_jump),
    .id_ex_is_branch   (id_ex_is_branch),

    .id_ex_rd_data_src (id_ex_rd_data_src),

    .id_ex_imm_type    (id_ex_imm_type),

    .id_ex_valid       (id_ex_valid)
  );

  // Clock
  initial begin
    clk = 0;

    forever #5 clk = ~clk;
  end

  task automatic check_id (
    input [31 : 0] expected_pc,
    input [31 : 0] expected_A,
    input [31 : 0] expected_B,
    input [31 : 0] expected_imm,

    input [4 : 0]  expected_rs1,
    input [4 : 0]  expected_rs2,
    input [4 : 0]  expected_rd,

    input           expected_valid,

    input string    test_name
  );
    begin
      #1;

    if (
      id_ex_pc    !== expected_pc  || id_ex_A   !== expected_A   || id_ex_B  !== expected_B  || id_ex_imm !== expected_imm ||

      id_ex_rs1   !== expected_rs1 || id_ex_rs2 !== expected_rs2 || id_ex_rd !== expected_rd ||

      id_ex_valid !== expected_valid ) begin
        $display("[FAIL] %s", test_name);

        $display("Expected PC    : %h", expected_pc);
        $display("Actual   PC    : %h", id_ex_pc);

        $display("Expected A     : %h", expected_A);
        $display("Actual   A     : %h", id_ex_A);

        $display("Expected B     : %h", expected_B);
        $display("Actual   B     : %h", id_ex_B);

        $display("Expected IMM   : %h", expected_imm);
        $display("Actual   IMM   : %h", id_ex_imm);

        $finish;
      end else begin
        $display("[PASS] %s", test_name);
      end
    end
  endtask

  initial begin
    rst             = 1'b1;

    stall           = 1'b0;
    flush           = 1'b0;

    if_id_valid     = 1'b0;

    wb_write_enable = 1'b0;
    wb_rd_addr      = '0;
    wb_rd_data      = '0;

    if_id_pc        = '0;
    if_id_instr     = '0;

    // Reset
    repeat (2) @(posedge clk);
    rst             = 1'b0;

    // Write x1 = 10
    @(posedge clk);
    wb_write_enable = 1'b1;

    wb_rd_addr      = 5'd1;
    wb_rd_data      = 32'd10;

    @(posedge clk);

    // Write x2 = 20
    wb_rd_addr      = 5'd2;
    wb_rd_data      = 32'd20;

    @(posedge clk);

    wb_write_enable = 1'b0;

    // ADD x3, x1, x2
    // opcode = 0110011
    // funct3 = 000
    // funct7 = 0000000
    // rs1    = 1
    // rs2    = 2
    // rd     = 3
    if_id_pc        = 32'h00000020;
    if_id_instr     = 32'b0000000_00010_00001_000_00011_0110011;
    if_id_valid     = 1'b1;

    @(posedge clk);
    check_id(32'h20, 32'd10, 32'd20, 32'd0, 5'd1, 5'd2, 5'd3, 1'b1, "ADD DECODE");

    // ADDI x4, x1, 100
    if_id_pc        = 32'h00000024;
    if_id_instr     = 32'b000001100100_00001_000_00100_0010011;

    @(posedge clk);
    check_id(32'h24, 32'd10, 32'd0, 32'd100, 5'd1, 5'd4, 5'd4, 1'b1, "ADDI DECODE");

    // STALL
    stall           = 1'b1;
    if_id_pc        = 32'h1000;
    if_id_instr     = 32'hFFFFFFFF;

    @(posedge clk);
    check_id(32'h24, 32'd10, 32'd0, 32'd100, 5'd1, 5'd4, 5'd4, 1'b1, "STALL HOLD");

    stall = 1'b0;

    // FLUSH
    flush = 1'b1;

    @(posedge clk);
    #1;

    if (!id_ex_valid)
      $display("[PASS] FLUSH");
    else begin
      $display("[FAIL] FLUSH");
      $finish;
    end

    flush = 1'b0;

    // DONE
    $display("");
    $display("ALL STAGE_ID TESTS PASSED");
    $display("");

    $finish;

  end

endmodule