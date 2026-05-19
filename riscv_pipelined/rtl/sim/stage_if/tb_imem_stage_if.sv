// tb_imem_stage_if.sv
`timescale 1ns/1ps

module tb_imem_stage_if ();

  parameter DATA_WIDTH = 32;
  parameter MEM_DEPTH  = 1024;

  logic                      clk; 
  logic                      rst;

  logic                      stall; 

  logic                      redirect;
  logic [31 : 0]             redirect_pc;

  // DUT signals
  logic [31 : 0]             instr_in;
  logic                      instr_valid;

  logic [31 : 0]             imem_addr;
  logic                      instr_addr_valid;

  logic [31 : 0]             if_id_pc; 
  logic [31 : 0]             if_id_instr;

  logic                      if_id_valid;

  // DUT
  stage_if dut_stage_if (
    .clk              (clk),
    .rst              (rst),

    .stall            (stall),

    .redirect         (redirect),
    .redirect_pc      (redirect_pc),

    .instr_in         (instr_in),
    .instr_valid      (instr_valid),

    .imem_addr        (imem_addr),
    .instr_addr_valid (instr_addr_valid),

    .if_id_pc         (if_id_pc),
    .if_id_instr      (if_id_instr),

    .if_id_valid      (if_id_valid)
  );

  imem #(
    .DATA_WIDTH       (32),
    .MEM_DEPTH        (MEM_DEPTH),
    .MEM_FILE         ("../top_cpu/program.hex")
  ) dut_imem (
    .clk              (clk), 
    .rst              (rst),

    .addr             (imem_addr),
    .instr_addr_valid (instr_addr_valid),

    .instr            (instr_in),
    .instr_valid      (instr_valid)
  );

  // Clock
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  // Dump waves
  initial begin
    $dumpfile ("tb_imem_stage_if.vcd");
    $dumpvars (0, tb_imem_stage_if);
  end

  // Debug monitor (optional)
  always @(posedge clk) begin
    #1;
    $display("--------------------------------");
    $display("TIME              = %0t", $time);
    $display("STALL             = %b", stall);
    $display("PC REQUEST        = %h", imem_addr);
    $display("ADDR VALID        = %b", instr_addr_valid);
    $display("IMEM INSTR        = %h", instr_in);
    $display("IMEM VALID        = %b", instr_valid);
    $display("IF_ID_PC          = %h", if_id_pc);
    $display("IF_ID_INSTR       = %h", if_id_instr);
    $display("IF_ID_VALID       = %b", if_id_valid);
  end

  // Self-check task
  task automatic check_if(
    input [31 : 0] exp_pc,
    input [31 : 0] exp_instr,
    input          exp_valid,
    input string   test_name
  );
    begin
      #1;
      if ((if_id_pc !== exp_pc) || (if_id_instr !== exp_instr) || (if_id_valid !== exp_valid)) begin
        $display("[FAIL] %s", test_name);
        $display("Expected PC    = %h", exp_pc);
        $display("Actual   PC    = %h", if_id_pc);
        $display("Expected INSTR = %h", exp_instr);
        $display("Actual   INSTR = %h", if_id_instr);
        $display("Expected VALID = %b", exp_valid);
        $display("Actual   VALID = %b", if_id_valid);
        $finish;
      end else begin
        $display("[PASS] %s", test_name);
      end
    end
  endtask

  // Test sequence
  initial begin
    rst         = 1'b1; 
    stall       = 1'b0; 
    redirect    = 1'b0; 
    redirect_pc = 0;

    repeat (2) @(posedge clk);
    rst         = 1'b0;
    @(posedge clk);   // pipeline start

    // Normal fetches
    @(posedge clk); @(posedge clk);
    check_if(32'd0, 32'h11111111, 1'b1, "FETCH PC=0");

    @(posedge clk);
    check_if(32'd4, 32'h22222222, 1'b1, "FETCH PC=4");

    @(posedge clk);
    check_if(32'd8, 32'h33333333, 1'b1, "FETCH PC=8");

    // Stall
    stall = 1'b1;
    @(posedge clk);
    check_if(32'd8, 32'h33333333, 1'b0, "STALL HOLD");

    stall = 1'b0;
    @(posedge clk);
    check_if(32'd12, 32'h44444444, 1'b1, "REFETCH AFTER STALL (0x0C)");

    @(posedge clk);
    check_if(32'd16, 32'hDEADBEEF, 1'b1, "FETCH AFTER STALL (0x10)");

    // Redirect test
    redirect = 1'b1; redirect_pc = 32'd64;
    @(posedge clk);
    redirect = 1'b0;

    @(posedge clk);
    @(posedge clk);
    check_if(32'd64, 32'hAAAAAAAA, 1'b1, "REDIRECT TARGET");

    @(posedge clk);
    check_if(32'd68, 32'h00a00093, 1'b1, "POST REDIRECT");

    $display("\nTESTS PASSED\n");
    $finish;
end

endmodule