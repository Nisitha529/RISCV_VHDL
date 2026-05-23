// writeback_stage.sv – compliant with HaDes‑V reference
`timescale 1ns/1ps

module writeback_stage (
    input logic clk,
    input logic rst,

    // Inputs from memory stage
    input logic [31:0]   source_data_in,        // not used in writeback (stores already handled)
    input logic [31:0]   rd_data_in,            // value to write to register file
    input instruction::t instruction_in,
    input logic [31:0]   program_counter_in,
    input logic [31:0]   next_program_counter_in,

    // Interrupt signals (ignored in this simple implementation)
    input logic external_interrupt_in,
    input logic timer_interrupt_in,

    // Outputs to decode stage (via pipeline)
    output forwarding::t  forwarding_out,

    // Pipeline control
    input  pipeline_status::forwards_t  status_forwards_in,
    output pipeline_status::backwards_t status_backwards_out,
    output logic [31:0] jump_address_backwards_out
);

    // ------------------------------------------------------------------
    //  Determine if this instruction writes a register
    // ------------------------------------------------------------------
    logic writes_rd;
    always_comb begin
        writes_rd = 1'b0;
        case (instruction_in.op)
            // Instructions that write a register
            op::LUI, op::AUIPC, op::JAL, op::JALR,
            op::LB, op::LH, op::LW, op::LBU, op::LHU,
            op::ADDI, op::SLTI, op::SLTIU, op::ANDI, op::ORI, op::XORI,
            op::SLLI, op::SRLI, op::SRAI,
            op::ADD, op::SUB, op::SLL, op::SLT, op::SLTU,
            op::XOR, op::SRL, op::SRA, op::OR, op::AND,
            op::CSRRW, op::CSRRS, op::CSRRC, op::CSRRWI, op::CSRRSI, op::CSRRCI:
                writes_rd = 1'b1;
            default: writes_rd = 1'b0;
        endcase
    end

    // ------------------------------------------------------------------
    //  Forwarding output (to decode stage)
    // ------------------------------------------------------------------
    assign forwarding_out.data_valid = writes_rd && (instruction_in.rd_address != 0);
    assign forwarding_out.data       = rd_data_in;
    assign forwarding_out.address    = instruction_in.rd_address;

    // ------------------------------------------------------------------
    //  Pipeline control – no jumps generated at this stage
    // ------------------------------------------------------------------
    assign status_backwards_out      = pipeline_status::READY;
    assign jump_address_backwards_out = 32'd0;

    // Note: The register file is not written directly by this stage.
    // The decode stage uses wb_forwarding_in (which comes from this
    // stage via the MEM/WB pipeline register) to update the register file.

endmodule