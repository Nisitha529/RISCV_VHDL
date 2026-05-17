`timescale 1ns/1ps

module tb_dmem();

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 32;
  parameter MEM_DEPTH  = 4096;

  localparam MEM_BYTE = 6'd8;
  localparam MEM_HALF = 6'd16;
  localparam MEM_WORD = 6'd32;

  // DUT SIGNALS

  logic                      clk;
  logic                      rst;

  logic                      mem_valid;
  logic                      mem_ready;

  logic                      write_enable;

  logic [5:0]                mem_width;

  logic [ADDR_WIDTH-1:0]     addr;
  logic [DATA_WIDTH-1:0]     write_data;

  logic [DATA_WIDTH-1:0]     read_data;
  logic                      read_valid;

  // DUT
  dmem #(
    .DATA_WIDTH   (DATA_WIDTH),
    .ADDR_WIDTH   (ADDR_WIDTH),
    .MEM_DEPTH    (MEM_DEPTH)
  ) dut (
    .clk          (clk),
    .rst          (rst),

    .mem_valid    (mem_valid),
    .mem_ready    (mem_ready),

    .write_enable (write_enable),

    .mem_width    (mem_width),

    .addr         (addr),
    .write_data   (write_data),

    .read_data    (read_data),
    .read_valid   (read_valid)
  );

  // CLOCK

  initial begin
    clk = 0;

    forever #5 clk = ~clk;
  end

  // RESET

  initial begin
    rst          = 1'b1;

    mem_valid    = 0;
    write_enable = 0;
    mem_width    = 0;
    addr         = 0;
    write_data   = 0;

    #20;

    rst          = 1'b0;
  end

  // BYTE WRITE TASK
  task write_byte(
    input [31 : 0] wr_addr,
    input [7 : 0]  wr_data
  );
    begin
      @(posedge clk);
      mem_valid    <= 1'b1;
      write_enable <= 1'b1;

      mem_width    <= MEM_BYTE;

      addr         <= wr_addr;
      write_data   <= {24'd0, wr_data};

      @(posedge clk);
      mem_valid    <= 1'b0;
      write_enable <= 1'b0;

    end
  endtask

  // WORD WRITE TASK
  task write_word(
    input [31 : 0] wr_addr,
    input [31 : 0] wr_data
  );
    begin
      @(posedge clk);
      mem_valid    <= 1'b1;
      write_enable <= 1'b1;

      mem_width    <= MEM_WORD;

      addr         <= wr_addr;
      write_data   <= wr_data;

      @(posedge clk);
      mem_valid    <= 1'b0;
      write_enable <= 1'b0;

    end
  endtask

  // WORD READ TASK
  task read_word(
    input  [31 : 0] rd_addr,
    input  [31 : 0] expected
  );
    begin
      @(posedge clk);
      mem_valid    <= 1'b1;
      write_enable <= 1'b0;

      mem_width    <= MEM_WORD;

      addr         <= rd_addr;

      @(posedge clk);
      mem_valid <= 1'b0;

      // Wait for response
      @(posedge clk);
      if (!read_valid) begin
        $display("[FAIL] read_valid not asserted");
        $finish;

      end

      if (read_data !== expected) begin
        $display("[FAIL] WORD READ");

        $display("ADDR     = 0x%08h", rd_addr);
        $display("EXPECTED = 0x%08h", expected);
        $display("ACTUAL   = 0x%08h", read_data);

        $finish;

      end else begin
        $display("[PASS] WORD READ : 0x%08h", read_data);

      end

    end
  endtask

  // TEST SEQUENCE
  initial begin
    wait(!rst);

    // WORD WRITE / READ
    write_word(32'h00000004, 32'hDEADBEEF);
    read_word(32'h00000004, 32'hDEADBEEF);

    // BYTE WRITE CHECK
    write_byte(32'h00000010, 8'hAA);

    @(posedge clk);
    mem_valid    <= 1'b1;
    write_enable <= 1'b0;

    mem_width    <= MEM_BYTE;

    addr         <= 32'h00000010;

    @(posedge clk);
    mem_valid    <= 1'b0;

    @(posedge clk);
    if (read_data !== 32'h000000AA) begin
      $display("[FAIL] BYTE READ");
      $display("EXPECTED = 0x000000AA");
      $display("ACTUAL   = 0x%08h", read_data);

      $finish;

    end else begin
      $display("[PASS] BYTE READ");

    end

    // ALIGNMENT CHECK
    @(posedge clk);

    mem_valid    <= 1'b1;
    write_enable <= 1'b0;

    mem_width    <= MEM_WORD;

    // Misaligned address
    addr         <= 32'h00000002;

    @(posedge clk);
    if (mem_ready !== 1'b0) begin
      $display("[FAIL] ALIGNMENT CHECK");
      $finish;

    end else begin
      $display("[PASS] ALIGNMENT CHECK");

    end

    mem_valid    <= 1'b0;

    // OUT OF RANGE CHECK
    @(posedge clk);

    mem_valid    <= 1'b1;
    write_enable <= 1'b0;

    mem_width    <= MEM_WORD;

    addr         <= 32'h0000FFFF;

    @(posedge clk);
    if (mem_ready !== 1'b0) begin
      $display("[FAIL] RANGE CHECK");
      $finish;

    end else begin
      $display("[PASS] RANGE CHECK");

    end

    mem_valid    <= 1'b0;

    // DONE
    $display("");
    $display("DMEM TEST PASSED");
    $display("");

    $finish;

  end

endmodule