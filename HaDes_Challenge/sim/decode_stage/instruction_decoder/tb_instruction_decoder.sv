`timescale 1ns/1ps

module tb_instruction_decoder;

  // --------------------------------------------------
  // DUT signals
  // --------------------------------------------------

  logic [31:0]   instruction_in;
  instruction::t instruction_out;

  // --------------------------------------------------
  // DUT
  // --------------------------------------------------

  instruction_decoder dut (
    .instruction_in  (instruction_in),
    .instruction_out (instruction_out)
  );

  // --------------------------------------------------
  // Self-check helper
  // --------------------------------------------------

  task automatic check_instr (
    input string      test_name,
    input logic [31:0] instr,

    input op::t        expected_op,
    input logic [4:0]  expected_rd,
    input logic [4:0]  expected_rs1,
    input logic [4:0]  expected_rs2,
    input logic [31:0] expected_imm
  );
    begin
      instruction_in = instr;
      #1;

      if (
        (instruction_out.op          !== expected_op)  ||
        (instruction_out.rd_address  !== expected_rd)  ||
        (instruction_out.rs1_address !== expected_rs1) ||
        (instruction_out.rs2_address !== expected_rs2) ||
        (instruction_out.immediate   !== expected_imm)
      ) begin

        $display("[FAIL] %s", test_name);
        $display("Instruction        = %h", instr);

        $display("Expected OP        = %0d", expected_op);
        $display("Actual   OP        = %0d", instruction_out.op);

        $display("Expected RD        = %0d", expected_rd);
        $display("Actual   RD        = %0d", instruction_out.rd_address);

        $display("Expected RS1       = %0d", expected_rs1);
        $display("Actual   RS1       = %0d", instruction_out.rs1_address);

        $display("Expected RS2       = %0d", expected_rs2);
        $display("Actual   RS2       = %0d", instruction_out.rs2_address);

        $display("Expected IMM       = %h", expected_imm);
        $display("Actual   IMM       = %h", instruction_out.immediate);

        $finish;

      end else begin

        $display("[PASS] %s", test_name);

      end
    end
  endtask

  task automatic check_csr_instr (
    input string      test_name,
    input logic [31:0] instr,

    input op::t        expected_op,
    input logic [4:0]  expected_rd,
    input logic [4:0]  expected_rs1,
    input logic [31:0] expected_imm,
    input csr::t       expected_csr
  );
    begin
      instruction_in = instr;
      #1;

      if (
        (instruction_out.op          !== expected_op)  ||
        (instruction_out.rd_address  !== expected_rd)  ||
        (instruction_out.rs1_address !== expected_rs1) ||
        (instruction_out.immediate   !== expected_imm) ||
        (instruction_out.csr         !== expected_csr)
      ) begin

        $display("[FAIL] %s", test_name);
        $display("Instruction        = %h", instr);

        $display("Expected OP        = %0d", expected_op);
        $display("Actual   OP        = %0d", instruction_out.op);

        $display("Expected RD        = %0d", expected_rd);
        $display("Actual   RD        = %0d", instruction_out.rd_address);

        $display("Expected RS1       = %0d", expected_rs1);
        $display("Actual   RS1       = %0d", instruction_out.rs1_address);

        $display("Expected IMM       = %h", expected_imm);
        $display("Actual   IMM       = %h", instruction_out.immediate);

        $display("Expected CSR       = %0d", expected_csr);
        $display("Actual   CSR       = %0d", instruction_out.csr);

        $finish;

      end else begin

        $display("[PASS] %s", test_name);

      end
    end
  endtask

  // --------------------------------------------------
  // Main test sequence
  // --------------------------------------------------

  initial begin

    $display("");
    $display("Starting instruction_decoder self-checking test...");
    $display("");

    // ------------------------------------------------
    // OP-IMM / I-type
    // ------------------------------------------------

    // ADDI x1, x0, 10
    // imm=10, rs1=x0, funct3=000, rd=x1, opcode=0010011
    check_instr(
      "ADDI x1,x0,10",
      32'h00A00093,
      op::ADDI,
      5'd1,
      5'd0,
      5'd10,          // raw rs2 field = instr[24:20] = imm[4:0]
      32'd10
    );

    // ADDI x2, x0, -1
    check_instr(
      "ADDI x2,x0,-1",
      32'hFFF00113,
      op::ADDI,
      5'd2,
      5'd0,
      5'd31,
      32'hFFFF_FFFF
    );

    // SLTI x3, x4, 5
    check_instr(
      "SLTI x3,x4,5",
      32'h00522193,
      op::SLTI,
      5'd3,
      5'd4,
      5'd5,
      32'd5
    );

    // ANDI x5, x6, 0x0F
    check_instr(
      "ANDI x5,x6,15",
      32'h00F37293,
      op::ANDI,
      5'd5,
      5'd6,
      5'd15,
      32'd15
    );

    // SLLI x7, x8, 3
    check_instr(
      "SLLI x7,x8,3",
      32'h00341393,
      op::SLLI,
      5'd7,
      5'd8,
      5'd3,
      32'd3
    );

    // SRLI x9, x10, 4
    check_instr(
      "SRLI x9,x10,4",
      32'h00455493,
      op::SRLI,
      5'd9,
      5'd10,
      5'd4,
      32'd4
    );

    // SRAI x11, x12, 2
    check_instr(
      "SRAI x11,x12,2",
      32'h40265593,
      op::SRAI,
      5'd11,
      5'd12,
      5'd2,
      32'd2
    );

    // ------------------------------------------------
    // OP / R-type
    // ------------------------------------------------

    // ADD x3, x1, x2
    check_instr(
      "ADD x3,x1,x2",
      32'h002081B3,
      op::ADD,
      5'd3,
      5'd1,
      5'd2,
      32'd0
    );

    // SUB x3, x1, x2
    check_instr(
      "SUB x3,x1,x2",
      32'h402081B3,
      op::SUB,
      5'd3,
      5'd1,
      5'd2,
      32'd0
    );

    // AND x13, x14, x15
    check_instr(
      "AND x13,x14,x15",
      32'h00F776B3,
      op::AND,
      5'd13,
      5'd14,
      5'd15,
      32'd0
    );

    // OR x13, x14, x15
    check_instr(
      "OR x13,x14,x15",
      32'h00F766B3,
      op::OR,
      5'd13,
      5'd14,
      5'd15,
      32'd0
    );

    // XOR x13, x14, x15
    check_instr(
      "XOR x13,x14,x15",
      32'h00F746B3,
      op::XOR,
      5'd13,
      5'd14,
      5'd15,
      32'd0
    );

    // ------------------------------------------------
    // LOAD / I-type
    // ------------------------------------------------

    // LW x5, 12(x6)
    check_instr(
      "LW x5,12(x6)",
      32'h00C32283,
      op::LW,
      5'd5,
      5'd6,
      5'd12,
      32'd12
    );

    // LB x5, -4(x6)
    check_instr(
      "LB x5,-4(x6)",
      32'hFFC30283,
      op::LB,
      5'd5,
      5'd6,
      5'd28,
      32'hFFFF_FFFC
    );

    // LHU x5, 8(x6)
    check_instr(
      "LHU x5,8(x6)",
      32'h00835283,
      op::LHU,
      5'd5,
      5'd6,
      5'd8,
      32'd8
    );

    // ------------------------------------------------
    // STORE / S-type
    // ------------------------------------------------

    // SW x5, 16(x6)
    check_instr(
      "SW x5,16(x6)",
      32'h00532823,
      op::SW,
      5'd16,          // raw rd field is immediate[4:0], not destination
      5'd6,
      5'd5,
      32'd16
    );

    // SB x5, -8(x6)
    check_instr(
      "SB x5,-8(x6)",
      32'hFE530C23,
      op::SB,
      5'd24,
      5'd6,
      5'd5,
      32'hFFFF_FFF8
    );

    // ------------------------------------------------
    // BRANCH / B-type
    // ------------------------------------------------

    // BEQ x1, x2, +8
    check_instr(
      "BEQ x1,x2,+8",
      32'h00208463,
      op::BEQ,
      5'd8,           // raw bits [11:7] are part of branch immediate
      5'd1,
      5'd2,
      32'd8
    );

    // BNE x1, x2, -4
    check_instr(
      "BNE x1,x2,-4",
      32'hFE209EE3,
      op::BNE,
      5'd29,
      5'd1,
      5'd2,
      32'hFFFF_FFFC
    );

    // ------------------------------------------------
    // U-type
    // ------------------------------------------------

    // LUI x10, 0x12345
    check_instr(
      "LUI x10,0x12345",
      32'h12345537,
      op::LUI,
      5'd10,
      5'd8,           // raw rs1 field exists physically, ignored architecturally
      5'd3,           // raw rs2 field exists physically, ignored architecturally
      32'h12345000
    );

    // AUIPC x11, 0xABCDE
    check_instr(
      "AUIPC x11,0xABCDE",
      32'hABCDE597,
      op::AUIPC,
      5'd11,
      5'd27,
      5'd28,
      32'hABCDE000
    );

    // ------------------------------------------------
    // J-type / JAL
    // ------------------------------------------------

    // JAL x1, +16
    check_instr(
      "JAL x1,+16",
      32'h010000EF,
      op::JAL,
      5'd1,
      5'd0,
      5'd16,
      32'd16
    );

    // ------------------------------------------------
    // JALR
    // ------------------------------------------------

    // JALR x1, 20(x2)
    check_instr(
      "JALR x1,20(x2)",
      32'h014100E7,
      op::JALR,
      5'd1,
      5'd2,
      5'd20,
      32'd20
    );

    // Illegal JALR funct3
    check_instr(
      "ILLEGAL JALR funct3",
      32'h014120E7,
      op::ILLEGAL,
      5'd1,
      5'd2,
      5'd20,
      32'd20
    );

    // ------------------------------------------------
    // FENCE
    // ------------------------------------------------

    // FENCE
    check_instr(
      "FENCE",
      32'h0000000F,
      op::FENCE,
      5'd0,
      5'd0,
      5'd0,
      32'd0
    );

    // FENCE.I
    check_instr(
      "FENCE.I",
      32'h0000100F,
      op::FENCE_I,
      5'd0,
      5'd0,
      5'd0,
      32'd0
    );

    // ------------------------------------------------
    // SYSTEM
    // ------------------------------------------------

    check_instr(
      "ECALL",
      32'h00000073,
      op::ECALL,
      5'd0,
      5'd0,
      5'd0,
      32'd0
    );

check_instr(
  "EBREAK",
  32'h00100073,
  op::EBREAK,
  5'd0,
  5'd0,
  5'd1,
  32'd0
);

check_instr(
  "MRET",
  32'h30200073,
  op::MRET,
  5'd0,
  5'd0,
  5'd2,
  32'd0
);

check_instr(
  "WFI",
  32'h10500073,
  op::WFI,
  5'd0,
  5'd0,
  5'd5,
  32'd0
);

    // CSRRW x1, mstatus, x2
    // csr=0x300, rs1=x2, funct3=001, rd=x1, opcode=1110011
    check_csr_instr(
      "CSRRW x1,mstatus,x2",
      32'h300110F3,
      op::CSRRW,
      5'd1,
      5'd2,
      32'h300,
      csr::t'(12'h300)
    );

    // CSRRSI x1, mstatus, 5
check_csr_instr(
  "CSRRW x1,mstatus,x2",
  32'h300110F3,
  op::CSRRW,
  5'd1,
  5'd2,
  32'h300,
  csr::t'(12'h300)
);

    // ------------------------------------------------
    // Illegal default
    // ------------------------------------------------

    check_instr(
      "ILLEGAL all ones",
      32'hFFFF_FFFF,
      op::ILLEGAL,
      5'd31,
      5'd31,
      5'd31,
      32'd0
    );

    $display("");
    $display("ALL INSTRUCTION_DECODER TESTS PASSED");
    $display("");

    $finish;
  end

endmodule