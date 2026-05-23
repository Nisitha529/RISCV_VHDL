// decode_stage.sv
`timescale 1ns/1ps

module decode_stage (
    input logic clk,
    input logic rst,

    // Inputs
    input logic [31:0]  instruction_in,
    input logic [31:0]  program_counter_in,
    input forwarding::t exe_forwarding_in,
    input forwarding::t mem_forwarding_in,
    input forwarding::t wb_forwarding_in,

    // Output Registers
    output logic [31:0]   rs1_data_reg_out,
    output logic [31:0]   rs2_data_reg_out,
    output logic [31:0]   program_counter_reg_out,
    output instruction::t instruction_reg_out,

    // Pipeline control
    input  pipeline_status::forwards_t  status_forwards_in,
    output pipeline_status::forwards_t  status_forwards_out,
    input  pipeline_status::backwards_t status_backwards_in,
    output pipeline_status::backwards_t status_backwards_out,
    input  logic [31:0] jump_address_backwards_in,
    output logic [31:0] jump_address_backwards_out
);

    // ------------------------------------------------------------------
    // Internal signals
    // ------------------------------------------------------------------

    logic [6:0] opcode;
    logic [4:0] rd;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [2:0] funct3;
    logic [6:0] funct7;

    logic [3:0] alu_op;
    logic       alu_use_imm;
    logic       write_rd;
    logic       write_mem;
    logic       mem_access;
    logic [5:0] mem_width;
    logic       jump;
    logic       branch;
    logic [2:0] rd_data_src;
    logic [2:0] imm_type;

    logic [31:0] imm_out;

    logic [31:0] rs1_raw;
    logic [31:0] rs2_raw;
    logic [31:0] rs1_fwd;
    logic [31:0] rs2_fwd;

    instruction::t instr_packed;

    logic downstream_stall;
    logic downstream_jump;
    logic stall;
    logic flush;

    logic uses_rs2;

    // ------------------------------------------------------------------
    // Decoder
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
    // Control unit
    // ------------------------------------------------------------------

    control_unit ctrl_inst (
        .opcode       (opcode),
        .funct3       (funct3),
        .funct7       (funct7),

        .alu_op       (alu_op),
        .alu_use_imm  (alu_use_imm),

        .write_rd     (write_rd),

        .write_mem    (write_mem),
        .mem_access   (mem_access),
        .mem_width    (mem_width),

        .jump         (jump),
        .is_branch    (branch),

        .rd_data_src  (rd_data_src),
        .imm_type     (imm_type)
    );

    // ------------------------------------------------------------------
    // Immediate generator
    // ------------------------------------------------------------------

    immediate_generator imm_inst (
        .instr    (instruction_in),
        .imm_type (imm_type),
        .imm_out  (imm_out)
    );

    // ------------------------------------------------------------------
    // Register file
    // ------------------------------------------------------------------

    regfile regfile_inst (
        .clk          (clk),
        .rst          (rst),

        .rs1_addr     (rs1),
        .rs2_addr     (rs2),

        .write_enable (wb_forwarding_in.data_valid &&
                       (wb_forwarding_in.address != 5'd0)),

        .rd_addr      (wb_forwarding_in.address),
        .rd_data      (wb_forwarding_in.data),

        .rs1_data     (rs1_raw),
        .rs2_data     (rs2_raw)
    );

    // ------------------------------------------------------------------
    // Instruction packer
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

        // --------------------------------------------------------------
        // CSR / SYSTEM
        // --------------------------------------------------------------

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

                // Current design behavior:
                // CSR address is also copied to immediate.
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

        // --------------------------------------------------------------
        // OP-IMM
        // --------------------------------------------------------------

        else if (opcode == 7'b0010011) begin
            case (funct3)
                3'b000: instr_packed.op = op::ADDI;
                3'b001: instr_packed.op = (funct7 == 7'b0000000) ? op::SLLI : op::ILLEGAL;
                3'b010: instr_packed.op = op::SLTI;
                3'b011: instr_packed.op = op::SLTIU;
                3'b100: instr_packed.op = op::XORI;
                3'b101: begin
                    if (funct7 == 7'b0000000) begin
                        instr_packed.op = op::SRLI;
                    end else if (funct7 == 7'b0100000) begin
                        instr_packed.op = op::SRAI;
                    end else begin
                        instr_packed.op = op::ILLEGAL;
                    end
                end
                3'b110: instr_packed.op = op::ORI;
                3'b111: instr_packed.op = op::ANDI;
                default: instr_packed.op = op::ILLEGAL;
            endcase

            if ((funct3 == 3'b001) || (funct3 == 3'b101)) begin
                instr_packed.immediate = {27'b0, rs2};
            end
        end

        // --------------------------------------------------------------
        // OP / R-type
        // --------------------------------------------------------------

        else if (opcode == 7'b0110011) begin
            instr_packed.immediate = 32'd0;

            case (funct3)
                3'b000: begin
                    if (funct7 == 7'b0000000) begin
                        instr_packed.op = op::ADD;
                    end else if (funct7 == 7'b0100000) begin
                        instr_packed.op = op::SUB;
                    end else begin
                        instr_packed.op = op::ILLEGAL;
                    end
                end

                3'b001: instr_packed.op = (funct7 == 7'b0000000) ? op::SLL  : op::ILLEGAL;
                3'b010: instr_packed.op = (funct7 == 7'b0000000) ? op::SLT  : op::ILLEGAL;
                3'b011: instr_packed.op = (funct7 == 7'b0000000) ? op::SLTU : op::ILLEGAL;
                3'b100: instr_packed.op = (funct7 == 7'b0000000) ? op::XOR  : op::ILLEGAL;

                3'b101: begin
                    if (funct7 == 7'b0000000) begin
                        instr_packed.op = op::SRL;
                    end else if (funct7 == 7'b0100000) begin
                        instr_packed.op = op::SRA;
                    end else begin
                        instr_packed.op = op::ILLEGAL;
                    end
                end

                3'b110: instr_packed.op = (funct7 == 7'b0000000) ? op::OR  : op::ILLEGAL;
                3'b111: instr_packed.op = (funct7 == 7'b0000000) ? op::AND : op::ILLEGAL;

                default: instr_packed.op = op::ILLEGAL;
            endcase
        end

        // --------------------------------------------------------------
        // LOAD
        // --------------------------------------------------------------

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

        // --------------------------------------------------------------
        // STORE
        // --------------------------------------------------------------

        else if (opcode == 7'b0100011) begin
            case (funct3)
                3'b000: instr_packed.op = op::SB;
                3'b001: instr_packed.op = op::SH;
                3'b010: instr_packed.op = op::SW;
                default: instr_packed.op = op::ILLEGAL;
            endcase
        end

        // --------------------------------------------------------------
        // BRANCH
        // --------------------------------------------------------------

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

        // --------------------------------------------------------------
        // U/J/JALR/FENCE
        // --------------------------------------------------------------

        else if (opcode == 7'b0110111) begin
            instr_packed.op = op::LUI;
        end

        else if (opcode == 7'b0010111) begin
            instr_packed.op = op::AUIPC;
        end

        else if (opcode == 7'b1101111) begin
            instr_packed.op = op::JAL;
        end

        else if (opcode == 7'b1100111) begin
            instr_packed.op = (funct3 == 3'b000) ? op::JALR : op::ILLEGAL;
        end

        else if (opcode == 7'b0001111) begin
            if (funct3 == 3'b000) begin
                instr_packed.op = op::FENCE;
            end else if (funct3 == 3'b001) begin
                instr_packed.op = op::FENCE_I;
            end else begin
                instr_packed.op = op::ILLEGAL;
            end
        end
    end

    // ------------------------------------------------------------------
    // Source-register usage
    // ------------------------------------------------------------------
    // I-type instructions expose raw rs2_address = imm[4:0], but do not
    // actually use rs2 as an operand. Therefore rs2 forwarding must be
    // disabled for I-type instructions.

    always_comb begin
        uses_rs2 = 1'b0;

        case (instr_packed.op)
            op::ADD,  op::SUB,  op::SLL,  op::SLT,
            op::SLTU, op::XOR,  op::SRL,  op::SRA,
            op::OR,   op::AND,

            op::SB,   op::SH,   op::SW,

            op::BEQ,  op::BNE,  op::BLT,  op::BGE,
            op::BLTU, op::BGEU: begin
                uses_rs2 = 1'b1;
            end

            default: begin
                uses_rs2 = 1'b0;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Forwarding muxes
    // ------------------------------------------------------------------
    // Priority must be:
    //   EX > MEM > WB > regfile
    //
    // Independent if-statements are incorrect here because WB would
    // overwrite MEM and EX when all target the same register.

    always_comb begin
        rs1_fwd = rs1_raw;
        rs2_fwd = 32'd0;

        if (exe_forwarding_in.data_valid &&
            (exe_forwarding_in.address == rs1) &&
            (rs1 != 5'd0)) begin

            rs1_fwd = exe_forwarding_in.data;

        end else if (mem_forwarding_in.data_valid &&
                     (mem_forwarding_in.address == rs1) &&
                     (rs1 != 5'd0)) begin

            rs1_fwd = mem_forwarding_in.data;

        end else if (wb_forwarding_in.data_valid &&
                     (wb_forwarding_in.address == rs1) &&
                     (rs1 != 5'd0)) begin

            rs1_fwd = wb_forwarding_in.data;
        end

        if (uses_rs2) begin
            rs2_fwd = rs2_raw;

            if (exe_forwarding_in.data_valid &&
                (exe_forwarding_in.address == rs2) &&
                (rs2 != 5'd0)) begin

                rs2_fwd = exe_forwarding_in.data;

            end else if (mem_forwarding_in.data_valid &&
                         (mem_forwarding_in.address == rs2) &&
                         (rs2 != 5'd0)) begin

                rs2_fwd = mem_forwarding_in.data;

            end else if (wb_forwarding_in.data_valid &&
                         (wb_forwarding_in.address == rs2) &&
                         (rs2 != 5'd0)) begin

                rs2_fwd = wb_forwarding_in.data;
            end
        end else begin
            rs2_fwd = 32'd0;
        end
    end

    // ------------------------------------------------------------------
    // Pipeline control
    // ------------------------------------------------------------------

    assign downstream_stall = (status_backwards_in == pipeline_status::STALL);
    assign downstream_jump  = (status_backwards_in == pipeline_status::JUMP);

    assign stall = downstream_stall;
    assign flush = downstream_jump;

    // Current simplified decode-stage behavior:
    // JAL/JALR are sent backwards immediately.
    // Branch condition is assumed to be evaluated later.
    assign status_backwards_out = (jump && !downstream_stall && !downstream_jump) ?
                                  pipeline_status::JUMP :
                                  pipeline_status::READY;

    assign jump_address_backwards_out = (jump && !downstream_stall && !downstream_jump) ?
                                        (program_counter_in + imm_out) :
                                        32'd0;

    // ------------------------------------------------------------------
    // ID/EX pipeline register
    // ------------------------------------------------------------------

    always_ff @(posedge clk) begin
        if (rst || flush) begin
            rs1_data_reg_out        <= 32'd0;
            rs2_data_reg_out        <= 32'd0;
            program_counter_reg_out <= 32'd0;
            instruction_reg_out     <= instruction::NOP;
            status_forwards_out     <= pipeline_status::BUBBLE;

        end else if (!stall) begin
            rs1_data_reg_out        <= rs1_fwd;
            rs2_data_reg_out        <= rs2_fwd;
            program_counter_reg_out <= program_counter_in;
            instruction_reg_out     <= instr_packed;

            if (status_forwards_in != pipeline_status::VALID) begin
                status_forwards_out <= status_forwards_in;
            end else if (instr_packed.op == op::ILLEGAL) begin
                status_forwards_out <= pipeline_status::ILLEGAL_INSTRUCTION;
            end else if (instr_packed.op == op::ECALL) begin
                status_forwards_out <= pipeline_status::ECALL;
            end else if (instr_packed.op == op::EBREAK) begin
                status_forwards_out <= pipeline_status::EBREAK;
            end else begin
                status_forwards_out <= pipeline_status::VALID;
            end
        end
    end

endmodule