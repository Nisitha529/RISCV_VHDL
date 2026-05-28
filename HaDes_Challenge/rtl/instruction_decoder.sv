`timescale 1ns/1ps

module instruction_decoder #(
    parameter INSTRUCTION_WIDTH = 32
)(
    input  logic [INSTRUCTION_WIDTH-1:0] instruction_in,
    output instruction::t                instruction_out
);

    logic [6:0]  opcode;
    logic [4:0]  rd;
    logic [2:0]  funct3;
    logic [4:0]  rs1;
    logic [4:0]  rs2;
    logic [6:0]  funct7;
    logic [11:0] csr_addr;

    logic [2:0]  imm_type;
    logic [31:0] imm_out;

    assign opcode   = instruction_in[6:0];
    assign rd       = instruction_in[11:7];
    assign funct3   = instruction_in[14:12];
    assign rs1      = instruction_in[19:15];
    assign rs2      = instruction_in[24:20];
    assign funct7   = instruction_in[31:25];
    assign csr_addr = instruction_in[31:20];

    always_comb begin
        unique case (opcode)
            7'b0010011: imm_type = 3'd0; // OP-IMM
            7'b0000011: imm_type = 3'd0; // LOAD
            7'b1100111: imm_type = 3'd0; // JALR
            7'b1110011: imm_type = 3'd0; // SYSTEM/CSR
            7'b0100011: imm_type = 3'd1; // STORE
            7'b1100011: imm_type = 3'd2; // BRANCH
            7'b0110111: imm_type = 3'd3; // LUI
            7'b0010111: imm_type = 3'd3; // AUIPC
            7'b1101111: imm_type = 3'd4; // JAL
            default:    imm_type = 3'd7;
        endcase
    end

    immediate_generator immediate_generator_inst (
        .instr    (instruction_in),
        .imm_type (imm_type),
        .imm_out  (imm_out)
    );

    always_comb begin
        instruction_out.op          = op::ILLEGAL;
        instruction_out.rd_address  = rd;
        instruction_out.rs1_address = rs1;
        instruction_out.rs2_address = rs2;
        instruction_out.csr         = csr::t'(csr_addr);
        instruction_out.immediate   = imm_out;

        unique case (opcode)

            // U-type
            7'b0110111: begin
                instruction_out.op          = op::LUI;
                instruction_out.rs1_address = 5'd0;
                instruction_out.rs2_address = 5'd0;
            end

            7'b0010111: begin
                instruction_out.op          = op::AUIPC;
                instruction_out.rs1_address = 5'd0;
                instruction_out.rs2_address = 5'd0;
            end

            // J-type
            7'b1101111: begin
                instruction_out.op          = op::JAL;
                instruction_out.rs1_address = 5'd0;
                instruction_out.rs2_address = 5'd0;
            end

            // JALR
            7'b1100111: begin
                instruction_out.rs2_address = 5'd0;
                instruction_out.op = (funct3 == 3'b000) ? op::JALR : op::ILLEGAL;
            end

            // Branches
            7'b1100011: begin
                instruction_out.rd_address = 5'd0;

                unique case (funct3)
                    3'b000: instruction_out.op = op::BEQ;
                    3'b001: instruction_out.op = op::BNE;
                    3'b100: instruction_out.op = op::BLT;
                    3'b101: instruction_out.op = op::BGE;
                    3'b110: instruction_out.op = op::BLTU;
                    3'b111: instruction_out.op = op::BGEU;
                    default: instruction_out.op = op::ILLEGAL;
                endcase
            end

            // Loads
            7'b0000011: begin
                instruction_out.rs2_address = 5'd0;

                unique case (funct3)
                    3'b000: instruction_out.op = op::LB;
                    3'b001: instruction_out.op = op::LH;
                    3'b010: instruction_out.op = op::LW;
                    3'b100: instruction_out.op = op::LBU;
                    3'b101: instruction_out.op = op::LHU;
                    default: instruction_out.op = op::ILLEGAL;
                endcase
            end

            // Stores
            7'b0100011: begin
                instruction_out.rd_address = 5'd0;

                unique case (funct3)
                    3'b000: instruction_out.op = op::SB;
                    3'b001: instruction_out.op = op::SH;
                    3'b010: instruction_out.op = op::SW;
                    default: instruction_out.op = op::ILLEGAL;
                endcase
            end

            // I-type ALU
            7'b0010011: begin
                instruction_out.rs2_address = 5'd0;

                unique case (funct3)
                    3'b000: instruction_out.op = op::ADDI;
                    3'b010: instruction_out.op = op::SLTI;
                    3'b011: instruction_out.op = op::SLTIU;
                    3'b100: instruction_out.op = op::XORI;
                    3'b110: instruction_out.op = op::ORI;
                    3'b111: instruction_out.op = op::ANDI;

                    3'b001: begin
                        if (funct7 == 7'b0000000) begin
                            instruction_out.op        = op::SLLI;
                            instruction_out.immediate = {27'd0, rs2};
                        end else begin
                            instruction_out.op = op::ILLEGAL;
                        end
                    end

                    3'b101: begin
                        if (funct7 == 7'b0000000) begin
                            instruction_out.op        = op::SRLI;
                            instruction_out.immediate = {27'd0, rs2};
                        end else if (funct7 == 7'b0100000) begin
                            instruction_out.op        = op::SRAI;
                            instruction_out.immediate = {27'd0, rs2};
                        end else begin
                            instruction_out.op = op::ILLEGAL;
                        end
                    end

                    default: instruction_out.op = op::ILLEGAL;
                endcase
            end

            // R-type
            7'b0110011: begin
                unique case ({funct7, funct3})
                    {7'b0000000, 3'b000}: instruction_out.op = op::ADD;
                    {7'b0100000, 3'b000}: instruction_out.op = op::SUB;
                    {7'b0000000, 3'b001}: instruction_out.op = op::SLL;
                    {7'b0000000, 3'b010}: instruction_out.op = op::SLT;
                    {7'b0000000, 3'b011}: instruction_out.op = op::SLTU;
                    {7'b0000000, 3'b100}: instruction_out.op = op::XOR;
                    {7'b0000000, 3'b101}: instruction_out.op = op::SRL;
                    {7'b0100000, 3'b101}: instruction_out.op = op::SRA;
                    {7'b0000000, 3'b110}: instruction_out.op = op::OR;
                    {7'b0000000, 3'b111}: instruction_out.op = op::AND;
                    default:              instruction_out.op = op::ILLEGAL;
                endcase
            end

            // FENCE / FENCE.I
            7'b0001111: begin
                instruction_out.rd_address  = 5'd0;
                instruction_out.rs1_address = 5'd0;
                instruction_out.rs2_address = 5'd0;
                instruction_out.immediate   = 32'd0;

                unique case (funct3)
                    3'b000: instruction_out.op = op::FENCE;
                    3'b001: instruction_out.op = op::FENCE_I;
                    default: instruction_out.op = op::ILLEGAL;
                endcase
            end

            // SYSTEM / CSR
            7'b1110011: begin
                instruction_out.rs2_address = 5'd0;

                if (funct3 == 3'b000) begin
                    instruction_out.rd_address  = 5'd0;
                    instruction_out.rs1_address = 5'd0;
                    instruction_out.immediate   = 32'd0;

                    unique case (csr_addr)
                        12'h000: instruction_out.op = op::ECALL;
                        12'h001: instruction_out.op = op::EBREAK;
                        12'h302: instruction_out.op = op::MRET;
                        12'h105: instruction_out.op = op::WFI;
                        default: instruction_out.op = op::ILLEGAL;
                    endcase
                end else begin
                    unique case (funct3)
                        3'b001: instruction_out.op = op::CSRRW;
                        3'b010: instruction_out.op = op::CSRRS;
                        3'b011: instruction_out.op = op::CSRRC;

                        3'b101: begin
                            instruction_out.op          = op::CSRRWI;
                            instruction_out.rs1_address = 5'd0;
                            instruction_out.immediate   = {27'd0, rs1};
                        end

                        3'b110: begin
                            instruction_out.op          = op::CSRRSI;
                            instruction_out.rs1_address = 5'd0;
                            instruction_out.immediate   = {27'd0, rs1};
                        end

                        3'b111: begin
                            instruction_out.op          = op::CSRRCI;
                            instruction_out.rs1_address = 5'd0;
                            instruction_out.immediate   = {27'd0, rs1};
                        end

                        default: instruction_out.op = op::ILLEGAL;
                    endcase
                end
            end

            default: begin
                instruction_out.op          = op::ILLEGAL;
                instruction_out.rd_address  = 5'd0;
                instruction_out.rs1_address = 5'd0;
                instruction_out.rs2_address = 5'd0;
                instruction_out.immediate   = 32'd0;
            end
        endcase
    end

endmodule