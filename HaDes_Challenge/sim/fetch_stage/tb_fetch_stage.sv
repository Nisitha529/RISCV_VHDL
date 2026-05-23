// tb_fetch_stage.sv
// Self-checking testbench for fetch_stage.sv

`timescale 1ns/1ps

module tb_fetch_stage;

  localparam DATA_WIDTH = 32;
  localparam NOP_INSTR  = 32'h00000013;

  logic clk;
  logic rst;

  // Wishbone interface

  wishbone_interface wb();

  // DUT signals

  logic [DATA_WIDTH - 1 : 0]   instruction_reg_out;
  logic [DATA_WIDTH - 1 : 0]   program_counter_reg_out;

  pipeline_status::forwards_t  status_forwards_out;
  pipeline_status::backwards_t status_backwards_in;

  logic [DATA_WIDTH - 1 : 0]   jump_address_backwards_in;

  // DUT
  fetch_stage #(
    .DATA_WIDTH                (DATA_WIDTH)
  ) dut_fetch_stage (
    .clk                       (clk),
    .rst                       (rst),

    .wb                        (wb.master),

    .instruction_reg_out       (instruction_reg_out),
    .program_counter_reg_out   (program_counter_reg_out),

    .status_forwards_out       (status_forwards_out),
    .status_backwards_in       (status_backwards_in),
    .jump_address_backwards_in (jump_address_backwards_in)
  );

  // Clock generation
  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end

  // Simple Wishbone instruction memory
  logic [31:0] mem [0:255];
  logic        force_error;

  initial begin : init_mem
    integer i;

    for (i = 0; i < 256; i = i + 1) begin
      mem[i] = 32'hDEADBEEF;
    end

    // RESET_ADDRESS = 0x00040000
    // Wishbone adr  = RESET_ADDRESS[31:2] = 0x00010000
    // TB memory uses wb.adr[7:0] as index.

    mem[8'h00] = 32'h11111111;  // RESET_ADDRESS + 0
    mem[8'h01] = 32'h22222222;  // RESET_ADDRESS + 4
    mem[8'h02] = 32'h33333333;  // RESET_ADDRESS + 8
    mem[8'h03] = 32'h44444444;  // RESET_ADDRESS + 12
    mem[8'h04] = 32'h55555555;  // RESET_ADDRESS + 16
    mem[8'h05] = 32'h66666666;  // RESET_ADDRESS + 20

    // Jump target 0x40:
    // wb.adr = 0x40 >> 2 = 0x10

    mem[8'h10] = 32'hAAAAAAAA;  // PC 0x40
    mem[8'h11] = 32'hBBBBBBBB;  // PC 0x44
  end

  // --------------------------------------------------
  // Wishbone slave model
  // --------------------------------------------------
  // The slave drives ack/data on negedge.
  // The DUT samples ack/data on the following posedge.
  // This avoids posedge race behavior.

  always_ff @(negedge clk) begin
    if (rst) begin
      wb.ack      <= 1'b0;
      wb.err      <= 1'b0;
      wb.dat_miso <= 32'd0;

    end else begin
      wb.ack <= 1'b0;
      wb.err <= 1'b0;

      if (wb.cyc && wb.stb && !wb.we) begin
        if (force_error) begin
          wb.err      <= 1'b1;
          wb.dat_miso <= 32'd0;
        end else begin
          wb.ack      <= 1'b1;
          wb.dat_miso <= mem[wb.adr[7:0]];
        end
      end
    end
  end

  // --------------------------------------------------
  // Self-check helpers
  // --------------------------------------------------

  task automatic fail_fetch (
    input string test_name,
    input [31:0] expected_pc,
    input [31:0] expected_instr,
    input pipeline_status::forwards_t expected_status
  );
    begin
      $display("[FAIL] %s", test_name);

      $display("Expected PC      = %h", expected_pc);
      $display("Actual   PC      = %h", program_counter_reg_out);

      $display("Expected INSTR   = %h", expected_instr);
      $display("Actual   INSTR   = %h", instruction_reg_out);

      $display("Expected STATUS  = %0d", expected_status);
      $display("Actual   STATUS  = %0d", status_forwards_out);

      $finish;
    end
  endtask

  task automatic check_now (
    input [31:0] expected_pc,
    input [31:0] expected_instr,
    input pipeline_status::forwards_t expected_status,
    input string test_name
  );
    begin
      if (
        (program_counter_reg_out !== expected_pc)    ||
        (instruction_reg_out     !== expected_instr) ||
        (status_forwards_out     !== expected_status)
      ) begin
        fail_fetch(
          test_name,
          expected_pc,
          expected_instr,
          expected_status
        );
      end else begin
        $display("[PASS] %s", test_name);
      end
    end
  endtask

  task automatic wait_and_check (
    input [31:0] expected_pc,
    input [31:0] expected_instr,
    input pipeline_status::forwards_t expected_status,
    input string test_name
  );
    integer n;
    logic found;

    begin
      found = 1'b0;

      for (n = 0; n < 30; n = n + 1) begin
        @(negedge clk);

        if (
          (program_counter_reg_out === expected_pc)    &&
          (instruction_reg_out     === expected_instr) &&
          (status_forwards_out     === expected_status)
        ) begin
          $display("[PASS] %s", test_name);
          found = 1'b1;
          n = 30;
        end
      end

      if (!found) begin
        fail_fetch(
          test_name,
          expected_pc,
          expected_instr,
          expected_status
        );
      end
    end
  endtask

  task automatic check_wb_read_only (
    input string test_name
  );
    begin
      @(negedge clk);

      if (wb.we !== 1'b0) begin
        $display("[FAIL] %s", test_name);
        $display("Fetch stage must not assert Wishbone write enable.");
        $finish;
      end else begin
        $display("[PASS] %s", test_name);
      end
    end
  endtask

  // --------------------------------------------------
  // Debug monitor
  // --------------------------------------------------

  always @(negedge clk) begin
    $display("--------------------------------");
    $display("TIME        = %0t", $time);
    $display("BACK STATUS = %0d", status_backwards_in);
    $display("JUMP ADDR   = %h", jump_address_backwards_in);

    $display("WB cyc/stb  = %b/%b", wb.cyc, wb.stb);
    $display("WB adr      = %h", wb.adr);
    $display("WB ack/err  = %b/%b", wb.ack, wb.err);
    $display("WB dat_miso = %h", wb.dat_miso);

    $display("OUT PC      = %h", program_counter_reg_out);
    $display("OUT INSTR   = %h", instruction_reg_out);
    $display("OUT STATUS  = %0d", status_forwards_out);
    $display("--------------------------------");
  end

  // --------------------------------------------------
  // Wave dump
  // --------------------------------------------------

  initial begin
    $dumpfile("tb_fetch_stage.vcd");
    $dumpvars(0, tb_fetch_stage);
  end

  // --------------------------------------------------
  // Main test sequence
  // --------------------------------------------------

  initial begin
    rst                       = 1'b1;
    status_backwards_in       = pipeline_status::READY;
    jump_address_backwards_in = 32'd0;
    force_error               = 1'b0;

    repeat (3) @(posedge clk);

    rst = 1'b0;

    // ------------------------------------------------
    // Test 1: reset output
    // ------------------------------------------------

    @(negedge clk);

    check_now(
      constants::RESET_ADDRESS,
      NOP_INSTR,
      pipeline_status::BUBBLE,
      "RESET OUTPUT"
    );

    // ------------------------------------------------
    // Test 2: normal sequential fetches
    // ------------------------------------------------

    wait_and_check(
      constants::RESET_ADDRESS,
      32'h11111111,
      pipeline_status::VALID,
      "FETCH RESET_ADDRESS"
    );

    wait_and_check(
      constants::RESET_ADDRESS + 32'd4,
      32'h22222222,
      pipeline_status::VALID,
      "FETCH RESET_ADDRESS + 4"
    );

    wait_and_check(
      constants::RESET_ADDRESS + 32'd8,
      32'h33333333,
      pipeline_status::VALID,
      "FETCH RESET_ADDRESS + 8"
    );

    // ------------------------------------------------
    // Test 3: downstream STALL holds current output
    // ------------------------------------------------
    // Critical fix:
    // wait_and_check() returns at a negedge.
    // Drive STALL immediately here, BEFORE the next posedge.
    // Therefore the DUT sees STALL at the next active clock edge.

    status_backwards_in = pipeline_status::STALL;

    @(posedge clk);
    @(negedge clk);

    check_now(
      constants::RESET_ADDRESS + 32'd8,
      32'h33333333,
      pipeline_status::VALID,
      "STALL HOLDS CURRENT OUTPUT"
    );

    @(posedge clk);
    @(negedge clk);

    check_now(
      constants::RESET_ADDRESS + 32'd8,
      32'h33333333,
      pipeline_status::VALID,
      "STILL HOLDING DURING STALL"
    );

    // Release stall before the next posedge.
    status_backwards_in = pipeline_status::READY;

    wait_and_check(
      constants::RESET_ADDRESS + 32'd12,
      32'h44444444,
      pipeline_status::VALID,
      "FETCH AFTER STALL RELEASE"
    );

    // ------------------------------------------------
    // Test 4: continue after stall
    // ------------------------------------------------

    wait_and_check(
      constants::RESET_ADDRESS + 32'd16,
      32'h55555555,
      pipeline_status::VALID,
      "FETCH RESET_ADDRESS + 16 AFTER STALL"
    );

    // ------------------------------------------------
    // Test 5: Wishbone error gives FETCH_FAULT
    // ------------------------------------------------

    force_error = 1'b1;

    wait_and_check(
      constants::RESET_ADDRESS + 32'd20,
      NOP_INSTR,
      pipeline_status::FETCH_FAULT,
      "FETCH FAULT ON WB ERR"
    );

    force_error = 1'b0;

    // ------------------------------------------------
    // Test 6: JUMP flushes output and redirects PC
    // ------------------------------------------------

    status_backwards_in       = pipeline_status::JUMP;
    jump_address_backwards_in = 32'h00000040;

    @(posedge clk);
    @(negedge clk);

    check_now(
      32'h00000040,
      NOP_INSTR,
      pipeline_status::BUBBLE,
      "JUMP FLUSH"
    );

    status_backwards_in       = pipeline_status::READY;
    jump_address_backwards_in = 32'd0;

    wait_and_check(
      32'h00000040,
      32'hAAAAAAAA,
      pipeline_status::VALID,
      "FETCH JUMP TARGET 0x40"
    );

    wait_and_check(
      32'h00000044,
      32'hBBBBBBBB,
      pipeline_status::VALID,
      "FETCH AFTER JUMP TARGET 0x44"
    );

    // ------------------------------------------------
    // Test 7: read-only Wishbone behavior
    // ------------------------------------------------

    check_wb_read_only("WB READ ONLY");

    $display("");
    $display("ALL FETCH_STAGE TESTS PASSED");
    $display("");

    $finish;
  end

endmodule