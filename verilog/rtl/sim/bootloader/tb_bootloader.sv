`timescale 1ns/1ps

module tb_bootloader;

  localparam int MEM_DEPTH = 8;
  localparam int ADDR_W    = (MEM_DEPTH <= 1) ? 1 : $clog2(MEM_DEPTH);
  localparam int COUNT_W   = ADDR_W + 1;

  logic                         clk;
  logic                         rst_n;

  logic                         uart_rx_valid;
  logic [7 : 0]                 uart_rx_data;

  logic [8 * MEM_DEPTH - 1 : 0] program_mem_flat;

  logic                         bootload_busy;
  logic                         bootload_done;
  logic                         bootload_error;

  logic [COUNT_W - 1 : 0]       bytes_loaded;

  integer error_count;

  bootloader #(
    .MEM_DEPTH        (MEM_DEPTH)
  ) dut_bootloader (
    .clk              (clk),
    .rst_n            (rst_n),
    
    .uart_rx_valid    (uart_rx_valid),
    .uart_rx_data     (uart_rx_data),
    
    .program_mem_flat (program_mem_flat),
    
    .bootload_busy    (bootload_busy),
    .bootload_done    (bootload_done),
    .bootload_error   (bootload_error),
    
    .bytes_loaded     (bytes_loaded)
  );

  // --------------------------------------------------------------------------
  // Clock
  // --------------------------------------------------------------------------
  initial clk = 1'b0;
  always #5 clk = ~clk;

  // --------------------------------------------------------------------------
  // Helpers
  // --------------------------------------------------------------------------
  task automatic apply_reset;
    begin
      rst_n         = 1'b0;
      uart_rx_valid = 1'b0;
      uart_rx_data  = 8'h00;

      repeat (3) @(posedge clk);
      @(negedge clk);
      rst_n = 1'b1;
      @(posedge clk);
      @(negedge clk);
    end
  endtask

  // Drive byte so it is stable BEFORE the active posedge
  task automatic send_byte(input logic [7 : 0] b);
    begin
      @(negedge clk);
      uart_rx_valid = 1'b1;
      uart_rx_data  = b;

      @(posedge clk);   // DUT samples here

      @(negedge clk);
      uart_rx_valid = 1'b0;
      uart_rx_data  = 8'h00;
    end
  endtask

  // Wait until outputs have settled after the DUT sampling edge
  task automatic settle_after_sample;
    begin
      @(negedge clk);
    end
  endtask

  function automatic [7 : 0] mem_byte(input int index);
    begin
      mem_byte = program_mem_flat[index * 8 +: 8];
    end
  endfunction

  task automatic expect_equal_1bit(
    input string name,
    input logic actual,
    input logic expected
  );
    begin
      if (actual !== expected) begin
        $display("FAIL: %s expected=%0b actual=%0b at time %0t", name, expected, actual, $time);
        error_count = error_count + 1;
      end
    end
  endtask

  task automatic expect_equal_bus(
    input string         name,
    input logic [31 : 0] actual,
    input logic [31 : 0] expected
  );
    begin
      if (actual !== expected) begin
        $display("FAIL: %s expected=0x%08h actual=0x%08h at time %0t", name, expected, actual, $time);
        error_count = error_count + 1;
      end
    end
  endtask

  task automatic expect_mem_byte(
    input int           index,
    input logic [7 : 0] expected
  );
    logic [7 : 0] actual;
    begin
      actual = mem_byte(index);
      if (actual !== expected) begin
        $display("FAIL: program_mem[%0d] expected=0x%02h actual=0x%02h at time %0t",
                 index, expected, actual, $time);
        error_count = error_count + 1;
      end
    end
  endtask

  task automatic check_memory_all_zero;
    int i;
    begin
      for (i = 0; i < MEM_DEPTH; i++) begin
        expect_mem_byte(i, 8'h00);
      end
    end
  endtask

  task automatic test_reset_state;
    begin
      $display("TEST 1: reset state");
      apply_reset();

      expect_equal_1bit("bootload_busy",  bootload_busy,  1'b0);
      expect_equal_1bit("bootload_done",  bootload_done,  1'b0);
      expect_equal_1bit("bootload_error", bootload_error, 1'b0);
      expect_equal_bus ("bytes_loaded",   bytes_loaded,   '0);

      check_memory_all_zero();
    end
  endtask

  task automatic test_valid_load_5_bytes;
    begin
      $display("TEST 2: valid load of 5 bytes");
      apply_reset();

      send_byte(8'd5);
      settle_after_sample();

      expect_equal_1bit("bootload_busy after length",  bootload_busy,  1'b1);
      expect_equal_1bit("bootload_done after length",  bootload_done,  1'b0);
      expect_equal_1bit("bootload_error after length", bootload_error, 1'b0);
      expect_equal_bus ("bytes_loaded after length",   bytes_loaded,   32'd0);

      send_byte(8'hAA);
      settle_after_sample();
      expect_equal_bus("bytes_loaded after byte0", bytes_loaded, 32'd1);
      expect_mem_byte(0, 8'hAA);

      send_byte(8'hBB);
      settle_after_sample();
      expect_equal_bus("bytes_loaded after byte1", bytes_loaded, 32'd2);
      expect_mem_byte(1, 8'hBB);

      send_byte(8'hCC);
      settle_after_sample();
      expect_equal_bus("bytes_loaded after byte2", bytes_loaded, 32'd3);
      expect_mem_byte(2, 8'hCC);

      send_byte(8'hDD);
      settle_after_sample();
      expect_equal_bus("bytes_loaded after byte3", bytes_loaded, 32'd4);
      expect_mem_byte(3, 8'hDD);

      send_byte(8'hEE);
      settle_after_sample();
      expect_equal_bus("bytes_loaded after byte4", bytes_loaded, 32'd5);
      expect_mem_byte(4, 8'hEE);

      expect_equal_1bit("bootload_busy after done",  bootload_busy,  1'b0);
      expect_equal_1bit("bootload_done after done",  bootload_done,  1'b1);
      expect_equal_1bit("bootload_error after done", bootload_error, 1'b0);

      expect_mem_byte(5, 8'h00);
      expect_mem_byte(6, 8'h00);
      expect_mem_byte(7, 8'h00);
    end
  endtask

  task automatic test_zero_length_error;
    begin
      $display("TEST 3: zero length should error");
      apply_reset();

      send_byte(8'd0);
      settle_after_sample();

      expect_equal_1bit("bootload_busy zero-length",  bootload_busy,  1'b0);
      expect_equal_1bit("bootload_done zero-length",  bootload_done,  1'b0);
      expect_equal_1bit("bootload_error zero-length", bootload_error, 1'b1);
      expect_equal_bus ("bytes_loaded zero-length",   bytes_loaded,   32'd0);

      check_memory_all_zero();
    end
  endtask

  task automatic test_length_too_large_error;
    begin
      $display("TEST 4: length > MEM_DEPTH should error");
      apply_reset();

      send_byte(8'd9); // MEM_DEPTH=8
      settle_after_sample();

      expect_equal_1bit("bootload_busy too-large",  bootload_busy,  1'b0);
      expect_equal_1bit("bootload_done too-large",  bootload_done,  1'b0);
      expect_equal_1bit("bootload_error too-large", bootload_error, 1'b1);
      expect_equal_bus ("bytes_loaded too-large",   bytes_loaded,   32'd0);

      check_memory_all_zero();
    end
  endtask

  task automatic test_full_depth_load;
    int i;
    begin
      $display("TEST 5: full-depth load");
      apply_reset();

      send_byte(8'd8);
      settle_after_sample();

      for (i = 0; i < MEM_DEPTH; i++) begin
        send_byte(8'h10 + i[7:0]);
        settle_after_sample();
        expect_mem_byte(i, 8'h10 + i[7:0]);
      end

      expect_equal_1bit("bootload_busy full-depth",  bootload_busy,  1'b0);
      expect_equal_1bit("bootload_done full-depth",  bootload_done,  1'b1);
      expect_equal_1bit("bootload_error full-depth", bootload_error, 1'b0);
      expect_equal_bus ("bytes_loaded full-depth",   bytes_loaded,   32'd8);
    end
  endtask

  task automatic test_ignore_extra_bytes_after_done;
    begin
      $display("TEST 6: extra bytes after done should be ignored");
      apply_reset();

      send_byte(8'd2);
      settle_after_sample();
      send_byte(8'h55);
      settle_after_sample();
      send_byte(8'h66);
      settle_after_sample();

      expect_equal_1bit("done before extra", bootload_done, 1'b1);
      expect_mem_byte(0, 8'h55);
      expect_mem_byte(1, 8'h66);

      // Extra bytes after DONE should not change memory
      send_byte(8'hAA);
      settle_after_sample();
      send_byte(8'hBB);
      settle_after_sample();

      expect_equal_1bit("done after extra",  bootload_done,  1'b1);
      expect_equal_1bit("error after extra", bootload_error, 1'b0);
      expect_mem_byte(0, 8'h55);
      expect_mem_byte(1, 8'h66);
      expect_mem_byte(2, 8'h00);
      expect_mem_byte(3, 8'h00);
    end
  endtask

  // --------------------------------------------------------------------------
  // Main sequence
  // --------------------------------------------------------------------------
  initial begin
    rst_n         = 1'b0;
    uart_rx_valid = 1'b0;
    uart_rx_data  = 8'h00;
    error_count   = 0;

    test_reset_state();
    test_valid_load_5_bytes();
    test_zero_length_error();
    test_length_too_large_error();
    test_full_depth_load();
    test_ignore_extra_bytes_after_done();

    $display("--------------------------------------------------");
    if (error_count == 0) begin
      $display("ALL BOOTLOADER TESTS PASSED");
    end else begin
      $display("BOOTLOADER TESTS FAILED: error_count=%0d", error_count);
    end
    $display("--------------------------------------------------");

    if (error_count != 0)
      $fatal(1);
    else
      $finish;
  end

endmodule