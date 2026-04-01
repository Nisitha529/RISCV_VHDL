`timescale 1ns/1ps

`include "memory_defines.vh"

module tb_bootloader_instmem ();

  localparam int MEM_BYTES = 64;
  localparam int ADDR_W    = (MEM_BYTES <= 1) ? 1 : $clog2(MEM_BYTES);
  localparam int COUNT_W   = ADDR_W + 1;

  logic                   clk; 
  logic                   rst_n;

  logic                   uart_rx_valid;
  logic [7 : 0]           uart_rx_data;

  logic                   load_valid;
  logic [31 : 0]          load_addr;
  logic [31 : 0]          load_data;

  logic                   bootload_busy;
  logic                   bootload_done;
  logic                   bootload_error;
	
  logic [COUNT_W - 1 : 0] bytes_loaded;

  logic                   imem_en;
  logic [31 : 0]          imem_addr;
  logic [31 : 0]          imem_data;

  int                     error_count;

  initial clk = 0;
  always #5 clk = ~clk;

  bootloader #(
    .MEM_BYTES      (64)
	) bootloader_01 (
    .clk            (clk),
    .rst_n          (rst_n),

    .uart_rx_valid  (uart_rx_valid),
    .uart_rx_data   (uart_rx_data),

    .load_valid     (load_valid),
    .load_addr      (load_addr),
    .load_data      (load_data),

    .bootload_busy  (bootload_busy),
    .bootload_done  (bootload_done),
    .bootload_error (bootload_error),
    
    .bytes_loaded   (bytes_loaded)
  );

  inst_memory imem (
    .clk            (clk),
    .en             (imem_en),

    .addr           (imem_addr),
    .data           (imem_data),

    .load_we        (load_valid),
    .load_addr      (load_addr),
    .load_data      (load_data)
  );

  task reset(); 
	  begin
      rst_n         = 0;
      uart_rx_valid = 0;
      uart_rx_data  = 0;
      imem_en       = 0;
    
		  repeat (3) @(posedge clk);
    
		  rst_n         = 1;
      @(posedge clk);
    end
  endtask

  // Drive byte BEFORE posedge → sampled correctly
  task send_byte(input [7:0] b);
    begin
      @(negedge clk);
      uart_rx_valid = 1;
      uart_rx_data  = b;
      
			@(posedge clk);
      @(negedge clk);
      uart_rx_valid = 0;
    end
  endtask

  task check_word(input [31:0] addr, input [31:0] expected);
    begin
      imem_en       = 1;
      imem_addr     = addr;
      @(posedge clk); #1;

      if (imem_data !== expected) begin
        $display("FAIL: addr=%h expected=%h got=%h", addr, expected, imem_data);
        error_count++;
      end else begin
        $display("PASS: addr=%h = %h", addr, imem_data);
      end
    end
  endtask
 
  initial begin
    error_count = 0;
    
		reset();

    // TEST 1: valid program (2 instructions = 8 bytes)
    $display("TEST 1: valid load");

    send_byte(8'd8);  // length

    // word0 = 0xDDCCBBAA
    send_byte(8'hAA);
    send_byte(8'hBB);
    send_byte(8'hCC);
    send_byte(8'hDD);

    // word1 = 0x44332211
    send_byte(8'h11);
    send_byte(8'h22);
    send_byte(8'h33);
    send_byte(8'h44);

    // Allow memory write to settle
    repeat (2) @(posedge clk);

    check_word(32'h0, 32'hDDCCBBAA);
    check_word(32'h4, 32'h44332211);

    // TEST 2: overwrite memory (new program)
    $display("TEST 2: overwrite");

    reset();

    send_byte(8'd4);
    send_byte(8'h78);
    send_byte(8'h56);
    send_byte(8'h34);
    send_byte(8'h12);

    repeat (2) @(posedge clk);

    check_word(32'h0, 32'h12345678);

    // TEST 3: invalid length (not multiple of 4)
    $display("TEST 3: invalid length");

    reset();

    send_byte(8'd6); // invalid

    repeat (2) @(posedge clk);

    // Expect no write → memory still default NOP
    check_word(32'h0, 32'h00000013);

    // RESULT
    if (error_count == 0) begin
      $display("ALL TESTS PASSED");
    end else begin
      $display("TESTS FAILED: %0d errors", error_count);
    end

    if (error_count != 0)
      $fatal;
    else
      $finish;
  end

endmodule