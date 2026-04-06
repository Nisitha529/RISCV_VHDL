`timescale 1ns/1ps

module tb_top_soc_uart_boot;

  localparam CLK_PERIOD   = 10;
  localparam CLKS_PER_BIT = 8;

  // Small known-good program
  localparam PROG_WORDS   = 8;
  localparam PROG_BYTES   = PROG_WORDS * 4;

  reg         clk;
  reg         rst_n;
  reg         uart_rx_pin;
  wire        uart_tx_pin;

  wire        bootload_busy;
  wire        bootload_done;
  wire        bootload_error;
  wire        cpu_resetn_out;
  wire [31:0] bytes_loaded_out;

  wire        tx_mon_valid;
  wire [7:0]  tx_mon_byte;

  integer i;
  integer timeout_cycles;

  reg [31:0] expected_prog [0:PROG_WORDS-1];

  reg        saw_success_tx;
  reg        saw_error_tx;
  reg [7:0]  last_tx_byte;

  // Latch the DUT UART RX header decode pulse
  reg        saw_header_decode;
  reg [7:0]  header_rx_byte;

  // ------------------------------------------------------------
  // DUT
  // ------------------------------------------------------------
  top_soc_uart_boot #(
    .CLKS_PER_BIT(CLKS_PER_BIT)
  ) dut (
    .clk              (clk),
    .rst_n            (rst_n),
    .uart_rx_pin      (uart_rx_pin),
    .uart_tx_pin      (uart_tx_pin),
    .bootload_busy    (bootload_busy),
    .bootload_done    (bootload_done),
    .bootload_error   (bootload_error),
    .cpu_resetn_out   (cpu_resetn_out),
    .bytes_loaded_out (bytes_loaded_out)
  );

  // ------------------------------------------------------------
  // TX monitor: decode DUT TX line
  // ------------------------------------------------------------
  uart_rx #(
    .CLKS_PER_BIT(CLKS_PER_BIT)
  ) tx_monitor (
    .i_clock     (clk),
    .rst_n       (rst_n),
    .i_rx_serial (uart_tx_pin),
    .o_rx_dv     (tx_mon_valid),
    .o_rx_byte   (tx_mon_byte)
  );

  // ------------------------------------------------------------
  // Clock
  // ------------------------------------------------------------
  initial clk = 1'b0;
  always #(CLK_PERIOD/2) clk = ~clk;

  // ------------------------------------------------------------
  // Capture DUT status bytes
  // ------------------------------------------------------------
  always @(posedge clk) begin
    if (!rst_n) begin
      saw_success_tx <= 1'b0;
      saw_error_tx   <= 1'b0;
      last_tx_byte   <= 8'h00;
    end else begin
      if (tx_mon_valid) begin
        last_tx_byte <= tx_mon_byte;
        if (tx_mon_byte == 8'hA5)
          saw_success_tx <= 1'b1;
        if (tx_mon_byte == 8'hEE)
          saw_error_tx <= 1'b1;
      end
    end
  end

  // ------------------------------------------------------------
  // Capture DUT internal UART RX decoded byte
  // ------------------------------------------------------------
  always @(posedge clk) begin
    if (!rst_n) begin
      saw_header_decode <= 1'b0;
      header_rx_byte    <= 8'h00;
    end else begin
      if (dut.rx_valid) begin
        saw_header_decode <= 1'b1;
        header_rx_byte    <= dut.rx_byte;
      end
    end
  end

  // ------------------------------------------------------------
  // UART stimulus helpers
  // ------------------------------------------------------------
  task uart_drive_bit;
    input bit bitval;
    integer n;
    begin
      @(negedge clk);
      uart_rx_pin = bitval;
      for (n = 0; n < CLKS_PER_BIT; n = n + 1)
        @(posedge clk);
    end
  endtask

  task uart_send_byte;
    input [7:0] data;
    integer b;
    begin
      // idle before byte
      uart_drive_bit(1'b1);

      // start bit
      uart_drive_bit(1'b0);

      // data bits, LSB first
      for (b = 0; b < 8; b = b + 1)
        uart_drive_bit(data[b]);

      // stop bit
      uart_drive_bit(1'b1);

      // inter-byte idle
      uart_drive_bit(1'b1);
    end
  endtask

  task uart_send_word_le;
    input [31:0] w;
    begin
      uart_send_byte(w[7:0]);
      uart_send_byte(w[15:8]);
      uart_send_byte(w[23:16]);
      uart_send_byte(w[31:24]);
    end
  endtask

  task uart_send_length_header;
    input [7:0] byte_count;
    begin
      uart_send_byte(byte_count);
    end
  endtask

  // ------------------------------------------------------------
  // Program image
  // Same 8-word program that passed in tb_cpu_simple
  // x1 = 5
  // x2 = 7
  // x3 = x1 + x2 = 12
  // x5 = 0x02000000
  // MEM[x5+0] = x3
  // x6 = MEM[x5+0]
  // ebreak
  // ------------------------------------------------------------
  task load_expected_program;
    begin
      expected_prog[0] = 32'h00500093; // addi x1, x0, 5
      expected_prog[1] = 32'h00700113; // addi x2, x0, 7
      expected_prog[2] = 32'h002081b3; // add  x3, x1, x2
      expected_prog[3] = 32'h020002b7; // lui  x5, 0x02000
      expected_prog[4] = 32'h00028293; // addi x5, x5, 0
      expected_prog[5] = 32'h0032a023; // sw   x3, 0(x5)
      expected_prog[6] = 32'h0002a303; // lw   x6, 0(x5)
      expected_prog[7] = 32'h00100073; // ebreak
    end
  endtask

  // ------------------------------------------------------------
  // Checkers
  // ------------------------------------------------------------
  task fail_if_early_error;
    begin
      if (bootload_error) begin
        $display("ERROR: bootload_error asserted early, bytes_loaded_out=%0d, last_tx_byte=%02h",
                 bytes_loaded_out, last_tx_byte);
        $fatal;
      end
    end
  endtask

  task check_header_decode;
    input [7:0] expected;
    begin
      if (!saw_header_decode) begin
        $display("ERROR: DUT never latched a decoded UART header byte");
        $fatal;
      end

      if (header_rx_byte !== expected) begin
        $display("ERROR: decoded header mismatch. expected=%02h got=%02h",
                 expected, header_rx_byte);
        $fatal;
      end

      $display("PASS: DUT decoded UART header byte = %02h", header_rx_byte);
    end
  endtask

  task wait_for_result;
    begin
      timeout_cycles = 0;
      while (!bootload_done && !bootload_error && timeout_cycles < 400000) begin
        @(posedge clk);
        timeout_cycles = timeout_cycles + 1;
      end

      if (bootload_error) begin
        $display("ERROR: bootloader rejected transfer, bytes_loaded_out=%0d, last_tx_byte=%02h",
                 bytes_loaded_out, last_tx_byte);
        $fatal;
      end

      if (!bootload_done) begin
        $display("ERROR: timeout waiting for bootload_done");
        $fatal;
      end

      $display("PASS: bootload_done asserted");
    end
  endtask

  task check_bytes_loaded;
    begin
      if (bytes_loaded_out !== PROG_BYTES) begin
        $display("ERROR: bytes_loaded_out mismatch. got=%0d exp=%0d",
                 bytes_loaded_out, PROG_BYTES);
        $fatal;
      end
      $display("PASS: bytes_loaded_out = %0d", bytes_loaded_out);
    end
  endtask

  task check_cpu_released;
    begin
      if (!cpu_resetn_out) begin
        $display("ERROR: cpu_resetn_out not released after successful boot");
        $fatal;
      end
      $display("PASS: cpu_resetn_out released");
    end
  endtask

  task check_instruction_memory;
    begin
      for (i = 0; i < PROG_WORDS; i = i + 1) begin
        if (dut.inst_memory_01.mem[i] !== expected_prog[i]) begin
          $display("ERROR: IMEM[%0d] mismatch. got=%h exp=%h",
                   i, dut.inst_memory_01.mem[i], expected_prog[i]);
          $fatal;
        end
      end
      $display("PASS: instruction memory contents match UART-loaded program");
    end
  endtask

  task check_success_status;
    begin
      timeout_cycles = 0;
      while (!saw_success_tx && timeout_cycles < 100000) begin
        @(posedge clk);
        timeout_cycles = timeout_cycles + 1;
      end

      if (!saw_success_tx) begin
        $display("ERROR: timeout waiting for UART success status byte A5");
        $fatal;
      end

      if (saw_error_tx) begin
        $display("ERROR: observed UART error byte EE during success case");
        $fatal;
      end

      $display("PASS: UART TX success byte A5 observed");
    end
  endtask

  task check_cpu_side_effect;
    begin
      timeout_cycles = 0;
      while ((dut.data_memory.ram_inst.mem[0] !== 32'd12) && timeout_cycles < 20000) begin
        @(posedge clk);
        timeout_cycles = timeout_cycles + 1;
      end

      if (dut.data_memory.ram_inst.mem[0] !== 32'd12) begin
        $display("ERROR: CPU did not write expected value to RAM[0], got=%08h",
                 dut.data_memory.ram_inst.mem[0]);
        $fatal;
      end else begin
        $display("PASS: CPU wrote DATA_RAM[0] = 12");
      end
    end
  endtask

  task check_cpu_registers;
    begin
      if (dut.cpu_01.regfile_inst.regs[1] !== 32'd5) begin
        $display("ERROR: x1 expected=5 got=%08h", dut.cpu_01.regfile_inst.regs[1]);
        $fatal;
      end
      if (dut.cpu_01.regfile_inst.regs[2] !== 32'd7) begin
        $display("ERROR: x2 expected=7 got=%08h", dut.cpu_01.regfile_inst.regs[2]);
        $fatal;
      end
      if (dut.cpu_01.regfile_inst.regs[3] !== 32'd12) begin
        $display("ERROR: x3 expected=12 got=%08h", dut.cpu_01.regfile_inst.regs[3]);
        $fatal;
      end
      if (dut.cpu_01.regfile_inst.regs[6] !== 32'd12) begin
        $display("ERROR: x6 expected=12 got=%08h", dut.cpu_01.regfile_inst.regs[6]);
        $fatal;
      end
      $display("PASS: CPU register results matched");
    end
  endtask

  // ------------------------------------------------------------
  // Global watchdog
  // ------------------------------------------------------------
  initial begin
    #(100000000);
    $display("ERROR: global watchdog expired");
    $fatal;
  end

  // ------------------------------------------------------------
  // Main test
  // ------------------------------------------------------------
  initial begin
    rst_n             = 1'b0;
    uart_rx_pin       = 1'b1;
    saw_success_tx    = 1'b0;
    saw_error_tx      = 1'b0;
    last_tx_byte      = 8'h00;
    saw_header_decode = 1'b0;
    header_rx_byte    = 8'h00;

    load_expected_program();

    // Hold reset
    repeat (20) @(posedge clk);
    rst_n = 1'b1;

    // Allow DUT to settle
    repeat (20) @(posedge clk);

    fail_if_early_error();

    $display("INFO: sending program header = %0d bytes (%0d words total)",
             PROG_BYTES, PROG_WORDS);

    uart_send_length_header(PROG_BYTES[7:0]);

    // Give the DUT a little time after the byte completes
    repeat (10) @(posedge clk);

    check_header_decode(PROG_BYTES[7:0]);
    fail_if_early_error();

    for (i = 0; i < PROG_WORDS; i = i + 1) begin
      uart_send_word_le(expected_prog[i]);
      fail_if_early_error();
    end

    wait_for_result();
    check_bytes_loaded();
    check_cpu_released();
    check_instruction_memory();
    check_success_status();
    check_cpu_side_effect();
    check_cpu_registers();

    $display("==============================================");
    $display("PASS: top_soc_uart_boot self-checking test passed");
    $display("==============================================");
    $finish;
  end

endmodule