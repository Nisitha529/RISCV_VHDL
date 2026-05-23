// execute_stage.sv – with fixed rd_data_reg_out for branches/stores
`timescale 1ns/1ps

module execute_stage (
    input logic clk,
    input logic rst,

    input logic [31:0]   rs1_data_in,
    input logic [31:0]   rs2_data_in,
    input instruction::t instruction_in,
    input logic [31:0]   program_counter_in,

    output logic [31:0]   source_data_reg_out,
    output logic [31:0]   rd_data_reg_out,
    output instruction::t instruction_reg_out,
    output logic [31:0]   program_counter_reg_out,
    output logic [31:0]   next_program_counter_reg_out,
    output forwarding::t  forwarding_out,

    input  pipeline_status::forwards_t  status_forwards_in,
    output pipeline_status::forwards_t  status_forwards_out,
    input  pipeline_status::backwards_t status_backwards_in,
    output pipeline_status::backwards_t status_backwards_out,
    input  logic [31:0] jump_address_backwards_in,
    output logic [31:0] jump_address_backwards_out
);

    // ALU control decoding
    logic [3:0] alu_op;
    logic       alu_use_imm;
    logic       is_branch, is_jump, is_store, is_load;
    logic       is_jalr;

    always_comb begin
        alu_op      = 4'd0;
        alu_use_imm = 1'b0;
        is_branch   = 1'b0;
        is_jump     = 1'b0;
        is_store    = 1'b0;
        is_load     = 1'b0;
        is_jalr     = 1'b0;

        case (instruction_in.op)
            // ALU immediate
            op::ADDI:  begin alu_op = 4'd0; alu_use_imm = 1'b1; end
            op::SLTI:  begin alu_op = 4'd9; alu_use_imm = 1'b1; end
            op::SLTIU: begin alu_op = 4'd10; alu_use_imm = 1'b1; end
            op::ANDI:  begin alu_op = 4'd3; alu_use_imm = 1'b1; end
            op::ORI:   begin alu_op = 4'd4; alu_use_imm = 1'b1; end
            op::XORI:  begin alu_op = 4'd5; alu_use_imm = 1'b1; end
            op::SLLI:  begin alu_op = 4'd6; alu_use_imm = 1'b1; end
            op::SRLI:  begin alu_op = 4'd7; alu_use_imm = 1'b1; end
            op::SRAI:  begin alu_op = 4'd8; alu_use_imm = 1'b1; end

            // ALU register
            op::ADD:   alu_op = 4'd0;
            op::SUB:   alu_op = 4'd2;
            op::SLL:   alu_op = 4'd6;
            op::SLT:   alu_op = 4'd9;
            op::SLTU:  alu_op = 4'd10;
            op::XOR:   alu_op = 4'd5;
            op::SRL:   alu_op = 4'd7;
            op::SRA:   alu_op = 4'd8;
            op::OR:    alu_op = 4'd4;
            op::AND:   alu_op = 4'd3;

            // Load / Store
            op::LB, op::LH, op::LW, op::LBU, op::LHU: begin
                alu_op = 4'd0;
                alu_use_imm = 1'b1;
                is_load = 1'b1;
            end
            op::SB, op::SH, op::SW: begin
                alu_op = 4'd0;
                alu_use_imm = 1'b1;
                is_store = 1'b1;
            end

            // Branch
            op::BEQ, op::BNE, op::BLT, op::BGE, op::BLTU, op::BGEU: begin
                alu_op = 4'd2;  // subtract for comparison
                is_branch = 1'b1;
            end

            // Jump
            op::JAL: begin
                is_jump = 1'b1;
            end
            op::JALR: begin
                is_jump = 1'b1;
                is_jalr = 1'b1;
                alu_use_imm = 1'b1;
            end

            // LUI, AUIPC
            op::LUI:   begin alu_op = 4'd1; alu_use_imm = 1'b1; end
            op::AUIPC: begin alu_op = 4'd1; alu_use_imm = 1'b1; end

            default: ;
        endcase
    end

    // ALU operand selection
    logic [31:0] op1, op2;
    assign op1 = rs1_data_in;
    assign op2 = alu_use_imm ? instruction_in.immediate : rs2_data_in;

    // ALU instance
    logic [31:0] alu_result;
    logic        alu_zero;
    alu alu_inst (
        .op1   (op1),
        .op2   (op2),
        .alu_op(alu_op),
        .result(alu_result),
        .zero  (alu_zero)
    );

    // Branch condition
    logic take_branch;
    always_comb begin
        take_branch = 1'b0;
        if (is_branch) begin
            case (instruction_in.op)
                op::BEQ: take_branch = alu_zero;
                op::BNE: take_branch = !alu_zero;
                op::BLT: take_branch = (alu_result == 32'd1);  // SLT result
                op::BGE: take_branch = (alu_result == 32'd0);
                op::BLTU:take_branch = (alu_result == 32'd1);
                op::BGEU:take_branch = (alu_result == 32'd0);
                default: take_branch = 1'b0;
            endcase
        end
    end

    // Next PC
    logic [31:0] jump_target;
    assign jump_target = instruction_in.immediate;
    logic [31:0] next_pc;

    always_comb begin
        if (is_jump) begin
            if (is_jalr)
                next_pc = (rs1_data_in + jump_target) & ~32'b1;
            else
                next_pc = program_counter_in + jump_target;
        end else if (is_branch && take_branch) begin
            next_pc = program_counter_in + jump_target;
        end else begin
            next_pc = program_counter_in + 32'd4;
        end
    end

    // Output values
    assign source_data_reg_out = is_store ? rs2_data_in : 32'd0;

    // rd_data_reg_out: only written by instructions that update a register
    logic [31:0] rd_value;
    always_comb begin
        if (is_branch || is_store) begin
            rd_value = 32'd0;
        end else begin
            case (instruction_in.op)
                op::LUI:   rd_value = instruction_in.immediate;
                op::AUIPC: rd_value = program_counter_in + instruction_in.immediate;
                op::JAL:   rd_value = program_counter_in + 32'd4;
                op::JALR:  rd_value = program_counter_in + 32'd4;
                default:   rd_value = alu_result;
            endcase
        end
    end
    assign rd_data_reg_out = rd_value;

    // Pass-through
    assign instruction_reg_out   = instruction_in;
    assign program_counter_reg_out = program_counter_in;
    assign next_program_counter_reg_out = next_pc;

    // Forwarding output: only valid for instructions that write a register
    assign forwarding_out.data_valid = (!is_branch && !is_store) &&
                                       (instruction_in.rd_address != 0);
    assign forwarding_out.data = rd_value;
    assign forwarding_out.address = instruction_in.rd_address;

    // Pipeline control
    assign status_forwards_out = (instruction_in.op == op::ILLEGAL) ?
                                 pipeline_status::ILLEGAL_INSTRUCTION :
                                 pipeline_status::VALID;
    assign status_backwards_out = (is_branch && take_branch) || is_jump ?
                                  pipeline_status::JUMP : pipeline_status::READY;
    assign jump_address_backwards_out = (is_branch && take_branch) || is_jump ?
                                        next_pc : 32'd0;

endmodule