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

    instruction::t decoded_instruction;

    logic [31:0] rs1_raw;
    logic [31:0] rs2_raw;
    logic [31:0] rs1_selected;
    logic [31:0] rs2_selected;

    logic rs1_used;
    logic rs2_used;

    logic downstream_stall;
    logic downstream_jump;

    assign downstream_stall = (status_backwards_in == pipeline_status::STALL);
    assign downstream_jump  = (status_backwards_in == pipeline_status::JUMP);

    instruction_decoder instruction_decoder_inst (
        .instruction_in  (instruction_in),
        .instruction_out (decoded_instruction)
    );

    // If your module is still named "regfile", rename module and file to "register_file",
    // or change this instance name back to regfile.
    register_file register_file_inst (
        .clk           (clk),
        .rst           (rst),

        .read_address1 (decoded_instruction.rs1_address),
        .read_address2 (decoded_instruction.rs2_address),
        
        .write_enable  (wb_forwarding_in.data_valid),
        
        .write_address (wb_forwarding_in.address),
        .write_data    (wb_forwarding_in.data),
        
        .read_data1    (rs1_raw),
        .read_data2    (rs2_raw)
    );

    always_comb begin
        rs1_used = 1'b0;
        rs2_used = 1'b0;

        unique case (decoded_instruction.op)

            // R-type
            op::ADD, op::SUB, op::SLL, op::SLT, op::SLTU,
            op::XOR, op::SRL, op::SRA, op::OR, op::AND: begin
                rs1_used = 1'b1;
                rs2_used = 1'b1;
            end

            // B-type
            op::BEQ, op::BNE, op::BLT, op::BGE, op::BLTU, op::BGEU: begin
                rs1_used = 1'b1;
                rs2_used = 1'b1;
            end

            // S-type
            op::SB, op::SH, op::SW: begin
                rs1_used = 1'b1;
                rs2_used = 1'b1;
            end

            // I-type ALU
            op::ADDI, op::SLTI, op::SLTIU, op::XORI,
            op::ORI, op::ANDI, op::SLLI, op::SRLI, op::SRAI: begin
                rs1_used = 1'b1;
                rs2_used = 1'b0;
            end

            // I-type loads
            op::LB, op::LH, op::LW, op::LBU, op::LHU: begin
                rs1_used = 1'b1;
                rs2_used = 1'b0;
            end

            // JALR
            op::JALR: begin
                rs1_used = 1'b1;
                rs2_used = 1'b0;
            end

            // CSR register-source instructions
            op::CSRRW, op::CSRRS, op::CSRRC: begin
                rs1_used = 1'b1;
                rs2_used = 1'b0;
            end

            // CSR immediate-source instructions
            op::CSRRWI, op::CSRRSI, op::CSRRCI: begin
                rs1_used = 1'b0;
                rs2_used = 1'b0;
            end

            // No register-source instructions
            op::LUI, op::AUIPC, op::JAL,
            op::ECALL, op::EBREAK, op::MRET, op::WFI,
            op::FENCE, op::FENCE_I: begin
                rs1_used = 1'b0;
                rs2_used = 1'b0;
            end

            default: begin
                rs1_used = 1'b0;
                rs2_used = 1'b0;
            end
        endcase
    end

    always_comb begin
        rs1_selected = 32'd0;
        rs2_selected = 32'd0;

        if (rs1_used) begin
            rs1_selected = rs1_raw;

            if ((decoded_instruction.rs1_address != 5'd0) &&
                exe_forwarding_in.data_valid &&
                (exe_forwarding_in.address == decoded_instruction.rs1_address)) begin
                rs1_selected = exe_forwarding_in.data;
            end else if ((decoded_instruction.rs1_address != 5'd0) &&
                         mem_forwarding_in.data_valid &&
                         (mem_forwarding_in.address == decoded_instruction.rs1_address)) begin
                rs1_selected = mem_forwarding_in.data;
            end else if ((decoded_instruction.rs1_address != 5'd0) &&
                         wb_forwarding_in.data_valid &&
                         (wb_forwarding_in.address == decoded_instruction.rs1_address)) begin
                rs1_selected = wb_forwarding_in.data;
            end
        end

        if (rs2_used) begin
            rs2_selected = rs2_raw;

            if ((decoded_instruction.rs2_address != 5'd0) &&
                exe_forwarding_in.data_valid &&
                (exe_forwarding_in.address == decoded_instruction.rs2_address)) begin
                rs2_selected = exe_forwarding_in.data;
            end else if ((decoded_instruction.rs2_address != 5'd0) &&
                         mem_forwarding_in.data_valid &&
                         (mem_forwarding_in.address == decoded_instruction.rs2_address)) begin
                rs2_selected = mem_forwarding_in.data;
            end else if ((decoded_instruction.rs2_address != 5'd0) &&
                         wb_forwarding_in.data_valid &&
                         (wb_forwarding_in.address == decoded_instruction.rs2_address)) begin
                rs2_selected = wb_forwarding_in.data;
            end
        end
    end

    always_comb begin
        if (downstream_jump) begin
            status_backwards_out       = pipeline_status::JUMP;
            jump_address_backwards_out = jump_address_backwards_in;
        end else if (downstream_stall) begin
            status_backwards_out       = pipeline_status::STALL;
            jump_address_backwards_out = jump_address_backwards_in;
        end else begin
            status_backwards_out       = pipeline_status::READY;
            jump_address_backwards_out = 32'd0;
        end
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            rs1_data_reg_out         <= 32'd0;
            rs2_data_reg_out         <= 32'd0;
            program_counter_reg_out  <= 32'd0;
            instruction_reg_out      <= instruction::NOP;
            status_forwards_out      <= pipeline_status::BUBBLE;
        end else begin
            if (downstream_jump) begin
                rs1_data_reg_out         <= 32'd0;
                rs2_data_reg_out         <= 32'd0;
                program_counter_reg_out  <= 32'd0;
                instruction_reg_out      <= instruction::NOP;
                status_forwards_out      <= pipeline_status::BUBBLE;
            end else if (downstream_stall) begin
                rs1_data_reg_out         <= rs1_data_reg_out;
                rs2_data_reg_out         <= rs2_data_reg_out;
                program_counter_reg_out  <= program_counter_reg_out;
                instruction_reg_out      <= instruction_reg_out;
                status_forwards_out      <= status_forwards_out;
            end else begin
                program_counter_reg_out <= program_counter_in;

                if (status_forwards_in == pipeline_status::VALID) begin
                    rs1_data_reg_out    <= rs1_selected;
                    rs2_data_reg_out    <= rs2_selected;
                    instruction_reg_out <= decoded_instruction;

                    if (decoded_instruction.op == op::ILLEGAL) begin
                        status_forwards_out <= pipeline_status::ILLEGAL_INSTRUCTION;
                    end else if (decoded_instruction.op == op::ECALL) begin
                        status_forwards_out <= pipeline_status::ECALL;
                    end else if (decoded_instruction.op == op::EBREAK) begin
                        status_forwards_out <= pipeline_status::EBREAK;
                    end else begin
                        status_forwards_out <= pipeline_status::VALID;
                    end
                end else begin
                    rs1_data_reg_out    <= 32'd0;
                    rs2_data_reg_out    <= 32'd0;
                    instruction_reg_out <= instruction::NOP;
                    status_forwards_out <= status_forwards_in;
                end
            end
        end
    end

endmodule