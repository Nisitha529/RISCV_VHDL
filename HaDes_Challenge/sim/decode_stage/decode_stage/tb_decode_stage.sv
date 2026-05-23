// tb_decode_stage.sv
`timescale 1ns/1ps

module tb_decode_stage;

  // --------------------------------------------------
  // Clock / reset
  // --------------------------------------------------

  logic clk;
  logic rst;

  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end

  // --------------------------------------------------
  // DUT inputs
  // --------------------------------------------------

  logic [31:0] instruction_in;
  logic [31:0] program_counter_in;

  forwarding::t exe_forwarding_in;
  forwarding::t mem_forwarding_in;
  forwarding::t wb_forwarding_in;

  pipeline_status::forwards_t  status_forwards_in;
  pipeline_status::backwards_t status_backwards_in;

  logic [31:0] jump_address_backwards_in;

  // --------------------------------------------------
  // DUT outputs
  // --------------------------------------------------

  logic [31:0]   rs1_data_reg_out;
  logic [31:0]   rs2_data_reg_out;
  logic [31:0]   program_counter_reg_out;
  instruction::t instruction_reg_out;

  pipeline_status::forwards_t  status_forwards_out;
  pipeline_status::backwards_t status_backwards_out;

  logic [31:0] jump_address_backwards_out;

  // --------------------------------------------------
  // DUT
  // --------------------------------------------------

  decode_stage dut (
    .clk                        (clk),
    .rst                        (rst),

    .instruction_in             (instruction_in),
    .program_counter_in         (program_counter_in),

    .exe_forwarding_in          (exe_forwarding_in),
    .mem_forwarding_in          (mem_forwarding_in),
    .wb_forwarding_in           (wb_forwarding_in),

    .rs1_data_reg_out           (rs1_data_reg_out),
    .rs2_data_reg_out           (rs2_data_reg_out),
    .program_counter_reg_out    (program_counter_reg_out),
    .instruction_reg_out        (instruction_reg_out),

    .status_forwards_in         (status_forwards_in),
    .status_forwards_out        (status_forwards_out),

    .status_backwards_in        (status_backwards_in),
    .status_backwards_out       (status_backwards_out),

    .jump_address_backwards_in  (jump_address_backwards_in),
    .jump_address_backwards_out (jump_address_backwards_out)
  );

  // --------------------------------------------------
  // Helper tasks
  // --------------------------------------------------

  task automatic clear_forwarding;
    begin
      exe_forwarding_in = '{
        data_valid : 1'b0,
        data       : 32'd0,
        address    : 5'd0
      };

      mem_forwarding_in = '{
        data_valid : 1'b0,
        data       : 32'd0,
        address    : 5'd0
      };

      wb_forwarding_in = '{
        data_valid : 1'b0,
        data       : 32'd0,
        address    : 5'd0
      };
    end
  endtask

  task automatic apply_inputs (
    input logic [31:0] instr,
    input logic [31:0] pc,

    input forwarding::t exe_fwd,
    input forwarding::t mem_fwd,
    input forwarding::t wb_fwd,

    input pipeline_status::forwards_t  fwd_status,
    input pipeline_status::backwards_t back_status,

    input logic [31:0] jump_addr_in
  );
    begin
      @(negedge clk);

      instruction_in            = instr;
      program_counter_in        = pc;

      exe_forwarding_in         = exe_fwd;
      mem_forwarding_in         = mem_fwd;
      wb_forwarding_in          = wb_fwd;

      status_forwards_in        = fwd_status;
      status_backwards_in       = back_status;
      jump_address_backwards_in = jump_addr_in;

      @(posedge clk);
      #1;
    end
  endtask

  task automatic check_outputs (
    input string test_name,

    input logic [31:0] exp_rs1_reg,
    input logic [31:0] exp_rs2_reg,
    input logic [31:0] exp_pc_reg,

    input instruction::t exp_instr_reg,

    input pipeline_status::forwards_t  exp_status_fwd_out,
    input pipeline_status::backwards_t exp_status_back_out,
    input logic [31:0]                 exp_jump_addr_out
  );
    begin
      if (rs1_data_reg_out !== exp_rs1_reg) begin
        $display("[FAIL] %s: rs1_data_reg_out = %h, expected %h",
                 test_name, rs1_data_reg_out, exp_rs1_reg);
        $finish;
      end

      if (rs2_data_reg_out !== exp_rs2_reg) begin
        $display("[FAIL] %s: rs2_data_reg_out = %h, expected %h",
                 test_name, rs2_data_reg_out, exp_rs2_reg);
        $finish;
      end

      if (program_counter_reg_out !== exp_pc_reg) begin
        $display("[FAIL] %s: program_counter_reg_out = %h, expected %h",
                 test_name, program_counter_reg_out, exp_pc_reg);
        $finish;
      end

      if (instruction_reg_out.op !== exp_instr_reg.op) begin
        $display("[FAIL] %s: instruction_reg_out.op = %0d, expected %0d",
                 test_name, instruction_reg_out.op, exp_instr_reg.op);
        $finish;
      end

      if (instruction_reg_out.rd_address !== exp_instr_reg.rd_address) begin
        $display("[FAIL] %s: rd_address = %0d, expected %0d",
                 test_name, instruction_reg_out.rd_address, exp_instr_reg.rd_address);
        $finish;
      end

      if (instruction_reg_out.rs1_address !== exp_instr_reg.rs1_address) begin
        $display("[FAIL] %s: rs1_address = %0d, expected %0d",
                 test_name, instruction_reg_out.rs1_address, exp_instr_reg.rs1_address);
        $finish;
      end

      if (instruction_reg_out.rs2_address !== exp_instr_reg.rs2_address) begin
        $display("[FAIL] %s: rs2_address = %0d, expected %0d",
                 test_name, instruction_reg_out.rs2_address, exp_instr_reg.rs2_address);
        $finish;
      end

      if (instruction_reg_out.immediate !== exp_instr_reg.immediate) begin
        $display("[FAIL] %s: immediate = %h, expected %h",
                 test_name, instruction_reg_out.immediate, exp_instr_reg.immediate);
        $finish;
      end

      if (instruction_reg_out.csr !== exp_instr_reg.csr) begin
        $display("[FAIL] %s: csr = %0d, expected %0d",
                 test_name, instruction_reg_out.csr, exp_instr_reg.csr);
        $finish;
      end

      if (status_forwards_out !== exp_status_fwd_out) begin
        $display("[FAIL] %s: status_forwards_out = %0d, expected %0d",
                 test_name, status_forwards_out, exp_status_fwd_out);
        $finish;
      end

      if (status_backwards_out !== exp_status_back_out) begin
        $display("[FAIL] %s: status_backwards_out = %0d, expected %0d",
                 test_name, status_backwards_out, exp_status_back_out);
        $finish;
      end

      if (jump_address_backwards_out !== exp_jump_addr_out) begin
        $display("[FAIL] %s: jump_address_backwards_out = %h, expected %h",
                 test_name, jump_address_backwards_out, exp_jump_addr_out);
        $finish;
      end

      $display("[PASS] %s", test_name);
    end
  endtask

  // --------------------------------------------------
  // Debug monitor
  // --------------------------------------------------

  always @(posedge clk) begin
    #1;
    $display("--------------------------------");
    $display("TIME                       = %0t", $time);
    $display("instruction_in             = %h", instruction_in);
    $display("program_counter_in         = %h", program_counter_in);
    $display("status_forwards_in         = %0d", status_forwards_in);
    $display("status_backwards_in        = %0d", status_backwards_in);
    $display("rs1_data_reg_out           = %h", rs1_data_reg_out);
    $display("rs2_data_reg_out           = %h", rs2_data_reg_out);
    $display("program_counter_reg_out    = %h", program_counter_reg_out);
    $display("instruction_reg_out.op     = %0d", instruction_reg_out.op);
    $display("instruction_reg_out.rd     = %0d", instruction_reg_out.rd_address);
    $display("instruction_reg_out.rs1    = %0d", instruction_reg_out.rs1_address);
    $display("instruction_reg_out.rs2    = %0d", instruction_reg_out.rs2_address);
    $display("instruction_reg_out.imm    = %h", instruction_reg_out.immediate);
    $display("instruction_reg_out.csr    = %0d", instruction_reg_out.csr);
    $display("status_forwards_out        = %0d", status_forwards_out);
    $display("status_backwards_out       = %0d", status_backwards_out);
    $display("jump_address_backwards_out = %h", jump_address_backwards_out);
    $display("--------------------------------");
  end

  // --------------------------------------------------
  // Wave dump
  // --------------------------------------------------

  initial begin
    $dumpfile("tb_decode_stage.vcd");
    $dumpvars(0, tb_decode_stage);
  end

  // --------------------------------------------------
  // Main test
  // --------------------------------------------------

  initial begin
    rst                       = 1'b1;

    instruction_in            = 32'h00000013;
    program_counter_in        = 32'd0;

    status_forwards_in        = pipeline_status::BUBBLE;
    status_backwards_in       = pipeline_status::READY;
    jump_address_backwards_in = 32'd0;

    clear_forwarding();

    repeat (3) @(posedge clk);

    rst = 1'b0;

    // ------------------------------------------------
    // Test 1: ADDI x2, x1, 5
    // ADDI x2,x1,5 = 32'h00508113
    // ------------------------------------------------

    mem_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd10,
      address    : 5'd1
    };

    apply_inputs(
      32'h00508113,
      32'h0000_1000,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "ADDI decode",
      32'd10,
      32'd0,
      32'h0000_1000,
      '{
        op          : op::ADDI,
        rd_address  : 5'd2,
        rs1_address : 5'd1,
        rs2_address : 5'd5,
        immediate   : 32'd5,
        csr         : csr::t'(12'h005)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    clear_forwarding();

    // ------------------------------------------------
    // Test 2: ADD x3, x1, x2
    // x1 from MEM forwarding, x2 from WB forwarding.
    // ------------------------------------------------

    mem_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd10,
      address    : 5'd1
    };

    wb_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd20,
      address    : 5'd2
    };

    apply_inputs(
      32'h002081B3,
      32'h0000_1004,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "ADD decode",
      32'd10,
      32'd20,
      32'h0000_1004,
      '{
        op          : op::ADD,
        rd_address  : 5'd3,
        rs1_address : 5'd1,
        rs2_address : 5'd2,
        immediate   : 32'd0,
        csr         : csr::t'(12'h002)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    clear_forwarding();

    // ------------------------------------------------
    // Test 3: EX forwarding
    // ADDI x5, x4, 1 = 32'h00120293
    // ------------------------------------------------

    exe_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd42,
      address    : 5'd4
    };

    apply_inputs(
      32'h00120293,
      32'h0000_1008,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "EX forwarding",
      32'd42,
      32'd0,
      32'h0000_1008,
      '{
        op          : op::ADDI,
        rd_address  : 5'd5,
        rs1_address : 5'd4,
        rs2_address : 5'd1,
        immediate   : 32'd1,
        csr         : csr::t'(12'h001)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    clear_forwarding();

    // ------------------------------------------------
    // Test 4: MEM forwarding
    // ADDI x7, x6, 2 = 32'h00230393
    // ------------------------------------------------

    mem_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd99,
      address    : 5'd6
    };

    apply_inputs(
      32'h00230393,
      32'h0000_100C,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "MEM forwarding",
      32'd99,
      32'd0,
      32'h0000_100C,
      '{
        op          : op::ADDI,
        rd_address  : 5'd7,
        rs1_address : 5'd6,
        rs2_address : 5'd2,
        immediate   : 32'd2,
        csr         : csr::t'(12'h002)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    clear_forwarding();

    // ------------------------------------------------
    // Test 5: forwarding priority
    // EX should win over MEM/WB.
    // ------------------------------------------------

    exe_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'hAAAA_0001,
      address    : 5'd1
    };

    mem_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'hBBBB_0001,
      address    : 5'd1
    };

    wb_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'hCCCC_0001,
      address    : 5'd1
    };

    apply_inputs(
      32'h00108113,
      32'h0000_1010,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "FORWARDING PRIORITY EX OVER MEM/WB",
      32'hAAAA_0001,
      32'd0,
      32'h0000_1010,
      '{
        op          : op::ADDI,
        rd_address  : 5'd2,
        rs1_address : 5'd1,
        rs2_address : 5'd1,
        immediate   : 32'd1,
        csr         : csr::t'(12'h001)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    clear_forwarding();

    // ------------------------------------------------
    // Test 6: STALL holds output.
    // First set baseline ADD instruction.
    // ------------------------------------------------

    mem_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd10,
      address    : 5'd1
    };

    wb_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd20,
      address    : 5'd2
    };

    apply_inputs(
      32'h002081B3,
      32'h0000_1014,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "STALL BASELINE",
      32'd10,
      32'd20,
      32'h0000_1014,
      '{
        op          : op::ADD,
        rd_address  : 5'd3,
        rs1_address : 5'd1,
        rs2_address : 5'd2,
        immediate   : 32'd0,
        csr         : csr::t'(12'h002)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    apply_inputs(
      32'h00310133,
      32'h0000_1018,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::STALL,
      32'd0
    );

    check_outputs(
      "STALL HOLD",
      32'd10,
      32'd20,
      32'h0000_1014,
      '{
        op          : op::ADD,
        rd_address  : 5'd3,
        rs1_address : 5'd1,
        rs2_address : 5'd2,
        immediate   : 32'd0,
        csr         : csr::t'(12'h002)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    clear_forwarding();

    // ------------------------------------------------
    // Test 7: downstream JUMP flush.
    // ------------------------------------------------

    apply_inputs(
      32'h002081B3,
      32'h0000_101C,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::JUMP,
      32'h0000_2000
    );

    check_outputs(
      "JUMP FLUSH",
      32'd0,
      32'd0,
      32'd0,
      instruction::NOP,
      pipeline_status::BUBBLE,
      pipeline_status::READY,
      32'd0
    );

    // ------------------------------------------------
    // Test 8: BEQ decode.
    // ------------------------------------------------

    mem_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd10,
      address    : 5'd1
    };

    wb_forwarding_in = '{
      data_valid : 1'b1,
      data       : 32'd20,
      address    : 5'd2
    };

    apply_inputs(
      32'h00208463,
      32'h0000_3000,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "BEQ decode",
      32'd10,
      32'd20,
      32'h0000_3000,
      '{
        op          : op::BEQ,
        rd_address  : 5'd8,
        rs1_address : 5'd1,
        rs2_address : 5'd2,
        immediate   : 32'd8,
        csr         : csr::t'(12'h002)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    clear_forwarding();

    // ------------------------------------------------
    // Test 9: CSR instruction.
    //
    // CSRRW x1, mstatus, x2 = 32'h300110F3
    //
    // rs1 = x2. Earlier tests wrote/forwarded x2 = 20
    // into the register file through wb_forwarding_in.
    // Therefore rs1_data_reg_out is expected to be 20.
    //
    // CSRRW has no architectural rs2 operand, so rs2_data_reg_out = 0.
    // ------------------------------------------------

    clear_forwarding();

    apply_inputs(
      32'h300110F3,
      32'h0000_4000,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "CSRRW decode",
      32'd20,
      32'd0,
      32'h0000_4000,
      '{
        op          : op::CSRRW,
        rd_address  : 5'd1,
        rs1_address : 5'd2,
        rs2_address : 5'd0,
        immediate   : 32'h0000_0300,
        csr         : csr::t'(12'h300)
      },
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    // ------------------------------------------------
    // Test 10: illegal instruction.
    // ------------------------------------------------

    apply_inputs(
      32'hFFFF_FFFF,
      32'h0000_5000,
      exe_forwarding_in,
      mem_forwarding_in,
      wb_forwarding_in,
      pipeline_status::VALID,
      pipeline_status::READY,
      32'd0
    );

    check_outputs(
      "ILLEGAL instruction",
      32'd0,
      32'd0,
      32'h0000_5000,
      '{
        op          : op::ILLEGAL,
        rd_address  : 5'd31,
        rs1_address : 5'd31,
        rs2_address : 5'd31,
        immediate   : 32'd0,
        csr         : csr::t'(12'hFFF)
      },
      pipeline_status::ILLEGAL_INSTRUCTION,
      pipeline_status::READY,
      32'd0
    );

    $display("");
    $display("=====================================");
    $display("ALL DECODE_STAGE TESTS PASSED");
    $display("=====================================");
    $display("");

    $finish;
  end

endmodule