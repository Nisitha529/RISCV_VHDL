`timescale 1ns/1ps

module tb_stage_mem;

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 5;

  // --------------------------------------------------
  // DUT inputs
  // --------------------------------------------------

  logic [DATA_WIDTH - 1 : 0] ex_mem_alu_result;
  logic [DATA_WIDTH - 1 : 0] ex_mem_B;

  logic [ADDR_WIDTH - 1 : 0] ex_mem_rd;

  logic                      ex_mem_write_rd;

  logic                      ex_mem_write_mem;
  logic                      ex_mem_mem_access;
  logic [5 : 0]              ex_mem_mem_width;

  logic [2 : 0]              ex_mem_rd_data_src;

  logic                      ex_mem_valid;

  // --------------------------------------------------
  // DMEM interface
  // --------------------------------------------------

  logic                      dmem_mem_access;
  logic                      dmem_write_enable;

  logic [5 : 0]              dmem_mem_width;

  logic [DATA_WIDTH - 1 : 0] dmem_addr;
  logic [DATA_WIDTH - 1 : 0] dmem_write_data;

  logic [DATA_WIDTH - 1 : 0] dmem_read_data;

  // --------------------------------------------------
  // MEM/WB outputs
  // --------------------------------------------------

  logic [DATA_WIDTH - 1 : 0] mem_wb_alu_result;
  logic [DATA_WIDTH - 1 : 0] mem_wb_mem_data;

  logic [ADDR_WIDTH - 1 : 0] mem_wb_rd;

  logic                      mem_wb_write_rd;

  logic [2 : 0]              mem_wb_rd_data_src;

  logic                      mem_wb_valid;

  // --------------------------------------------------
  // DUT
  // --------------------------------------------------

  stage_mem dut (
    .ex_mem_alu_result  (ex_mem_alu_result),
    .ex_mem_B           (ex_mem_B),

    .ex_mem_rd          (ex_mem_rd),

    .ex_mem_write_rd    (ex_mem_write_rd),

    .ex_mem_write_mem   (ex_mem_write_mem),
    .ex_mem_mem_access  (ex_mem_mem_access),
    .ex_mem_mem_width   (ex_mem_mem_width),

    .ex_mem_rd_data_src (ex_mem_rd_data_src),

    .ex_mem_valid       (ex_mem_valid),

    .dmem_mem_access    (dmem_mem_access),
    .dmem_write_enable  (dmem_write_enable),

    .dmem_mem_width     (dmem_mem_width),

    .dmem_addr          (dmem_addr),
    .dmem_write_data    (dmem_write_data),

    .dmem_read_data     (dmem_read_data),

    .mem_wb_alu_result  (mem_wb_alu_result),
    .mem_wb_mem_data    (mem_wb_mem_data),

    .mem_wb_rd          (mem_wb_rd),

    .mem_wb_write_rd    (mem_wb_write_rd),

    .mem_wb_rd_data_src (mem_wb_rd_data_src),

    .mem_wb_valid       (mem_wb_valid)
  );

  // --------------------------------------------------
  // Self-check task
  // --------------------------------------------------

  task automatic check_outputs (
    input [31 : 0] expected_alu,
    input [31 : 0] expected_mem,

    input [4 : 0]  expected_rd,

    input           expected_write_rd,
    input           expected_valid,

    input string    test_name
  );

    begin

      #1;

      if (
        (mem_wb_alu_result !== expected_alu) ||
        (mem_wb_mem_data   !== expected_mem) ||
        (mem_wb_rd         !== expected_rd)  ||
        (mem_wb_write_rd   !== expected_write_rd) ||
        (mem_wb_valid      !== expected_valid)
      ) begin

        $display("[FAIL] %s", test_name);

        $display("Expected ALU   : %h", expected_alu);
        $display("Actual   ALU   : %h", mem_wb_alu_result);

        $display("Expected MEM   : %h", expected_mem);
        $display("Actual   MEM   : %h", mem_wb_mem_data);

        $display("Expected RD    : %0d", expected_rd);
        $display("Actual   RD    : %0d", mem_wb_rd);

        $finish;

      end else begin

        $display("[PASS] %s", test_name);

      end

    end

  endtask

  // --------------------------------------------------
  // Test sequence
  // --------------------------------------------------

  initial begin

    // Defaults
    ex_mem_alu_result  = '0;
    ex_mem_B           = '0;

    ex_mem_rd          = '0;

    ex_mem_write_rd    = 1'b0;

    ex_mem_write_mem   = 1'b0;
    ex_mem_mem_access  = 1'b0;
    ex_mem_mem_width   = 32;

    ex_mem_rd_data_src = 3'd0;

    ex_mem_valid       = 1'b0;

    dmem_read_data     = '0;

    // --------------------------------------------------
    // Invalid bubble
    // --------------------------------------------------

    #1;

    check_outputs(
      32'd0,
      32'd0,

      5'd0,

      1'b0,
      1'b0,

      "INVALID BUBBLE"
    );

    // --------------------------------------------------
    // ALU-only instruction
    // --------------------------------------------------

    ex_mem_valid       = 1'b1;

    ex_mem_alu_result  = 32'h12345678;

    ex_mem_rd          = 5'd3;

    ex_mem_write_rd    = 1'b1;

    ex_mem_mem_access  = 1'b0;

    #1;

    check_outputs(
      32'h12345678,
      32'd0,

      5'd3,

      1'b1,
      1'b1,

      "ALU ONLY"
    );

    // --------------------------------------------------
    // LOAD instruction
    // --------------------------------------------------

    ex_mem_mem_access  = 1'b1;
    ex_mem_write_mem   = 1'b0;

    dmem_read_data     = 32'hDEADBEEF;

    ex_mem_rd          = 5'd8;

    #1;

    check_outputs(
      32'h12345678,
      32'hDEADBEEF,

      5'd8,

      1'b1,
      1'b1,

      "LOAD"
    );

    // --------------------------------------------------
    // STORE instruction
    // --------------------------------------------------

    ex_mem_write_rd    = 1'b0;

    ex_mem_write_mem   = 1'b1;

    ex_mem_B           = 32'hCAFEBABE;

    #1;

    if (
      (dmem_mem_access   !== 1'b1)         ||
      (dmem_write_enable !== 1'b1)         ||
      (dmem_addr         !== 32'h12345678) ||
      (dmem_write_data   !== 32'hCAFEBABE)
    ) begin

      $display("[FAIL] STORE INTERFACE");

      $finish;

    end else begin

      $display("[PASS] STORE INTERFACE");

    end

    // --------------------------------------------------
    // DONE
    // --------------------------------------------------

    $display("");
    $display("ALL STAGE_MEM TESTS PASSED");
    $display("");

    $finish;

  end

endmodule