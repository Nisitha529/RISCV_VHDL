`timescale 1ns/1ps

module tb_stage_ex;

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 5;

  // --------------------------------------------------
  // ID/EX inputs
  // --------------------------------------------------

  logic [DATA_WIDTH - 1 : 0] id_ex_pc;

  logic [DATA_WIDTH - 1 : 0] id_ex_A;
  logic [DATA_WIDTH - 1 : 0] id_ex_B;

  logic [DATA_WIDTH - 1 : 0] id_ex_imm;

  logic [ADDR_WIDTH - 1 : 0] id_ex_rs1;
  logic [ADDR_WIDTH - 1 : 0] id_ex_rs2;
  logic [ADDR_WIDTH - 1 : 0] id_ex_rd;

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

  // --------------------------------------------------
  // EX/MEM forwarding inputs
  // --------------------------------------------------

  logic                      ex_mem_valid;
  logic                      ex_mem_write_rd;

  logic [ADDR_WIDTH - 1 : 0] ex_mem_rd;

  logic [DATA_WIDTH - 1 : 0] ex_mem_alu_result;

  // --------------------------------------------------
  // MEM/WB forwarding inputs
  // --------------------------------------------------

  logic                      mem_wb_valid;
  logic                      mem_wb_write_rd;

  logic [ADDR_WIDTH - 1 : 0] mem_wb_rd;

  logic [DATA_WIDTH - 1 : 0] mem_wb_alu_result;
  logic [DATA_WIDTH - 1 : 0] mem_wb_mem_data;

  logic [2 : 0]              mem_wb_rd_data_src;

  // --------------------------------------------------
  // Outputs
  // --------------------------------------------------

  logic [DATA_WIDTH - 1 : 0] ex_mem_pc;

  logic [DATA_WIDTH - 1 : 0] ex_mem_alu_result_out;
  logic [DATA_WIDTH - 1 : 0] ex_mem_B_out;

  logic [ADDR_WIDTH - 1 : 0] ex_mem_rd_out;

  logic [3 : 0]              ex_mem_alu_op_out;
  logic                      ex_mem_alu_use_imm_out;

  logic                      ex_mem_write_rd_out;

  logic                      ex_mem_write_mem_out;
  logic                      ex_mem_mem_access_out;
  logic [5 : 0]              ex_mem_mem_width_out;

  logic                      ex_mem_jump_out;
  logic                      ex_mem_is_branch_out;

  logic [2 : 0]              ex_mem_rd_data_src_out;

  logic [2 : 0]              ex_mem_imm_type_out;

  logic                      ex_mem_take_branch;
  logic [DATA_WIDTH - 1 : 0] ex_mem_branch_target;

  logic                      ex_mem_valid_out;

  // --------------------------------------------------
  // DUT
  // --------------------------------------------------

  stage_ex dut (
    .id_ex_pc                 (id_ex_pc),

    .id_ex_A                  (id_ex_A),
    .id_ex_B                  (id_ex_B),

    .id_ex_imm                (id_ex_imm),

    .id_ex_rs1                (id_ex_rs1),
    .id_ex_rs2                (id_ex_rs2),
    .id_ex_rd                 (id_ex_rd),

    .id_ex_alu_op             (id_ex_alu_op),
    .id_ex_alu_use_imm        (id_ex_alu_use_imm),

    .id_ex_write_rd           (id_ex_write_rd),

    .id_ex_write_mem          (id_ex_write_mem),
    .id_ex_mem_access         (id_ex_mem_access),
    .id_ex_mem_width          (id_ex_mem_width),

    .id_ex_jump               (id_ex_jump),
    .id_ex_is_branch          (id_ex_is_branch),

    .id_ex_rd_data_src        (id_ex_rd_data_src),

    .id_ex_imm_type           (id_ex_imm_type),

    .id_ex_valid              (id_ex_valid),

    .ex_mem_valid             (ex_mem_valid),
    .ex_mem_write_rd          (ex_mem_write_rd),

    .ex_mem_rd                (ex_mem_rd),

    .ex_mem_alu_result        (ex_mem_alu_result),

    .mem_wb_valid             (mem_wb_valid),
    .mem_wb_write_rd          (mem_wb_write_rd),

    .mem_wb_rd                (mem_wb_rd),

    .mem_wb_alu_result        (mem_wb_alu_result),
    .mem_wb_mem_data          (mem_wb_mem_data),

    .mem_wb_rd_data_src       (mem_wb_rd_data_src),

    .ex_mem_pc                (ex_mem_pc),

    .ex_mem_alu_result        (ex_mem_alu_result_out),
    .ex_mem_B                 (ex_mem_B_out),

    .ex_mem_rd                (ex_mem_rd_out),

    .ex_mem_alu_op            (ex_mem_alu_op_out),
    .ex_mem_alu_use_imm       (ex_mem_alu_use_imm_out),

    .ex_mem_write_rd          (ex_mem_write_rd_out),

    .ex_mem_write_mem         (ex_mem_write_mem_out),
    .ex_mem_mem_access        (ex_mem_mem_access_out),
    .ex_mem_mem_width         (ex_mem_mem_width_out),

    .ex_mem_jump              (ex_mem_jump_out),
    .ex_mem_is_branch         (ex_mem_is_branch_out),

    .ex_mem_rd_data_src       (ex_mem_rd_data_src_out),

    .ex_mem_imm_type          (ex_mem_imm_type_out),

    .ex_mem_take_branch       (ex_mem_take_branch),
    .ex_mem_branch_target     (ex_mem_branch_target),

    .ex_mem_valid             (ex_mem_valid_out)
  );

  // --------------------------------------------------
  // Check task
  // --------------------------------------------------

  task automatic check_result (
    input [31 : 0] expected_result,
    input string   test_name
  );

    begin

      #1;

      if (ex_mem_alu_result_out !== expected_result) begin

        $display("[FAIL] %s", test_name);

        $display("Expected : %h", expected_result);
        $display("Actual   : %h", ex_mem_alu_result_out);

        $finish;

      end else begin

        $display("[PASS] %s -> %h", test_name, ex_mem_alu_result_out);

      end

    end

  endtask

  // --------------------------------------------------
  // Test sequence
  // --------------------------------------------------

  initial begin

    // Defaults
    id_ex_pc            = 32'h1000;

    id_ex_A             = 0;
    id_ex_B             = 0;

    id_ex_imm           = 0;

    id_ex_rs1           = 0;
    id_ex_rs2           = 0;
    id_ex_rd            = 0;

    id_ex_alu_op        = 0;
    id_ex_alu_use_imm   = 0;

    id_ex_write_rd      = 0;

    id_ex_write_mem     = 0;
    id_ex_mem_access    = 0;
    id_ex_mem_width     = 32;

    id_ex_jump          = 0;
    id_ex_is_branch     = 0;

    id_ex_rd_data_src   = 0;

    id_ex_imm_type      = 0;

    id_ex_valid         = 1;

    ex_mem_valid        = 0;
    ex_mem_write_rd     = 0;
    ex_mem_rd           = 0;
    ex_mem_alu_result   = 0;

    mem_wb_valid        = 0;
    mem_wb_write_rd     = 0;
    mem_wb_rd           = 0;

    mem_wb_alu_result   = 0;
    mem_wb_mem_data     = 0;

    mem_wb_rd_data_src  = 0;

    // --------------------------------------------------
    // ADD
    // --------------------------------------------------

    id_ex_A       = 32'd10;
    id_ex_B       = 32'd20;

    id_ex_alu_op  = 4'd0;

    #1;

    check_result(32'd30, "ADD");

    // --------------------------------------------------
    // SUB
    // --------------------------------------------------

    id_ex_A       = 32'd50;
    id_ex_B       = 32'd15;

    id_ex_alu_op  = 4'd2;

    #1;

    check_result(32'd35, "SUB");

    // --------------------------------------------------
    // ALU immediate
    // --------------------------------------------------

    id_ex_A             = 32'd10;
    id_ex_imm           = 32'd5;

    id_ex_alu_use_imm   = 1'b1;

    id_ex_alu_op        = 4'd0;

    #1;

    check_result(32'd15, "ALU IMM");

    id_ex_alu_use_imm = 1'b0;

    // --------------------------------------------------
    // EX forwarding
    // --------------------------------------------------

    ex_mem_valid        = 1'b1;
    ex_mem_write_rd     = 1'b1;

    ex_mem_rd           = 5'd1;

    ex_mem_alu_result   = 32'd100;

    id_ex_rs1           = 5'd1;

    id_ex_A             = 32'd5;
    id_ex_B             = 32'd10;

    id_ex_alu_op        = 4'd0;

    #1;

    check_result(32'd110, "EX FORWARD");

    // --------------------------------------------------
    // MEM forwarding
    // --------------------------------------------------

    ex_mem_valid        = 1'b0;

    mem_wb_valid        = 1'b1;
    mem_wb_write_rd     = 1'b1;

    mem_wb_rd           = 5'd2;

    mem_wb_alu_result   = 32'd200;

    id_ex_rs2           = 5'd2;

    id_ex_A             = 32'd1;
    id_ex_B             = 32'd2;

    #1;

    check_result(32'd201, "MEM FORWARD");

    // --------------------------------------------------
    // Branch target
    // --------------------------------------------------

    id_ex_pc            = 32'h1000;
    id_ex_imm           = 32'h20;

    #1;

    if (ex_mem_branch_target == 32'h1020)
      $display("[PASS] BRANCH TARGET");
    else begin
      $display("[FAIL] BRANCH TARGET");
      $finish;
    end

    // --------------------------------------------------
    // DONE
    // --------------------------------------------------

    $display("");
    $display("ALL STAGE_EX TESTS PASSED");
    $display("");

    $finish;

  end

endmodule