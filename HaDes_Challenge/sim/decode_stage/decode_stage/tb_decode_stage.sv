`timescale 1ns/1ps

module tb_decode_stage;

    logic clk, rst;

    logic [31:0] instruction_in;
    logic [31:0] program_counter_in;

    forwarding::t exe_forwarding_in;
    forwarding::t mem_forwarding_in;
    forwarding::t wb_forwarding_in;

    logic [31:0]   rs1_data_reg_out;
    logic [31:0]   rs2_data_reg_out;
    logic [31:0]   program_counter_reg_out;
    instruction::t instruction_reg_out;

    pipeline_status::forwards_t  status_forwards_in;
    pipeline_status::forwards_t  status_forwards_out;
    pipeline_status::backwards_t status_backwards_in;
    pipeline_status::backwards_t status_backwards_out;

    logic [31:0] jump_address_backwards_in;
    logic [31:0] jump_address_backwards_out;

    int pass_count;
    int fail_count;

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

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    function automatic logic [31:0] r_type(
        input logic [6:0] funct7,
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic [2:0] funct3,
        input logic [4:0] rd,
        input logic [6:0] opcode
    );
        r_type = {funct7, rs2, rs1, funct3, rd, opcode};
    endfunction

    function automatic logic [31:0] i_type(
        input logic [11:0] imm,
        input logic [4:0]  rs1,
        input logic [2:0]  funct3,
        input logic [4:0]  rd,
        input logic [6:0]  opcode
    );
        i_type = {imm, rs1, funct3, rd, opcode};
    endfunction

    function automatic logic [31:0] s_type(
        input logic [11:0] imm,
        input logic [4:0]  rs2,
        input logic [4:0]  rs1,
        input logic [2:0]  funct3,
        input logic [6:0]  opcode
    );
        s_type = {imm[11:5], rs2, rs1, funct3, imm[4:0], opcode};
    endfunction

    function automatic logic [31:0] b_type(
        input logic [12:0] imm,
        input logic [4:0]  rs2,
        input logic [4:0]  rs1,
        input logic [2:0]  funct3,
        input logic [6:0]  opcode
    );
        b_type = {imm[12], imm[10:5], rs2, rs1, funct3, imm[4:1], imm[11], opcode};
    endfunction

    function automatic logic [31:0] u_type(
        input logic [19:0] imm20,
        input logic [4:0]  rd,
        input logic [6:0]  opcode
    );
        u_type = {imm20, rd, opcode};
    endfunction

    function automatic logic [31:0] j_type(
        input logic [20:0] imm,
        input logic [4:0]  rd,
        input logic [6:0]  opcode
    );
        j_type = {imm[20], imm[10:1], imm[11], imm[19:12], rd, opcode};
    endfunction

    task automatic clear_forwarding();
        begin
            exe_forwarding_in = '{default:0};
            mem_forwarding_in = '{default:0};
            wb_forwarding_in  = '{default:0};
        end
    endtask

    task automatic check32(input string name, input logic [31:0] actual, input logic [31:0] expected);
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=0x%08h expected=0x%08h", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check5(input string name, input logic [4:0] actual, input logic [4:0] expected);
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_op(input string name, input op::t actual, input op::t expected);
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_fwd_status(
        input string name,
        input pipeline_status::forwards_t actual,
        input pipeline_status::forwards_t expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_bwd_status(
        input string name,
        input pipeline_status::backwards_t actual,
        input pipeline_status::backwards_t expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic wb_write_reg(input logic [4:0] addr, input logic [31:0] data);
        begin
            @(negedge clk);
            instruction_in            = 32'h00000013;
            program_counter_in        = 32'd0;
            status_forwards_in        = pipeline_status::BUBBLE;
            status_backwards_in       = pipeline_status::READY;
            jump_address_backwards_in = 32'd0;
            clear_forwarding();

            wb_forwarding_in.data_valid = 1'b1;
            wb_forwarding_in.address    = addr;
            wb_forwarding_in.data       = data;

            @(posedge clk);
            #1;

            @(negedge clk);
            clear_forwarding();
        end
    endtask

    task automatic drive_and_check(
        input string name,
        input logic [31:0] instr,
        input logic [31:0] pc,
        input op::t expected_op,
        input logic [4:0] expected_rd,
        input logic [4:0] expected_rs1,
        input logic [4:0] expected_rs2,
        input logic [31:0] expected_imm,
        input logic [31:0] expected_rs1_data,
        input logic [31:0] expected_rs2_data,
        input pipeline_status::forwards_t expected_status
    );
        begin
            $display("\n--- %s ---", name);

            @(negedge clk);
            instruction_in            = instr;
            program_counter_in        = pc;
            status_forwards_in        = pipeline_status::VALID;
            status_backwards_in       = pipeline_status::READY;
            jump_address_backwards_in = 32'd0;
            clear_forwarding();

            @(posedge clk);
            #1;

            check_op({name, " op"}, instruction_reg_out.op, expected_op);
            check5({name, " rd"}, instruction_reg_out.rd_address, expected_rd);
            check5({name, " rs1"}, instruction_reg_out.rs1_address, expected_rs1);
            check5({name, " rs2"}, instruction_reg_out.rs2_address, expected_rs2);
            check32({name, " imm"}, instruction_reg_out.immediate, expected_imm);
            check32({name, " rs1_data"}, rs1_data_reg_out, expected_rs1_data);
            check32({name, " rs2_data"}, rs2_data_reg_out, expected_rs2_data);
            check32({name, " pc"}, program_counter_reg_out, pc);
            check_fwd_status({name, " status"}, status_forwards_out, expected_status);
        end
    endtask

    task automatic drive_and_check_csr(
        input string name,
        input logic [31:0] instr,
        input logic [31:0] pc,
        input op::t expected_op,
        input logic [4:0] expected_rd,
        input logic [4:0] expected_rs1,
        input logic [31:0] expected_csr,
        input logic [31:0] expected_imm,
        input logic [31:0] expected_rs1_data,
        input pipeline_status::forwards_t expected_status
    );
        begin
            $display("\n--- %s ---", name);

            @(negedge clk);
            instruction_in            = instr;
            program_counter_in        = pc;
            status_forwards_in        = pipeline_status::VALID;
            status_backwards_in       = pipeline_status::READY;
            jump_address_backwards_in = 32'd0;
            clear_forwarding();

            @(posedge clk);
            #1;

            check_op({name, " op"}, instruction_reg_out.op, expected_op);
            check5({name, " rd"}, instruction_reg_out.rd_address, expected_rd);
            check5({name, " rs1"}, instruction_reg_out.rs1_address, expected_rs1);
            check5({name, " rs2 cleared"}, instruction_reg_out.rs2_address, 5'd0);
            check32({name, " csr"}, 32'(instruction_reg_out.csr), expected_csr);
            check32({name, " imm"}, instruction_reg_out.immediate, expected_imm);
            check32({name, " rs1_data"}, rs1_data_reg_out, expected_rs1_data);
            check32({name, " rs2_data"}, rs2_data_reg_out, 32'd0);
            check_fwd_status({name, " status"}, status_forwards_out, expected_status);
        end
    endtask

    initial begin
        pass_count = 0;
        fail_count = 0;

        instruction_in            = 32'h00000013;
        program_counter_in        = 32'd0;
        status_forwards_in        = pipeline_status::BUBBLE;
        status_backwards_in       = pipeline_status::READY;
        jump_address_backwards_in = 32'd0;
        clear_forwarding();

        rst = 1'b1;
        repeat (3) @(posedge clk);
        #1;

        check_fwd_status("reset status BUBBLE", status_forwards_out, pipeline_status::BUBBLE);
        check32("reset rs1", rs1_data_reg_out, 32'd0);
        check32("reset rs2", rs2_data_reg_out, 32'd0);

        rst = 1'b0;

        // preload register file
        wb_write_reg(5'd1, 32'h0000_0011);
        wb_write_reg(5'd2, 32'h0000_0022);
        wb_write_reg(5'd3, 32'h0000_0033);
        wb_write_reg(5'd4, 32'h0000_0044);
        wb_write_reg(5'd5, 32'h0000_0055);
        wb_write_reg(5'd6, 32'h0000_0066);
        wb_write_reg(5'd7, 32'h0000_0077);

        // x0 must remain zero
        wb_write_reg(5'd0, 32'hDEAD_BEEF);
        check32("x0 remains zero", dut.register_file_inst.regs[0], 32'd0);

        // R-type
        drive_and_check("ADD",  r_type(7'b0000000,5'd2,5'd1,3'b000,5'd8,7'b0110011), 32'h100, op::ADD,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SUB",  r_type(7'b0100000,5'd2,5'd1,3'b000,5'd8,7'b0110011), 32'h104, op::SUB,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SLL",  r_type(7'b0000000,5'd2,5'd1,3'b001,5'd8,7'b0110011), 32'h108, op::SLL,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SLT",  r_type(7'b0000000,5'd2,5'd1,3'b010,5'd8,7'b0110011), 32'h10C, op::SLT,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SLTU", r_type(7'b0000000,5'd2,5'd1,3'b011,5'd8,7'b0110011), 32'h110, op::SLTU, 5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("XOR",  r_type(7'b0000000,5'd2,5'd1,3'b100,5'd8,7'b0110011), 32'h114, op::XOR,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SRL",  r_type(7'b0000000,5'd2,5'd1,3'b101,5'd8,7'b0110011), 32'h118, op::SRL,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SRA",  r_type(7'b0100000,5'd2,5'd1,3'b101,5'd8,7'b0110011), 32'h11C, op::SRA,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("OR",   r_type(7'b0000000,5'd2,5'd1,3'b110,5'd8,7'b0110011), 32'h120, op::OR,   5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("AND",  r_type(7'b0000000,5'd2,5'd1,3'b111,5'd8,7'b0110011), 32'h124, op::AND,  5'd8,5'd1,5'd2,32'd0, 32'h11,32'h22,pipeline_status::VALID);

        // I-type ALU
        drive_and_check("ADDI",  i_type(12'hFFF,5'd1,3'b000,5'd9,7'b0010011), 32'h200, op::ADDI,  5'd9,5'd1,5'd0,32'hFFFF_FFFF,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("SLTI",  i_type(12'h001,5'd1,3'b010,5'd9,7'b0010011), 32'h204, op::SLTI,  5'd9,5'd1,5'd0,32'h0000_0001,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("SLTIU", i_type(12'h001,5'd1,3'b011,5'd9,7'b0010011), 32'h208, op::SLTIU, 5'd9,5'd1,5'd0,32'h0000_0001,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("XORI",  i_type(12'h0AA,5'd1,3'b100,5'd9,7'b0010011), 32'h20C, op::XORI,  5'd9,5'd1,5'd0,32'h0000_00AA,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("ORI",   i_type(12'h0AA,5'd1,3'b110,5'd9,7'b0010011), 32'h210, op::ORI,   5'd9,5'd1,5'd0,32'h0000_00AA,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("ANDI",  i_type(12'h0AA,5'd1,3'b111,5'd9,7'b0010011), 32'h214, op::ANDI,  5'd9,5'd1,5'd0,32'h0000_00AA,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("SLLI",  r_type(7'b0000000,5'd4,5'd1,3'b001,5'd9,7'b0010011), 32'h218, op::SLLI, 5'd9,5'd1,5'd0,32'h0000_0004,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("SRLI",  r_type(7'b0000000,5'd4,5'd1,3'b101,5'd9,7'b0010011), 32'h21C, op::SRLI, 5'd9,5'd1,5'd0,32'h0000_0004,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("SRAI",  r_type(7'b0100000,5'd4,5'd1,3'b101,5'd9,7'b0010011), 32'h220, op::SRAI, 5'd9,5'd1,5'd0,32'h0000_0004,32'h11,32'd0,pipeline_status::VALID);

        // Loads
        drive_and_check("LB",  i_type(12'h004,5'd1,3'b000,5'd10,7'b0000011), 32'h300, op::LB,  5'd10,5'd1,5'd0,32'h4,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("LH",  i_type(12'h004,5'd1,3'b001,5'd10,7'b0000011), 32'h304, op::LH,  5'd10,5'd1,5'd0,32'h4,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("LW",  i_type(12'h004,5'd1,3'b010,5'd10,7'b0000011), 32'h308, op::LW,  5'd10,5'd1,5'd0,32'h4,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("LBU", i_type(12'h004,5'd1,3'b100,5'd10,7'b0000011), 32'h30C, op::LBU, 5'd10,5'd1,5'd0,32'h4,32'h11,32'd0,pipeline_status::VALID);
        drive_and_check("LHU", i_type(12'h004,5'd1,3'b101,5'd10,7'b0000011), 32'h310, op::LHU, 5'd10,5'd1,5'd0,32'h4,32'h11,32'd0,pipeline_status::VALID);

        // Stores
        drive_and_check("SB", s_type(12'h00C,5'd2,5'd1,3'b000,7'b0100011), 32'h400, op::SB, 5'd0,5'd1,5'd2,32'hC,32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SH", s_type(12'h00C,5'd2,5'd1,3'b001,7'b0100011), 32'h404, op::SH, 5'd0,5'd1,5'd2,32'hC,32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("SW", s_type(12'h00C,5'd2,5'd1,3'b010,7'b0100011), 32'h408, op::SW, 5'd0,5'd1,5'd2,32'hC,32'h11,32'h22,pipeline_status::VALID);

        // Branches
        drive_and_check("BEQ",  b_type(13'h010,5'd2,5'd1,3'b000,7'b1100011), 32'h500, op::BEQ,  5'd0,5'd1,5'd2,32'h10,32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("BNE",  b_type(13'h010,5'd2,5'd1,3'b001,7'b1100011), 32'h504, op::BNE,  5'd0,5'd1,5'd2,32'h10,32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("BLT",  b_type(13'h010,5'd2,5'd1,3'b100,7'b1100011), 32'h508, op::BLT,  5'd0,5'd1,5'd2,32'h10,32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("BGE",  b_type(13'h010,5'd2,5'd1,3'b101,7'b1100011), 32'h50C, op::BGE,  5'd0,5'd1,5'd2,32'h10,32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("BLTU", b_type(13'h010,5'd2,5'd1,3'b110,7'b1100011), 32'h510, op::BLTU, 5'd0,5'd1,5'd2,32'h10,32'h11,32'h22,pipeline_status::VALID);
        drive_and_check("BGEU", b_type(13'h010,5'd2,5'd1,3'b111,7'b1100011), 32'h514, op::BGEU, 5'd0,5'd1,5'd2,32'h10,32'h11,32'h22,pipeline_status::VALID);

        // U/J/JALR
        drive_and_check("LUI",   u_type(20'h12345,5'd11,7'b0110111), 32'h600, op::LUI,   5'd11,5'd0,5'd0,32'h12345000,32'd0,32'd0,pipeline_status::VALID);
        drive_and_check("AUIPC", u_type(20'h12345,5'd11,7'b0010111), 32'h604, op::AUIPC, 5'd11,5'd0,5'd0,32'h12345000,32'd0,32'd0,pipeline_status::VALID);
        drive_and_check("JAL",   j_type(21'h00010,5'd12,7'b1101111), 32'h608, op::JAL,   5'd12,5'd0,5'd0,32'h10,32'd0,32'd0,pipeline_status::VALID);
        drive_and_check("JALR",  i_type(12'h008,5'd1,3'b000,5'd12,7'b1100111), 32'h60C, op::JALR, 5'd12,5'd1,5'd0,32'h8,32'h11,32'd0,pipeline_status::VALID);

        // CSR
        drive_and_check_csr("CSRRW",  i_type(12'h300,5'd1,3'b001,5'd13,7'b1110011), 32'h700, op::CSRRW,  5'd13,5'd1,32'h300,32'h300,32'h11,pipeline_status::VALID);
        drive_and_check_csr("CSRRS",  i_type(12'h305,5'd1,3'b010,5'd13,7'b1110011), 32'h704, op::CSRRS,  5'd13,5'd1,32'h305,32'h305,32'h11,pipeline_status::VALID);
        drive_and_check_csr("CSRRC",  i_type(12'h341,5'd1,3'b011,5'd13,7'b1110011), 32'h708, op::CSRRC,  5'd13,5'd1,32'h341,32'h341,32'h11,pipeline_status::VALID);
        drive_and_check_csr("CSRRWI", i_type(12'h300,5'd7,3'b101,5'd13,7'b1110011), 32'h70C, op::CSRRWI, 5'd13,5'd0,32'h300,32'd7,32'd0,pipeline_status::VALID);
        drive_and_check_csr("CSRRSI", i_type(12'h304,5'd6,3'b110,5'd13,7'b1110011), 32'h710, op::CSRRSI, 5'd13,5'd0,32'h304,32'd6,32'd0,pipeline_status::VALID);
        drive_and_check_csr("CSRRCI", i_type(12'h344,5'd5,3'b111,5'd13,7'b1110011), 32'h714, op::CSRRCI, 5'd13,5'd0,32'h344,32'd5,32'd0,pipeline_status::VALID);

        // System and fence
        drive_and_check("ECALL",   32'h00000073, 32'h800, op::ECALL,   5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::ECALL);
        drive_and_check("EBREAK",  32'h00100073, 32'h804, op::EBREAK,  5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::EBREAK);
        drive_and_check("MRET",    32'h30200073, 32'h808, op::MRET,    5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::VALID);
        drive_and_check("WFI",     32'h10500073, 32'h80C, op::WFI,     5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::VALID);
        drive_and_check("FENCE",   i_type(12'h000,5'd0,3'b000,5'd0,7'b0001111), 32'h810, op::FENCE,   5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::VALID);
        drive_and_check("FENCE_I", i_type(12'h000,5'd0,3'b001,5'd0,7'b0001111), 32'h814, op::FENCE_I, 5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::VALID);

        // Illegal encodings
        drive_and_check("ILLEGAL all ones", 32'hFFFF_FFFF, 32'h900, op::ILLEGAL, 5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::ILLEGAL_INSTRUCTION);
        drive_and_check("ILLEGAL bad R funct7", r_type(7'b1111111,5'd2,5'd1,3'b000,5'd8,7'b0110011), 32'h904, op::ILLEGAL, 5'd8,5'd1,5'd2,32'd0,32'd0,32'd0,pipeline_status::ILLEGAL_INSTRUCTION);
        drive_and_check("ILLEGAL bad shift imm", r_type(7'b1111111,5'd4,5'd1,3'b101,5'd9,7'b0010011), 32'h908, op::ILLEGAL, 5'd9,5'd1,5'd0,32'hFFFF_FFE4,32'd0,32'd0,pipeline_status::ILLEGAL_INSTRUCTION);
        drive_and_check("ILLEGAL bad branch funct3", b_type(13'h010,5'd2,5'd1,3'b010,7'b1100011), 32'h90C, op::ILLEGAL, 5'd0,5'd1,5'd2,32'h10,32'd0,32'd0,pipeline_status::ILLEGAL_INSTRUCTION);
        drive_and_check("ILLEGAL bad load funct3", i_type(12'h004,5'd1,3'b011,5'd10,7'b0000011), 32'h910, op::ILLEGAL, 5'd10,5'd1,5'd0,32'h4,32'd0,32'd0,pipeline_status::ILLEGAL_INSTRUCTION);
        drive_and_check("ILLEGAL bad system", 32'h99900073, 32'h914, op::ILLEGAL, 5'd0,5'd0,5'd0,32'd0,32'd0,32'd0,pipeline_status::ILLEGAL_INSTRUCTION);

        // Incoming status propagation
        $display("\n--- incoming status propagation ---");
        @(negedge clk);
        instruction_in            = r_type(7'b0000000,5'd2,5'd1,3'b000,5'd8,7'b0110011);
        program_counter_in        = 32'hA00;
        status_forwards_in        = pipeline_status::FETCH_FAULT;
        status_backwards_in       = pipeline_status::READY;
        jump_address_backwards_in = 32'd0;
        clear_forwarding();

        @(posedge clk);
        #1;

        check_fwd_status("FETCH_FAULT propagated", status_forwards_out, pipeline_status::FETCH_FAULT);
        check_op("FETCH_FAULT inserts NOP instruction", instruction_reg_out.op, instruction::NOP.op);
        check32("FETCH_FAULT PC propagated", program_counter_reg_out, 32'hA00);

        // Forwarding priority EX > MEM > WB
        $display("\n--- forwarding priority EX > MEM > WB ---");
        @(negedge clk);
        instruction_in            = i_type(12'h000,5'd1,3'b000,5'd9,7'b0010011);
        program_counter_in        = 32'hA10;
        status_forwards_in        = pipeline_status::VALID;
        status_backwards_in       = pipeline_status::READY;
        clear_forwarding();

        exe_forwarding_in.data_valid = 1'b1;
        exe_forwarding_in.address    = 5'd1;
        exe_forwarding_in.data       = 32'hAAAA_0001;

        mem_forwarding_in.data_valid = 1'b1;
        mem_forwarding_in.address    = 5'd1;
        mem_forwarding_in.data       = 32'hBBBB_0001;

        wb_forwarding_in.data_valid  = 1'b0; // avoid regfile write side effect
        wb_forwarding_in.address     = 5'd1;
        wb_forwarding_in.data        = 32'hCCCC_0001;

        @(posedge clk);
        #1;

        check32("EX priority selected", rs1_data_reg_out, 32'hAAAA_0001);
        clear_forwarding();
        check32("x1 preserved", dut.register_file_inst.regs[1], 32'h11);

        // MEM forwarding
        $display("\n--- MEM forwarding ---");
        @(negedge clk);
        instruction_in            = r_type(7'b0000000,5'd2,5'd1,3'b000,5'd9,7'b0110011);
        program_counter_in        = 32'hA14;
        status_forwards_in        = pipeline_status::VALID;
        status_backwards_in       = pipeline_status::READY;
        clear_forwarding();

        mem_forwarding_in.data_valid = 1'b1;
        mem_forwarding_in.address    = 5'd2;
        mem_forwarding_in.data       = 32'hBBBB_0002;

        @(posedge clk);
        #1;

        check32("MEM forwarding rs2", rs2_data_reg_out, 32'hBBBB_0002);
        clear_forwarding();

        // WB forwarding and writeback
        $display("\n--- WB forwarding/writeback ---");
        @(negedge clk);
        instruction_in            = i_type(12'h000,5'd3,3'b000,5'd9,7'b0010011);
        program_counter_in        = 32'hA18;
        status_forwards_in        = pipeline_status::VALID;
        status_backwards_in       = pipeline_status::READY;
        clear_forwarding();

        wb_forwarding_in.data_valid = 1'b1;
        wb_forwarding_in.address    = 5'd3;
        wb_forwarding_in.data       = 32'hCCCC_0003;

        @(posedge clk);
        #1;

        check32("WB forwarding rs1", rs1_data_reg_out, 32'hCCCC_0003);
        check32("x3 updated by WB", dut.register_file_inst.regs[3], 32'hCCCC_0003);
        clear_forwarding();

        // Stall holds
        $display("\n--- downstream STALL hold ---");
        drive_and_check("STALL baseline ADD", r_type(7'b0000000,5'd2,5'd1,3'b000,5'd8,7'b0110011), 32'hB00, op::ADD, 5'd8,5'd1,5'd2,32'd0,32'h11,32'h22,pipeline_status::VALID);

        @(negedge clk);
        instruction_in            = u_type(20'hABCDE,5'd9,7'b0110111);
        program_counter_in        = 32'hB04;
        status_forwards_in        = pipeline_status::VALID;
        status_backwards_in       = pipeline_status::STALL;
        jump_address_backwards_in = 32'h1234_5678;

        @(posedge clk);
        #1;

        check_bwd_status("STALL backward status", status_backwards_out, pipeline_status::STALL);
        check_op("STALL holds op", instruction_reg_out.op, op::ADD);
        check32("STALL holds PC", program_counter_reg_out, 32'hB00);

        // Jump flush
        $display("\n--- downstream JUMP flush ---");
        @(negedge clk);
        status_backwards_in       = pipeline_status::JUMP;
        jump_address_backwards_in = 32'hCAFE_BABE;
        instruction_in            = r_type(7'b0000000,5'd2,5'd1,3'b000,5'd8,7'b0110011);
        program_counter_in        = 32'hB08;

        @(posedge clk);
        #1;

        check_bwd_status("JUMP backward status", status_backwards_out, pipeline_status::JUMP);
        check32("JUMP address propagated", jump_address_backwards_out, 32'hCAFE_BABE);
        check_fwd_status("JUMP flush BUBBLE", status_forwards_out, pipeline_status::BUBBLE);
        check_op("JUMP flush NOP", instruction_reg_out.op, instruction::NOP.op);

        $display("\n========================================");
        $display("COMPREHENSIVE DECODE_STAGE TEST SUMMARY");
        $display("PASSED: %0d", pass_count);
        $display("FAILED: %0d", fail_count);
        $display("========================================");

        if (fail_count == 0) begin
            $display("ALL COMPREHENSIVE DECODE_STAGE TESTS PASSED");
            $finish;
        end else begin
            $display("COMPREHENSIVE DECODE_STAGE TESTS FAILED");
            $fatal;
        end
    end

    initial begin
        $dumpfile("tb_decode_stage.vcd");
        $dumpvars(0, tb_decode_stage);
    end

    initial begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] Simulation timeout");
        $fatal;
    end

endmodule