// decode_stage.sv – corrected forwarding with operand usage detection
`timescale 1ns/1ps

module decode_stage (
    input logic clk,
    input logic rst,

    input logic [31:0]  instruction_in,
    input logic [31:0]  program_counter_in,
    input forwarding::t exe_forwarding_in,
    input forwarding::t mem_forwarding_in,
    input forwarding::t wb_forwarding_in,

    output logic [31:0]   rs1_data_reg_out,
    output logic [31:0]   rs2_data_reg_out,
    output logic [31:0]   program_counter_reg_out,
    output instruction::t instruction_reg_out,

    input  pipeline_status::forwards_t  status_forwards_in,
    output pipeline_status::forwards_t  status_forwards_out,
    input  pipeline_status::backwards_t status_backwards_in,
    output pipeline_status::backwards_t status_backwards_out,
    input  logic [31:0] jump_address_backwards_in,
    output logic [31:0] jump_address_backwards_out
);

    // ------------------------------------------------------------------
    //  Internal signals
    // ------------------------------------------------------------------
    logic [6:0] opcode;
    logic [4:0] rd, rs1, rs2;
    logic [2:0] funct3;
    logic [6:0] funct7;

    logic [2:0]  imm_type;
    logic [31:0] imm_out;
    logic [31:0] rs1_raw, rs2_raw;
    logic [31:0] rs1_fwd, rs2_fwd;

    instruction::t instr_packed;
    logic downstream_stall, downstream_jump;
    logic stall, flush;

    logic rs1_used, rs2_used;   // true if operand is a real register source

    // ------------------------------------------------------------------
    //  Decoder
    // ------------------------------------------------------------------
    decoder decoder_inst (
        .instr  (instruction_in),
        .opcode (opcode),
        .rd     (rd),
        .funct3 (funct3),
        .rs1    (rs1),
        .rs2    (rs2),
        .funct7 (funct7)
    );

    // ------------------------------------------------------------------
    //  Immediate type – computed directly from opcode
    // ------------------------------------------------------------------
    always_comb begin
        case (opcode)
            7'h37, 7'h17: imm_type = 3'd3;     // LUI, AUIPC (U‑type)
            7'h6F:        imm_type = 3'd4;     // JAL (J‑type)
            7'h63:        imm_type = 3'd2;     // Branches (B‑type)
            7'h23:        imm_type = 3'd1;     // Stores (S‑type)
            7'h13, 7'h03, 7'h67: imm_type = 3'd0; // I‑type
            default:      imm_type = 3'd7;
        endcase
    end

    // ------------------------------------------------------------------
    //  Immediate generator
    // ------------------------------------------------------------------
    immediate_generator imm_inst (
        .instr    (instruction_in),
        .imm_type (imm_type),
        .imm_out  (imm_out)
    );

    // ------------------------------------------------------------------
    //  Register file
    // ------------------------------------------------------------------
    regfile regfile_inst (
        .clk          (clk),
        .rst          (rst),
        .rs1_addr     (rs1),
        .rs2_addr     (rs2),
        .write_enable (wb_forwarding_in.data_valid),
        .rd_addr      (wb_forwarding_in.address),
        .rd_data      (wb_forwarding_in.data),
        .rs1_data     (rs1_raw),
        .rs2_data     (rs2_raw)
    );

    // ------------------------------------------------------------------
    //  Determine which operands are actually used as registers
    // ------------------------------------------------------------------
    always_comb begin
        // default: both are used
        rs1_used = 1'b1;
        rs2_used = 1'b1;

        case (opcode)
            // OP-IMM (ADDI, SLTI, etc.), LOAD, JALR: rs2 field holds immediate, not a register
            7'b0010011, 7'b0000011, 7'b1100111:
                rs2_used = 1'b0;

            // LUI, AUIPC, JAL: no register sources
            7'b0110111, 7'b0010111, 7'b1101111: begin
                rs1_used = 1'b0;
                rs2_used = 1'b0;
            end

            // Store uses rs1 (base) and rs2 (data)
            7'b0100011:
                ; // both used

            // Branch uses both rs1 and rs2
            7'b1100011:
                ; // both used

            // R‑type, CSR, etc. both used by default
            default: ;
        endcase
    end

    // ------------------------------------------------------------------
    //  Forwarding muxes (only forward if operand is used)
    // ------------------------------------------------------------------
    always_comb begin
        rs1_fwd = rs1_raw;
        rs2_fwd = rs2_raw;

        if (rs1_used) begin
            if (exe_forwarding_in.data_valid && (exe_forwarding_in.address == rs1) && (rs1 != 0))
                rs1_fwd = exe_forwarding_in.data;
            else if (mem_forwarding_in.data_valid && (mem_forwarding_in.address == rs1) && (rs1 != 0))
                rs1_fwd = mem_forwarding_in.data;
            else if (wb_forwarding_in.data_valid && (wb_forwarding_in.address == rs1) && (rs1 != 0))
                rs1_fwd = wb_forwarding_in.data;
        end

        if (rs2_used) begin
            if (exe_forwarding_in.data_valid && (exe_forwarding_in.address == rs2) && (rs2 != 0))
                rs2_fwd = exe_forwarding_in.data;
            else if (mem_forwarding_in.data_valid && (mem_forwarding_in.address == rs2) && (rs2 != 0))
                rs2_fwd = mem_forwarding_in.data;
            else if (wb_forwarding_in.data_valid && (wb_forwarding_in.address == rs2) && (rs2 != 0))
                rs2_fwd = wb_forwarding_in.data;
        end else begin
            // For instructions that do not use rs2 as a register, force output to 0
            rs2_fwd = 32'd0;
        end
    end

    // ------------------------------------------------------------------
    //  Instruction packer (produces instruction::t)
    // ------------------------------------------------------------------
    logic [11:0] csr_addr;
    assign csr_addr = instruction_in[31:20];

    always_comb begin
        instr_packed.op          = op::ILLEGAL;
        instr_packed.rd_address  = rd;
        instr_packed.rs1_address = rs1;
        instr_packed.rs2_address = rs2;
        instr_packed.immediate   = imm_out;
        instr_packed.csr         = csr::t'(csr_addr);

        if (opcode == 7'h73) begin
            if (funct3 != 3'b000) begin
                case (funct3)
                    3'b001: instr_packed.op = op::CSRRW;
                    3'b010: instr_packed.op = op::CSRRS;
                    3'b011: instr_packed.op = op::CSRRC;
                    3'b101: instr_packed.op = op::CSRRWI;
                    3'b110: instr_packed.op = op::CSRRSI;
                    3'b111: instr_packed.op = op::CSRRCI;
                    default: instr_packed.op = op::ILLEGAL;
                endcase
                instr_packed.immediate = {20'b0, csr_addr};
            end else begin
                case (csr_addr)
                    12'h000: instr_packed.op = op::ECALL;
                    12'h001: instr_packed.op = op::EBREAK;
                    12'h302: instr_packed.op = op::MRET;
                    12'h105: instr_packed.op = op::WFI;
                    default: instr_packed.op = op::ILLEGAL;
                endcase
                instr_packed.immediate = 32'd0;
            end
        end
        // OP‑IMM
        else if (opcode == 7'b0010011) begin
            case (funct3)
                3'b000: instr_packed.op = op::ADDI;
                3'b001: instr_packed.op = op::SLLI;
                3'b010: instr_packed.op = op::SLTI;
                3'b011: instr_packed.op = op::SLTIU;
                3'b100: instr_packed.op = op::XORI;
                3'b101: instr_packed.op = (funct7 == 7'b0000000) ? op::SRLI : op::SRAI;
                3'b110: instr_packed.op = op::ORI;
                3'b111: instr_packed.op = op::ANDI;
                default: instr_packed.op = op::ILLEGAL;
            endcase
            if (funct3 == 3'b001 || funct3 == 3'b101) // shift
                instr_packed.immediate = {27'b0, rs2};
        end
        // OP (R‑type)
        else if (opcode == 7'b0110011) begin
            case (funct3)
                3'b000: instr_packed.op = (funct7 == 7'b0000000) ? op::ADD : op::SUB;
                3'b001: instr_packed.op = op::SLL;
                3'b010: instr_packed.op = op::SLT;
                3'b011: instr_packed.op = op::SLTU;
                3'b100: instr_packed.op = op::XOR;
                3'b101: instr_packed.op = (funct7 == 7'b0000000) ? op::SRL : op::SRA;
                3'b110: instr_packed.op = op::OR;
                3'b111: instr_packed.op = op::AND;
                default: instr_packed.op = op::ILLEGAL;
            endcase
        end
        // LOAD
        else if (opcode == 7'b0000011) begin
            case (funct3)
                3'b000: instr_packed.op = op::LB;
                3'b001: instr_packed.op = op::LH;
                3'b010: instr_packed.op = op::LW;
                3'b100: instr_packed.op = op::LBU;
                3'b101: instr_packed.op = op::LHU;
                default: instr_packed.op = op::ILLEGAL;
            endcase
        end
        // STORE
        else if (opcode == 7'b0100011) begin
            case (funct3)
                3'b000: instr_packed.op = op::SB;
                3'b001: instr_packed.op = op::SH;
                3'b010: instr_packed.op = op::SW;
                default: instr_packed.op = op::ILLEGAL;
            endcase
        end
        // BRANCH
        else if (opcode == 7'b1100011) begin
            case (funct3)
                3'b000: instr_packed.op = op::BEQ;
                3'b001: instr_packed.op = op::BNE;
                3'b100: instr_packed.op = op::BLT;
                3'b101: instr_packed.op = op::BGE;
                3'b110: instr_packed.op = op::BLTU;
                3'b111: instr_packed.op = op::BGEU;
                default: instr_packed.op = op::ILLEGAL;
            endcase
        end
        // LUI, AUIPC, JAL, JALR
        else if (opcode == 7'b0110111) instr_packed.op = op::LUI;
        else if (opcode == 7'b0010111) instr_packed.op = op::AUIPC;
        else if (opcode == 7'b1101111) instr_packed.op = op::JAL;
        else if (opcode == 7'b1100111) instr_packed.op = (funct3 == 3'b000) ? op::JALR : op::ILLEGAL;
        // FENCE
        else if (opcode == 7'b0001111) begin
            if (funct3 == 3'b000) instr_packed.op = op::FENCE;
            else if (funct3 == 3'b001) instr_packed.op = op::FENCE_I;
            else instr_packed.op = op::ILLEGAL;
        end
        // otherwise default ILLEGAL
    end

    // ------------------------------------------------------------------
    //  Pipeline control
    // ------------------------------------------------------------------
    assign downstream_stall = (status_backwards_in == pipeline_status::STALL);
    assign downstream_jump  = (status_backwards_in == pipeline_status::JUMP);
    assign stall = downstream_stall;
    assign flush = downstream_jump;

    assign status_backwards_out = stall ? pipeline_status::STALL :
                              (instr_packed.op == op::JAL || instr_packed.op == op::JALR) ?
                              pipeline_status::JUMP : pipeline_status::READY;
    assign jump_address_backwards_out = (instr_packed.op == op::JAL || instr_packed.op == op::JALR) ?
                                        (program_counter_in + imm_out) : 32'd0;

    // ------------------------------------------------------------------
    //  ID/EX pipeline register (registered outputs)
    // ------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst || flush) begin
            rs1_data_reg_out      <= 32'd0;
            rs2_data_reg_out      <= 32'd0;
            program_counter_reg_out <= 32'd0;
            instruction_reg_out   <= instruction::NOP;
            status_forwards_out   <= pipeline_status::BUBBLE;
        end else if (!stall) begin
            rs1_data_reg_out      <= rs1_fwd;
            rs2_data_reg_out      <= rs2_fwd;
            program_counter_reg_out <= program_counter_in;
            instruction_reg_out   <= instr_packed;
            status_forwards_out   <= (instr_packed.op == op::ILLEGAL) ?
                                     pipeline_status::ILLEGAL_INSTRUCTION :
                                     pipeline_status::VALID;
        end
    end

endmodule