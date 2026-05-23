// instruction_decoder.sv – fully corrected for EBREAK etc.
`timescale 1ns/1ps

module # (
  parameter INSTRUCTION_WIDTH = 32
) instruction_decoder (
    input  logic [INSTRUCTION_WIDTH - 1:0] instruction_in,
    output instruction::t                  instruction_out
);

    logic [6 : 0]                   opcode;
    logic [4 : 0]                   rd;
    logic [4 : 0]                   rs1; 
    logic [4 : 0]                   rs2;
    logic [2 : 0]                   funct3;
    logic [6 : 0]                   funct7;
    logic [3 : 0]                   alu_op;
    logic                           alu_use_imm;

    logic                           write_rd;
    logic                           write_mem;
    logic                           mem_access;
    logic [5 : 0]                   mem_width;

    logic                           jump;
    logic                           branch;

    logic [2 : 0]                   rd_data_src;
    logic [2 : 0]                   imm_type;
    logic [INSTRUCTION_WIDTH - 1:0] imm_gen;
    logic [11 : 0]                  csr_addr;

    decoder decoder_inst (
      .instr       (instruction_in),
      .opcode      (opcode),
      .rd          (rd),
      .funct3      (funct3),
      .rs1         (rs1),
      .rs2         (rs2),
      .funct7      (funct7)
    );

    control_unit ctrl_inst (
      .opcode      (opcode),
      .funct3      (funct3),
      .funct7      (funct7),
      .alu_op      (alu_op),
      .alu_use_imm (alu_use_imm),
      .write_rd    (write_rd),
      .write_mem   (write_mem),
      .mem_access  (mem_access),
      .mem_width   (mem_width),
      .jump        (jump),
      .is_branch   (branch),
      .rd_data_src (rd_data_src),
      .imm_type    (imm_type)
    );

    immediate_generator imm_inst (
      .instr       (instruction_in),
      .imm_type    (imm_type),
      .imm_out     (imm_gen)
    );

    assign csr_addr = instruction_in[31:20];

    always_comb begin
        instruction_out.op          = op::ILLEGAL;
        instruction_out.rd_address  = rd;
        instruction_out.rs1_address = rs1;
        instruction_out.rs2_address = rs2;
        instruction_out.immediate   = imm_gen;
        instruction_out.csr         = csr::t'(csr_addr);

        //  CSR / SYSTEM instructions (opcode 0x73)
        if (opcode == 7'h73) begin
            if (funct3 != 3'b000) begin
                // CSR instructions with immediate source
                case (funct3)
                    3'b001: instruction_out.op = op::CSRRW;
                    3'b010: instruction_out.op = op::CSRRS;
                    3'b011: instruction_out.op = op::CSRRC;
                    3'b101: instruction_out.op = op::CSRRWI;
                    3'b110: instruction_out.op = op::CSRRSI;
                    3'b111: instruction_out.op = op::CSRRCI;
                    
                    default: instruction_out.op = op::ILLEGAL;
                endcase
                instruction_out.immediate = {20'b0, csr_addr};
            end else begin
                // ECALL, EBREAK, MRET, WFI (funct3 = 0)
                case (csr_addr)
                    12'h000: instruction_out.op = op::ECALL;
                    12'h001: instruction_out.op = op::EBREAK;
                    12'h302: instruction_out.op = op::MRET;
                    12'h105: instruction_out.op = op::WFI;
                    default: instruction_out.op = op::ILLEGAL;
                endcase
                instruction_out.immediate = 32'd0;
            end
        end
        // ------------------------------------------------------------------
        //  OP-IMM
        // ------------------------------------------------------------------
        else if (opcode == 7'b0010011) begin
            case (funct3)
                3'b000: instruction_out.op = op::ADDI;
                3'b001: instruction_out.op = op::SLLI;
                3'b010: instruction_out.op = op::SLTI;
                3'b011: instruction_out.op = op::SLTIU;
                3'b100: instruction_out.op = op::XORI;
                3'b101: instruction_out.op = (funct7 == 7'b0000000) ? op::SRLI : op::SRAI;
                3'b110: instruction_out.op = op::ORI;
                3'b111: instruction_out.op = op::ANDI;
                default: instruction_out.op = op::ILLEGAL;
            endcase
            // Override immediate for shift instructions
            if (funct3 == 3'b001 || funct3 == 3'b101) begin
                instruction_out.immediate = {27'b0, rs2};
            end
        end
        // ------------------------------------------------------------------
        //  OP (R-type)
        // ------------------------------------------------------------------
        else if (opcode == 7'b0110011) begin
            case (funct3)
                3'b000: instruction_out.op = (funct7 == 7'b0000000) ? op::ADD : op::SUB;
                3'b001: instruction_out.op = op::SLL;
                3'b010: instruction_out.op = op::SLT;
                3'b011: instruction_out.op = op::SLTU;
                3'b100: instruction_out.op = op::XOR;
                3'b101: instruction_out.op = (funct7 == 7'b0000000) ? op::SRL : op::SRA;
                3'b110: instruction_out.op = op::OR;
                3'b111: instruction_out.op = op::AND;
                default: instruction_out.op = op::ILLEGAL;
            endcase
        end
        // ------------------------------------------------------------------
        //  LOAD
        // ------------------------------------------------------------------
        else if (opcode == 7'b0000011) begin
            case (funct3)
                3'b000: instruction_out.op = op::LB;
                3'b001: instruction_out.op = op::LH;
                3'b010: instruction_out.op = op::LW;
                3'b100: instruction_out.op = op::LBU;
                3'b101: instruction_out.op = op::LHU;
                default: instruction_out.op = op::ILLEGAL;
            endcase
        end
        // ------------------------------------------------------------------
        //  STORE
        // ------------------------------------------------------------------
        else if (opcode == 7'b0100011) begin
            case (funct3)
                3'b000: instruction_out.op = op::SB;
                3'b001: instruction_out.op = op::SH;
                3'b010: instruction_out.op = op::SW;
                default: instruction_out.op = op::ILLEGAL;
            endcase
        end
        // ------------------------------------------------------------------
        //  BRANCH
        // ------------------------------------------------------------------
        else if (opcode == 7'b1100011) begin
            case (funct3)
                3'b000: instruction_out.op = op::BEQ;
                3'b001: instruction_out.op = op::BNE;
                3'b100: instruction_out.op = op::BLT;
                3'b101: instruction_out.op = op::BGE;
                3'b110: instruction_out.op = op::BLTU;
                3'b111: instruction_out.op = op::BGEU;
                default: instruction_out.op = op::ILLEGAL;
            endcase
        end
        // ------------------------------------------------------------------
        //  LUI, AUIPC, JAL, JALR
        // ------------------------------------------------------------------
        else if (opcode == 7'b0110111) instruction_out.op = op::LUI;
        else if (opcode == 7'b0010111) instruction_out.op = op::AUIPC;
        else if (opcode == 7'b1101111) instruction_out.op = op::JAL;
        else if (opcode == 7'b1100111) begin
            if (funct3 == 3'b000) instruction_out.op = op::JALR;
            else instruction_out.op = op::ILLEGAL;
        end
        // ------------------------------------------------------------------
        //  FENCE / FENCE.I
        // ------------------------------------------------------------------
        else if (opcode == 7'b0001111) begin
            if (funct3 == 3'b000)
                instruction_out.op = op::FENCE;
            else if (funct3 == 3'b001)
                instruction_out.op = op::FENCE_I;
            else
                instruction_out.op = op::ILLEGAL;
        end
        // ------------------------------------------------------------------
        //  Default illegal
        // ------------------------------------------------------------------
        else begin
            instruction_out.op = op::ILLEGAL;
        end
    end

endmodule