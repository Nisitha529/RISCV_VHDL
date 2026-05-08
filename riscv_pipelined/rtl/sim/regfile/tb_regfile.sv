`timescale 1ns/1ps

module tb_regfile;

  parameter DATA_WIDTH = 32;
  parameter ADDR_WIDTH = 5;

  logic                      clk;
  logic                      rst;

  logic [ADDR_WIDTH - 1 : 0] rs1_addr;
  logic [ADDR_WIDTH - 1 : 0] rs2_addr;

  logic                      write_enable;

  logic [ADDR_WIDTH - 1 : 0] rd_addr;
  logic [DATA_WIDTH - 1 : 0] rd_data;

  logic [DATA_WIDTH - 1 : 0] rs1_data;
  logic [DATA_WIDTH - 1 : 0] rs2_data;

  regfile dut (
    .clk          (clk),
    .rst          (rst),

    .rs1_addr     (rs1_addr),
    .rs2_addr     (rs2_addr),

    .write_enable (write_enable),

    .rd_addr      (rd_addr),
    .rd_data      (rd_data),

    .rs1_data     (rs1_data),
    .rs2_data     (rs2_data)
  );

  initial begin
    clk = 0;
    
    forever #5 clk = ~clk;
  end

  task automatic check_read (
    input [31 : 0] expected_rs1,
    input [31 : 0] expected_rs2,

    input string test_name
  );
    begin

      #1;

      if (rs1_data !== expected_rs1 || rs2_data !== expected_rs2) begin
        $display("[FAIL] %s", test_name);

        $display("Expected rs1 = %h", expected_rs1);
        $display("Actual   rs1 = %h", rs1_data);

        $display("Expected rs2 = %h", expected_rs2);
        $display("Actual   rs2 = %h", rs2_data);

        $finish;
      end else begin
        $display("[PASS] %s", test_name);
      end
    end
  endtask

  initial begin
    rst          = 1'b1;

    rs1_addr     = 0;
    rs2_addr     = 0;

    write_enable = 0;

    rd_addr      = 0;
    rd_data      = 0;

    repeat (2) @(posedge clk);
    
    rst          = 1'b0;

    rs1_addr     = 0;
    rs2_addr     = 0;

    check_read(32'd0, 32'd0,"X0 RESET VALUE");

    @(posedge clk);
    write_enable = 1'b1;

    rd_addr      = 5'd1;
    rd_data      = 32'h12345678;

    @(posedge clk);
    write_enable = 1'b0;

    rs1_addr     = 5'd1;
    rs2_addr     = 5'd0;

    check_read(32'h12345678, 32'd0, "WRITE X1");

    @(posedge clk);

    write_enable = 1'b1;

    rd_addr      = 5'd5;
    rd_data      = 32'hDEADBEEF;

    @(posedge clk);

    write_enable = 1'b0;

    rs1_addr     = 5'd5;
    rs2_addr     = 5'd1;

    check_read(32'hDEADBEEF, 32'h12345678, "WRITE X5");

    @(posedge clk);

    write_enable = 1'b1;

    rd_addr      = 5'd0;
    rd_data      = 32'hFFFFFFFF;

    @(posedge clk);

    write_enable = 1'b0;

    rs1_addr     = 5'd0;
    rs2_addr     = 5'd5;

    check_read(32'd0, 32'hDEADBEEF, "X0 IMMUTABLE");

    @(posedge clk);

    write_enable = 1'b0;

    rd_addr      = 5'd10;
    rd_data      = 32'hAAAAAAAA;

    @(posedge clk);

    rs1_addr     = 5'd10;
    rs2_addr     = 5'd5;

    check_read(32'd0, 32'hDEADBEEF, "WRITE DISABLED");

    $display("");
    $display("ALL REGFILE TESTS PASSED");
    $display("");

    $finish;

  end

endmodule