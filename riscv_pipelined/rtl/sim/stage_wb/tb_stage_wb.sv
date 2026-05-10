`timescale 1ns/1ps

module tb_stage_wb;

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 5;

  // DUT inputs
  logic [DATA_WIDTH - 1 : 0] mem_wb_alu_result;
  logic [DATA_WIDTH - 1 : 0] mem_wb_mem_data;

  logic [ADDR_WIDTH - 1 : 0] mem_wb_rd;

  logic                      mem_wb_write_rd;
  logic [2 : 0]              mem_wb_rd_data_src;

  logic                      mem_wb_valid;

  // DUT outputs
  logic                      regfile_write_enable;

  logic [ADDR_WIDTH - 1 : 0] regfile_rd_addr;
  logic [DATA_WIDTH - 1 : 0] regfile_rd_data;

  // DUT
  stage_wb dut_stage_wb (
    .mem_wb_alu_result    (mem_wb_alu_result),
    .mem_wb_mem_data      (mem_wb_mem_data),

    .mem_wb_rd            (mem_wb_rd),

    .mem_wb_write_rd      (mem_wb_write_rd),
    .mem_wb_rd_data_src   (mem_wb_rd_data_src),

    .mem_wb_valid         (mem_wb_valid),

    .regfile_write_enable (regfile_write_enable),

    .regfile_rd_addr      (regfile_rd_addr),
    .regfile_rd_data      (regfile_rd_data)
  );

  // Self-check task
  task automatic check_result (
    input [31 : 0] expected_data,
    input [4 : 0]  expected_rd,
    input          expected_we,

    input string   test_name
  );
    begin

      #1;

      if ((regfile_rd_data !== expected_data) || (regfile_rd_addr !== expected_rd) || (regfile_write_enable !== expected_we)) begin
        $display("[FAIL] %s", test_name);

        $display("Expected DATA : %h", expected_data);
        $display("Actual   DATA : %h", regfile_rd_data);

        $display("Expected RD   : %0d", expected_rd);
        $display("Actual   RD   : %0d", regfile_rd_addr);

        $display("Expected WE   : %b", expected_we);
        $display("Actual   WE   : %b", regfile_write_enable);

        $finish;

      end else begin
        $display("[PASS] %s", test_name);
      end
    end

  endtask

  // Test sequence
  initial begin

    // Defaults
    mem_wb_alu_result  = 32'h12345678;
    mem_wb_mem_data    = 32'hDEADBEEF;

    mem_wb_rd          = 5'd10;

    mem_wb_write_rd    = 1'b1;
    mem_wb_rd_data_src = 3'd0;

    mem_wb_valid       = 1'b1;

    // ALU result
    #1;

    check_result(32'h12345678, 5'd10, 1'b1, "ALU WRITEBACK");

    // LOAD result
    mem_wb_rd_data_src = 3'd4;

    #1;

    check_result(32'hDEADBEEF, 5'd10, 1'b1, "LOAD WRITEBACK");

    // Invalid pipeline
    mem_wb_valid       = 1'b0;

    #1;

    check_result(32'hDEADBEEF, 5'd10, 1'b0, "INVALID PIPELINE");

    // Write disabled
    mem_wb_valid       = 1'b1;
    mem_wb_write_rd    = 1'b0;

    #1;

    check_result(32'hDEADBEEF, 5'd10, 1'b0, "WRITE DISABLED");

    // DONE
    $display("");
    $display("ALL STAGE_WB TESTS PASSED");
    $display("");

    $finish;

  end

endmodule