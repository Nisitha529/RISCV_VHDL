`timescale 1ns/1ps

module tb_stage_mem;

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 5;
  parameter MEM_DEPTH  = 4096;

  // Clock and reset
  logic clk;
  logic rst;

  // DUT inputs (EX/MEM stage)
  logic [DATA_WIDTH-1:0] ex_mem_alu_result;
  logic [DATA_WIDTH-1:0] ex_mem_B;
  logic [ADDR_WIDTH-1:0] ex_mem_rd;
  logic                  ex_mem_write_rd;
  logic                  ex_mem_write_mem;
  logic                  ex_mem_mem_access;
  logic [5:0]            ex_mem_mem_width;
  logic [2:0]            ex_mem_rd_data_src;
  logic                  ex_mem_valid;

  // DMEM interface (to be connected to actual dmem)
  logic                  dmem_mem_valid;
  logic                  dmem_write_enable;
  logic [5:0]            dmem_mem_width;
  logic [31:0]           dmem_addr;
  logic [31:0]           dmem_write_data;
  logic [31:0]           dmem_read_data;
  logic                  dmem_read_valid;
  logic                  dmem_mem_ready;

  // Stall output from stage_mem
  logic                  stall_mem;

  // MEM/WB outputs
  logic [31:0]           mem_wb_alu_result;
  logic [31:0]           mem_wb_mem_data;
  logic [4:0]            mem_wb_rd;
  logic                  mem_wb_write_rd;
  logic [2:0]            mem_wb_rd_data_src;
  logic                  mem_wb_valid;

  // DUT – stage_mem (new version)
  stage_mem dut (
    .clk                 (clk),
    .rst                 (rst),
    .ex_mem_alu_result   (ex_mem_alu_result),
    .ex_mem_B            (ex_mem_B),
    .ex_mem_rd           (ex_mem_rd),
    .ex_mem_write_rd     (ex_mem_write_rd),
    .ex_mem_write_mem    (ex_mem_write_mem),
    .ex_mem_mem_access   (ex_mem_mem_access),
    .ex_mem_mem_width    (ex_mem_mem_width),
    .ex_mem_rd_data_src  (ex_mem_rd_data_src),
    .ex_mem_valid        (ex_mem_valid),
    .dmem_mem_valid      (dmem_mem_valid),
    .dmem_write_enable   (dmem_write_enable),
    .dmem_mem_width      (dmem_mem_width),
    .dmem_addr           (dmem_addr),
    .dmem_write_data     (dmem_write_data),
    .dmem_read_data      (dmem_read_data),
    .dmem_read_valid     (dmem_read_valid),
    .dmem_mem_ready      (dmem_mem_ready),
    .stall_mem           (stall_mem),
    .mem_wb_alu_result   (mem_wb_alu_result),
    .mem_wb_mem_data     (mem_wb_mem_data),
    .mem_wb_rd           (mem_wb_rd),
    .mem_wb_write_rd     (mem_wb_write_rd),
    .mem_wb_rd_data_src  (mem_wb_rd_data_src),
    .mem_wb_valid        (mem_wb_valid)
  );

  // Real DMEM
  dmem #(
    .DATA_WIDTH (32),
    .ADDR_WIDTH (32),
    .MEM_DEPTH  (MEM_DEPTH)
  ) dmem_inst (
    .clk         (clk),
    .rst         (rst),
    .mem_valid   (dmem_mem_valid),
    .mem_ready   (dmem_mem_ready),
    .write_enable(dmem_write_enable),
    .mem_width   (dmem_mem_width),
    .addr        (dmem_addr),
    .write_data  (dmem_write_data),
    .read_data   (dmem_read_data),
    .read_valid  (dmem_read_valid)
  );

  // Clock generation
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  // Reset generation
  initial begin
    rst = 1;
    repeat (2) @(posedge clk);
    rst = 0;
  end

  // Helper task: apply inputs and wait for next clock edge
  task apply_and_advance();
    @(posedge clk);
    #1;  // let signals settle after clock edge
  endtask

  // Self-check task for MEM/WB outputs
  task automatic check_outputs(
    input [31:0] exp_alu,
    input [31:0] exp_mem,
    input [4:0]  exp_rd,
    input        exp_write_rd,
    input        exp_valid,
    input string test_name
  );
    begin
      // Wait a little after the clock edge where the output should be stable
      #1;
      if ((mem_wb_alu_result !== exp_alu) ||
          (mem_wb_mem_data   !== exp_mem) ||
          (mem_wb_rd         !== exp_rd)  ||
          (mem_wb_write_rd   !== exp_write_rd) ||
          (mem_wb_valid      !== exp_valid)) begin
        $display("[FAIL] %s", test_name);
        $display("Expected ALU   : %h, Actual: %h", exp_alu, mem_wb_alu_result);
        $display("Expected MEM   : %h, Actual: %h", exp_mem, mem_wb_mem_data);
        $display("Expected RD    : %0d, Actual: %0d", exp_rd, mem_wb_rd);
        $display("Expected WR_RD : %b, Actual: %b", exp_write_rd, mem_wb_write_rd);
        $display("Expected VALID : %b, Actual: %b", exp_valid, mem_wb_valid);
        $finish;
      end else begin
        $display("[PASS] %s", test_name);
      end
    end
  endtask

  // Test sequence
  initial begin
    // Initialise all inputs
    ex_mem_alu_result  = '0;
    ex_mem_B           = '0;
    ex_mem_rd          = '0;
    ex_mem_write_rd    = 1'b0;
    ex_mem_write_mem   = 1'b0;
    ex_mem_mem_access  = 1'b0;
    ex_mem_mem_width   = 32;
    ex_mem_rd_data_src = 3'd0;
    ex_mem_valid       = 1'b0;

    // Wait for reset to deassert
    @(posedge clk);
    @(posedge clk);
    #1;

    // --------------------------------------------------------------
    // Test 1: Invalid bubble (no valid instruction)
    // --------------------------------------------------------------
    check_outputs(32'd0, 32'd0, 5'd0, 1'b0, 1'b0, "INVALID BUBBLE");

    // --------------------------------------------------------------
    // Test 2: ALU-only instruction (no memory access)
    // --------------------------------------------------------------
    ex_mem_valid       = 1'b1;
    ex_mem_alu_result  = 32'h12345678;
    ex_mem_rd          = 5'd3;
    ex_mem_write_rd    = 1'b1;
    ex_mem_mem_access  = 1'b0;
    apply_and_advance();
    check_outputs(32'h12345678, 32'd0, 5'd3, 1'b1, 1'b1, "ALU ONLY");

    // --------------------------------------------------------------
    // Test 3: LOAD instruction (word, aligned, valid address)
    // --------------------------------------------------------------
    ex_mem_mem_access  = 1'b1;
    ex_mem_write_mem   = 1'b0;
    ex_mem_rd          = 5'd8;
    ex_mem_mem_width   = 32;               // word access
    ex_mem_alu_result  = 32'h00001000;     // word-aligned address
    // dmem will read from this address; we pre‑load data via backdoor later
    apply_and_advance();   // first cycle: memory request sent (mem_valid=1)
    // After this edge, dmem will return read_valid=1 on the next cycle
    apply_and_advance();   // second cycle: read_data arrives
    check_outputs(32'h00001000, 32'd0, 5'd8, 1'b1, 1'b1, "LOAD (no preload)");

    // To test actual data, we need to preload memory. We'll do a store first.
    // --------------------------------------------------------------
    // Test 4: STORE instruction (word, aligned)
    // --------------------------------------------------------------
    ex_mem_write_rd    = 1'b0;
    ex_mem_write_mem   = 1'b1;
    ex_mem_B           = 32'hCAFEBABE;
    ex_mem_mem_access  = 1'b1;
    ex_mem_alu_result  = 32'h00001000;     // same address
    apply_and_advance();
    // Check that dmem interface signals are correct
    if (dmem_mem_valid !== 1'b1 ||
        dmem_write_enable !== 1'b1 ||
        dmem_addr !== 32'h00001000 ||
        dmem_write_data !== 32'hCAFEBABE) begin
      $display("[FAIL] STORE INTERFACE");
      $finish;
    end else begin
      $display("[PASS] STORE INTERFACE");
    end

    // Wait one more cycle for the store to complete (no extra stall)
    apply_and_advance();
    // Now load back the same address
    ex_mem_write_mem   = 1'b0;
    ex_mem_write_rd    = 1'b1;
    ex_mem_rd          = 5'd8;
    apply_and_advance();   // request load
    apply_and_advance();   // data arrives
    check_outputs(32'h00001000, 32'hCAFEBABE, 5'd8, 1'b1, 1'b1, "LOAD AFTER STORE");

    // --------------------------------------------------------------
    // Test 5: Misaligned access (mem_ready = 0)
    // --------------------------------------------------------------
    ex_mem_alu_result  = 32'h00001001;     // unaligned word address
    ex_mem_mem_width   = 32;
    ex_mem_write_mem   = 1'b0;             // load
    apply_and_advance();   // request load with unaligned address
    // Because mem_ready should be 0, dmem_mem_valid will be 0, and stall_mem=1
    if (dmem_mem_valid !== 1'b0 || stall_mem !== 1'b1) begin
      $display("[FAIL] MISALIGNED: mem_valid=%b, stall=%b", dmem_mem_valid, stall_mem);
      $finish;
    end else begin
      $display("[PASS] MISALIGNED (stall asserted)");
    end

    // --------------------------------------------------------------
    // Test 6: Out-of-bounds access (mem_ready = 0)
    // --------------------------------------------------------------
    ex_mem_alu_result  = 32'hFFFFFFFF;     // far beyond MEM_DEPTH
    apply_and_advance();
    if (dmem_mem_valid !== 1'b0 || stall_mem !== 1'b1) begin
      $display("[FAIL] OUT OF BOUNDS: mem_valid=%b, stall=%b", dmem_mem_valid, stall_mem);
      $finish;
    end else begin
      $display("[PASS] OUT OF BOUNDS (stall asserted)");
    end

    // --------------------------------------------------------------
    // Test 7: Back-to-back loads (no stall, pipeline continues)
    // --------------------------------------------------------------
    ex_mem_alu_result  = 32'h00001000;
    ex_mem_mem_width   = 32;
    ex_mem_write_mem   = 1'b0;
    ex_mem_write_rd    = 1'b1;
    ex_mem_rd          = 5'd9;
    apply_and_advance();   // request load A
    apply_and_advance();   // data A arrives, mem_wb_valid=1
    check_outputs(32'h00001000, 32'hCAFEBABE, 5'd9, 1'b1, 1'b1, "LOAD A");
    // Immediately next instruction (load B) without waiting
    ex_mem_alu_result  = 32'h00001004;
    ex_mem_rd          = 5'd10;
    apply_and_advance();   // request load B
    apply_and_advance();   // data B arrives (but we haven't preloaded 0x1004)
    // Since we didn't preload, we just check valid and PC (no data match expected)
    if (mem_wb_valid !== 1'b1 || mem_wb_rd !== 5'd10) begin
      $display("[FAIL] BACK-TO-BACK LOADS: valid=%b, rd=%d", mem_wb_valid, mem_wb_rd);
      $finish;
    end else begin
      $display("[PASS] BACK-TO-BACK LOADS (pipeline continues)");
    end

    // --------------------------------------------------------------
    // All tests passed
    // --------------------------------------------------------------
    $display("");
    $display("ALL STAGE_MEM TESTS PASSED");
    $display("");
    $finish;
  end

endmodule