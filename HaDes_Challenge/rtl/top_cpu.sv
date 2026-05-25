// top_cpu.sv – all unused ports left open (no dummy wire)
`timescale 1ns/1ps

module top_cpu (
    input logic clk,
    input logic rst,

    wishbone_interface.master memory_fetch_port,
    wishbone_interface.master memory_mem_port,

    input logic external_interrupt_in,
    input logic timer_interrupt_in
);

    import instruction::*;
    import forwarding::*;
    import pipeline_status::*;
    import constants::*;

    // ------------------------------------------------------------------
    //  Internal wires
    // ------------------------------------------------------------------
    logic [31:0] if_id_instr, if_id_pc;
    logic [31:0] id_ex_rs1, id_ex_rs2, id_ex_pc;
    instruction::t id_ex_instr;

    logic [31:0] ex_mem_source_data, ex_mem_rd_data, ex_mem_pc, ex_mem_next_pc;
    instruction::t ex_mem_instr;
    forwarding::t ex_mem_fwd;

    logic [31:0] mem_wb_source_data, mem_wb_rd_data, mem_wb_pc, mem_wb_next_pc;
    instruction::t mem_wb_instr;
    forwarding::t mem_wb_fwd;

    forwarding::t wb_fwd;

    backwards_t decode_backwards_out, execute_backwards_out, memory_backwards_out, writeback_backwards_out;
    logic [31:0] decode_jump_addr, execute_jump_addr, memory_jump_addr, writeback_jump_addr;

    logic stall, load_use_hazard;

    // ------------------------------------------------------------------
    //  Hazard detection
    // ------------------------------------------------------------------
    always_comb begin
        load_use_hazard = 1'b0;
        if (ex_mem_instr.op inside {op::LB, op::LH, op::LW, op::LBU, op::LHU}) begin
            if ((id_ex_instr.rs1_address != 0 && id_ex_instr.rs1_address == ex_mem_instr.rd_address) ||
                (id_ex_instr.rs2_address != 0 && id_ex_instr.rs2_address == ex_mem_instr.rd_address)) begin
                load_use_hazard = 1'b1;
            end
        end
    end
    assign stall = load_use_hazard;

    backwards_t decode_backwards_in;
    assign decode_backwards_in = stall ? STALL : execute_backwards_out;

    // ------------------------------------------------------------------
    //  Pipeline stages
    // ------------------------------------------------------------------
    fetch_stage fetch_inst (
        .clk, .rst,
        .wb(memory_fetch_port),
        .instruction_reg_out(if_id_instr),
        .program_counter_reg_out(if_id_pc),
        .status_forwards_out(),      // unconnected
        .status_backwards_in(decode_backwards_out),
        .jump_address_backwards_in(decode_jump_addr)
    );

    decode_stage decode_inst (
        .clk, .rst,
        .instruction_in(if_id_instr),
        .program_counter_in(if_id_pc),
        .exe_forwarding_in(ex_mem_fwd),
        .mem_forwarding_in(mem_wb_fwd),
        .wb_forwarding_in(wb_fwd),
        .rs1_data_reg_out(id_ex_rs1),
        .rs2_data_reg_out(id_ex_rs2),
        .program_counter_reg_out(id_ex_pc),
        .instruction_reg_out(id_ex_instr),
        .status_forwards_in(VALID),
        .status_forwards_out(),      // unconnected
        .status_backwards_in(decode_backwards_in),
        .status_backwards_out(decode_backwards_out),
        .jump_address_backwards_in(execute_jump_addr),
        .jump_address_backwards_out(decode_jump_addr)
    );

    execute_stage execute_inst (
        .clk, .rst,
        .rs1_data_in(id_ex_rs1),
        .rs2_data_in(id_ex_rs2),
        .instruction_in(id_ex_instr),
        .program_counter_in(id_ex_pc),
        .source_data_reg_out(ex_mem_source_data),
        .rd_data_reg_out(ex_mem_rd_data),
        .instruction_reg_out(ex_mem_instr),
        .program_counter_reg_out(ex_mem_pc),
        .next_program_counter_reg_out(ex_mem_next_pc),
        .forwarding_out(ex_mem_fwd),
        .status_forwards_in(VALID),
        .status_forwards_out(),      // unconnected
        .status_backwards_in(memory_backwards_out),
        .status_backwards_out(execute_backwards_out),
        .jump_address_backwards_in(memory_jump_addr),
        .jump_address_backwards_out(execute_jump_addr)
    );

    memory_stage memory_inst (
        .clk, .rst,
        .wb(memory_mem_port),
        .source_data_in(ex_mem_source_data),
        .rd_data_in(ex_mem_rd_data),
        .instruction_in(ex_mem_instr),
        .program_counter_in(ex_mem_pc),
        .next_program_counter_in(ex_mem_next_pc),
        .source_data_reg_out(mem_wb_source_data),
        .rd_data_reg_out(mem_wb_rd_data),
        .instruction_reg_out(mem_wb_instr),
        .program_counter_reg_out(mem_wb_pc),
        .next_program_counter_reg_out(mem_wb_next_pc),
        .forwarding_out(mem_wb_fwd),
        .status_forwards_in(VALID),
        .status_forwards_out(),      // unconnected
        .status_backwards_in(writeback_backwards_out),
        .status_backwards_out(memory_backwards_out),
        .jump_address_backwards_in(writeback_jump_addr),
        .jump_address_backwards_out(memory_jump_addr)
    );

    writeback_stage writeback_inst (
        .clk, .rst,
        .source_data_in(mem_wb_source_data),
        .rd_data_in(mem_wb_rd_data),
        .instruction_in(mem_wb_instr),
        .program_counter_in(mem_wb_pc),
        .next_program_counter_in(mem_wb_next_pc),
        .external_interrupt_in,
        .timer_interrupt_in,
        .forwarding_out(wb_fwd),
        .status_forwards_in(VALID),
        .status_backwards_out(writeback_backwards_out),
        .jump_address_backwards_out(writeback_jump_addr)
    );

endmodule