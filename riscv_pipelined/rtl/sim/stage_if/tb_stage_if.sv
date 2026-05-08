`timescale 1ns/1ps

module tb_stage_if;
  parameter DATA_WIDTH = 32;

  logic                      clk;
  logic                      rst;

  // Hazard control
  logic                      stall;

  // Redirect
  logic                      redirect;
  logic [DATA_WIDTH - 1 : 0] redirect_pc;

  // IMEM interface
  logic [DATA_WIDTH - 1 : 0] instr_in;
  logic [DATA_WIDTH - 1 : 0] imem_addr;

  // IF/ID outputs
  logic [DATA_WIDTH - 1 : 0] if_id_pc;
  logic [DATA_WIDTH - 1 : 0] if_id_instr;

  logic                      if_id_valid;

  // DUT
  stage_if dut_stage_if (
    .clk         (clk),
    .rst         (rst),

    .stall       (stall),

    .redirect    (redirect),
    .redirect_pc (redirect_pc),

    .instr_in    (instr_in),
    .imem_addr   (imem_addr),

    .if_id_pc    (if_id_pc),
    .if_id_instr (if_id_instr),

    .if_id_valid (if_id_valid)
  );

  // Clock generation
  initial begin
    clk = 0;

    forever #5 clk = ~clk;
  end

  // Fake instruction memory
  always_comb begin
    case (imem_addr)
      32'd0   : instr_in = 32'h11111111;
      32'd4   : instr_in = 32'h22222222;
      32'd8   : instr_in = 32'h33333333;
      32'd12  : instr_in = 32'h44444444;
      32'd64  : instr_in = 32'hAAAAAAAA;
      default : instr_in = 32'hDEADBEEF;
    endcase
  end

  task automatic check_if (
    input        [31 : 0] expected_pc,
    input        [31 : 0] expected_instr,
    input                 expected_valid,

    input string          test_name
  );
    begin
      #1;

      if (if_id_pc !== expected_pc || if_id_instr !== expected_instr || if_id_valid !== expected_valid) begin
        $display("[FAIL] %s", test_name);
        $display("Expected PC    = %h", expected_pc);
        $display("Actual   PC    = %h", if_id_pc);
        $display("Expected INSTR = %h", expected_instr);
        $display("Actual   INSTR = %h", if_id_instr);
        $display("Expected VALID = %b", expected_valid);
        $display("Actual   VALID = %b", if_id_valid);
        $finish;
      end else begin
        $display("[PASS] %s", test_name);
      end
    end
  endtask

  initial begin
    rst         = 1'b1;
    stall       = 1'b0;
    redirect    = 1'b0;
    redirect_pc = 32'd0;

    repeat (2) @(posedge clk);

    rst = 1'b0;

    // FETCH @ PC=0
   @(posedge clk);
   check_if(32'd0, 32'h11111111, 1'b1, "FETCH PC=0");

   // FETCH @ PC=4
   @(posedge clk);
   check_if(32'd4, 32'h22222222, 1'b1, "FETCH PC=4");

   // FETCH @ PC=8
   @(posedge clk);
   check_if(32'd8, 32'h33333333, 1'b1, "FETCH PC=8");

   // STALL
   stall = 1'b1;
   @(posedge clk);
   check_if(32'd8, 32'h33333333, 1'b1, "STALL HOLD");

   stall = 1'b0;

   // NEXT FETCH
   @(posedge clk);
   check_if(32'd12, 32'h44444444, 1'b1, "FETCH AFTER STALL");

   // REDIRECT
   redirect    = 1'b1;
   redirect_pc = 32'd64;

   @(posedge clk);  
   redirect = 1'b0;
   @(posedge clk);
   check_if(32'd64, 32'hAAAAAAAA, 1'b1, "REDIRECT FETCH");

   // NEXT FETCH AFTER REDIRECT
   @(posedge clk);
   check_if(32'd68, 32'hDEADBEEF, 1'b1, "POST REDIRECT");

   $display("");
   $display("ALL STAGE_IF TESTS PASSED");
   $display("");

   $finish;

  end

endmodule