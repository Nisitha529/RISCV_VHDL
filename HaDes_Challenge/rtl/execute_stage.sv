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

    logic downstream_stall;
    logic downstream_jump;

    assign downstream_stall = (status_backwards_in == pipeline_status::STALL);
    assign downstream_jump  = (status_backwards_in == pipeline_status::JUMP);

    logic [3:0] alu_op;
    logic       alu_use_imm;
    logic       is_branch;
    logic       is_jump;
    logic       is_jalr;
    logic       is_load;
    logic       is_store;
    logic       is_fence_i;
    logic       is_system_or_csr;

    always_comb begin
        alu_op           = 4'd0;
        alu_use_imm      = 1'b0;
        is_branch        = 1'b0;
        is_jump          = 1'b0;
        is_jalr          = 1'b0;
        is_load          = 1'b0;
        is_store         = 1'b0;
        is_fence_i       = 1'b0;
        is_system_or_csr = 1'b0;

        unique case (instruction_in.op)

            op::ADDI:  begin alu_op = 4'd0;  alu_use_imm = 1'b1; end
            op::SLTI:  begin alu_op = 4'd9;  alu_use_imm = 1'b1; end
            op::SLTIU: begin alu_op = 4'd10; alu_use_imm = 1'b1; end
            op::ANDI:  begin alu_op = 4'd3;  alu_use_imm = 1'b1; end
            op::ORI:   begin alu_op = 4'd4;  alu_use_imm = 1'b1; end
            op::XORI:  begin alu_op = 4'd5;  alu_use_imm = 1'b1; end
            op::SLLI:  begin alu_op = 4'd6;  alu_use_imm = 1'b1; end
            op::SRLI:  begin alu_op = 4'd7;  alu_use_imm = 1'b1; end
            op::SRAI:  begin alu_op = 4'd8;  alu_use_imm = 1'b1; end

            op::ADD:   begin alu_op = 4'd0;  end
            op::SUB:   begin alu_op = 4'd2;  end
            op::SLL:   begin alu_op = 4'd6;  end
            op::SLT:   begin alu_op = 4'd9;  end
            op::SLTU:  begin alu_op = 4'd10; end
            op::XOR:   begin alu_op = 4'd5;  end
            op::SRL:   begin alu_op = 4'd7;  end
            op::SRA:   begin alu_op = 4'd8;  end
            op::OR:    begin alu_op = 4'd4;  end
            op::AND:   begin alu_op = 4'd3;  end

            op::LB, op::LH, op::LW, op::LBU, op::LHU: begin
                alu_op      = 4'd0;
                alu_use_imm = 1'b1;
                is_load     = 1'b1;
            end

            op::SB, op::SH, op::SW: begin
                alu_op      = 4'd0;
                alu_use_imm = 1'b1;
                is_store    = 1'b1;
            end

            op::BEQ, op::BNE: begin
                alu_op    = 4'd2;
                is_branch = 1'b1;
            end

            op::BLT, op::BGE: begin
                alu_op    = 4'd9;
                is_branch = 1'b1;
            end

            op::BLTU, op::BGEU: begin
                alu_op    = 4'd10;
                is_branch = 1'b1;
            end

            op::JAL: begin
                is_jump = 1'b1;
            end

            op::JALR: begin
                is_jump     = 1'b1;
                is_jalr     = 1'b1;
                alu_use_imm = 1'b1;
            end

            op::LUI: begin
                alu_op      = 4'd1;
                alu_use_imm = 1'b1;
            end

            op::AUIPC: begin
                alu_op      = 4'd1;
                alu_use_imm = 1'b1;
            end

            op::FENCE_I: begin
                is_fence_i = 1'b1;
            end

            op::CSRRW, op::CSRRS, op::CSRRC,
            op::CSRRWI, op::CSRRSI, op::CSRRCI,
            op::ECALL, op::EBREAK, op::MRET, op::WFI,
            op::FENCE: begin
                is_system_or_csr = 1'b1;
            end

            default: begin
                alu_op = 4'd0;
            end
        endcase
    end

    logic [31:0] alu_op1;
    logic [31:0] alu_op2;

    assign alu_op1 = rs1_data_in;
    assign alu_op2 = alu_use_imm ? instruction_in.immediate : rs2_data_in;

    logic [31:0] alu_result;
    logic        alu_zero;

    alu alu_inst (
        .op1    (alu_op1),
        .op2    (alu_op2),
        .alu_op (alu_op),
        .result (alu_result),
        .zero   (alu_zero)
    );

    logic take_branch;

    always_comb begin
        take_branch = 1'b0;

        unique case (instruction_in.op)
            op::BEQ:  take_branch = (rs1_data_in == rs2_data_in);
            op::BNE:  take_branch = (rs1_data_in != rs2_data_in);
            op::BLT:  take_branch = ($signed(rs1_data_in) < $signed(rs2_data_in));
            op::BGE:  take_branch = ($signed(rs1_data_in) >= $signed(rs2_data_in));
            op::BLTU: take_branch = (rs1_data_in < rs2_data_in);
            op::BGEU: take_branch = (rs1_data_in >= rs2_data_in);
            default:  take_branch = 1'b0;
        endcase
    end

    logic [31:0] branch_target;
    logic [31:0] jump_target;
    logic [31:0] next_pc_comb;

    assign branch_target = program_counter_in + instruction_in.immediate;
    assign jump_target   = is_jalr ? ((rs1_data_in + instruction_in.immediate) & 32'hFFFF_FFFE)
                                   : (program_counter_in + instruction_in.immediate);

    always_comb begin
        if (is_fence_i) begin
            next_pc_comb = program_counter_in + 32'd4;
        end else if (is_jump) begin
            next_pc_comb = jump_target;
        end else if (is_branch && take_branch) begin
            next_pc_comb = branch_target;
        end else begin
            next_pc_comb = program_counter_in + 32'd4;
        end
    end

    logic branch_or_jump_redirect;
    assign branch_or_jump_redirect = is_fence_i || is_jump || (is_branch && take_branch);

    logic fetch_misaligned;

    always_comb begin
        fetch_misaligned = 1'b0;

        if ((is_jump || (is_branch && take_branch)) &&
            (next_pc_comb[1:0] != 2'b00)) begin
            fetch_misaligned = 1'b1;
        end
    end

    logic [31:0] rd_value_comb;

    always_comb begin
        unique case (instruction_in.op)
            op::LUI:   rd_value_comb = instruction_in.immediate;
            op::AUIPC: rd_value_comb = program_counter_in + instruction_in.immediate;
            op::JAL:   rd_value_comb = program_counter_in + 32'd4;
            op::JALR:  rd_value_comb = program_counter_in + 32'd4;

            op::LB, op::LH, op::LW, op::LBU, op::LHU,
            op::SB, op::SH, op::SW:
                rd_value_comb = alu_result;

            op::FENCE, op::FENCE_I,
            op::WFI,
            op::CSRRW, op::CSRRS, op::CSRRC,
            op::CSRRWI, op::CSRRSI, op::CSRRCI,
            op::ECALL, op::EBREAK, op::MRET:
                rd_value_comb = 32'd0;

            default:
                rd_value_comb = is_branch ? 32'd0 : alu_result;
        endcase
    end

    logic [31:0] source_data_comb;

    always_comb begin
        if (is_store) begin
            source_data_comb = rs2_data_in;
        end else if (instruction_in.op inside {op::CSRRW, op::CSRRS, op::CSRRC}) begin
            source_data_comb = rs1_data_in;
        end else if (instruction_in.op inside {op::CSRRWI, op::CSRRSI, op::CSRRCI}) begin
            source_data_comb = instruction_in.immediate;
        end else begin
            source_data_comb = 32'd0;
        end
    end

    logic forward_valid_comb;

    always_comb begin
        forward_valid_comb = 1'b0;

        if (status_forwards_in == pipeline_status::VALID &&
            instruction_in.rd_address != 5'd0) begin

            unique case (instruction_in.op)
                op::ADD, op::SUB, op::SLL, op::SLT, op::SLTU,
                op::XOR, op::SRL, op::SRA, op::OR, op::AND,
                op::ADDI, op::SLTI, op::SLTIU, op::XORI,
                op::ORI, op::ANDI, op::SLLI, op::SRLI, op::SRAI,
                op::LUI, op::AUIPC,
                op::JAL, op::JALR: begin
                    forward_valid_comb = 1'b1;
                end

                default: begin
                    forward_valid_comb = 1'b0;
                end
            endcase
        end
    end

    pipeline_status::forwards_t status_forward_comb;

    always_comb begin
        if (status_forwards_in != pipeline_status::VALID) begin
            status_forward_comb = status_forwards_in;
        end else if (instruction_in.op == op::ILLEGAL) begin
            status_forward_comb = pipeline_status::ILLEGAL_INSTRUCTION;
        end else if (fetch_misaligned) begin
            status_forward_comb = pipeline_status::FETCH_MISALIGNED;
        end else begin
            status_forward_comb = pipeline_status::VALID;
        end
    end

    pipeline_status::backwards_t status_backwards_comb;
    logic [31:0] jump_address_comb;

    always_comb begin
        status_backwards_comb = pipeline_status::READY;
        jump_address_comb     = 32'd0;

        if (downstream_jump) begin
            status_backwards_comb = pipeline_status::JUMP;
            jump_address_comb     = jump_address_backwards_in;
        end else if (downstream_stall) begin
            status_backwards_comb = pipeline_status::STALL;
            jump_address_comb     = jump_address_backwards_in;
        end else if ((status_forwards_in == pipeline_status::VALID) &&
                     branch_or_jump_redirect &&
                     !fetch_misaligned) begin
            status_backwards_comb = pipeline_status::JUMP;
            jump_address_comb     = next_pc_comb;
        end
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            source_data_reg_out          <= 32'd0;
            rd_data_reg_out              <= 32'd0;
            instruction_reg_out          <= instruction::NOP;
            program_counter_reg_out      <= 32'd0;
            next_program_counter_reg_out <= 32'd0;

            forwarding_out.data_valid    <= 1'b0;
            forwarding_out.data          <= 32'd0;
            forwarding_out.address       <= 5'd0;

            status_forwards_out          <= pipeline_status::BUBBLE;
            status_backwards_out         <= pipeline_status::READY;
            jump_address_backwards_out   <= 32'd0;
        end else begin
            if (downstream_jump) begin
                source_data_reg_out          <= 32'd0;
                rd_data_reg_out              <= 32'd0;
                instruction_reg_out          <= instruction::NOP;
                program_counter_reg_out      <= 32'd0;
                next_program_counter_reg_out <= 32'd0;

                forwarding_out.data_valid    <= 1'b0;
                forwarding_out.data          <= 32'd0;
                forwarding_out.address       <= 5'd0;

                status_forwards_out          <= pipeline_status::BUBBLE;
                status_backwards_out         <= pipeline_status::JUMP;
                jump_address_backwards_out   <= jump_address_backwards_in;
            end else if (downstream_stall) begin
                source_data_reg_out          <= source_data_reg_out;
                rd_data_reg_out              <= rd_data_reg_out;
                instruction_reg_out          <= instruction_reg_out;
                program_counter_reg_out      <= program_counter_reg_out;
                next_program_counter_reg_out <= next_program_counter_reg_out;

                forwarding_out               <= forwarding_out;

                status_forwards_out          <= status_forwards_out;
                status_backwards_out         <= pipeline_status::STALL;
                jump_address_backwards_out   <= jump_address_backwards_in;
            end else begin
                if (status_forwards_in == pipeline_status::VALID) begin
                    source_data_reg_out          <= source_data_comb;
                    rd_data_reg_out              <= rd_value_comb;
                    instruction_reg_out          <= instruction_in;
                    program_counter_reg_out      <= program_counter_in;
                    next_program_counter_reg_out <= next_pc_comb;

                    forwarding_out.data_valid    <= forward_valid_comb;
                    forwarding_out.data          <= rd_value_comb;
                    forwarding_out.address       <= instruction_in.rd_address;

                    status_forwards_out          <= status_forward_comb;
                    status_backwards_out         <= status_backwards_comb;
                    jump_address_backwards_out   <= jump_address_comb;
                end else begin
                    source_data_reg_out          <= 32'd0;
                    rd_data_reg_out              <= 32'd0;
                    instruction_reg_out          <= instruction::NOP;
                    program_counter_reg_out      <= program_counter_in;
                    next_program_counter_reg_out <= program_counter_in + 32'd4;

                    forwarding_out.data_valid    <= 1'b0;
                    forwarding_out.data          <= 32'd0;
                    forwarding_out.address       <= 5'd0;

                    status_forwards_out          <= status_forwards_in;
                    status_backwards_out         <= status_backwards_comb;
                    jump_address_backwards_out   <= jump_address_comb;
                end
            end
        end
    end

endmodule