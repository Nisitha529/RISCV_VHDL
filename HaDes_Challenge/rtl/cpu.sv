// cpu.sv
`timescale 1ns/1ps

module cpu (
    input logic clk,
    input logic rst,

    wishbone_interface.master memory_fetch_port,
    wishbone_interface.master memory_mem_port,

    input logic external_interrupt_in,
    input logic timer_interrupt_in
);

    // ------------------------------------------------------------------
    // IF/ID wires
    // ------------------------------------------------------------------
    logic [31:0] if_id_instruction;
    logic [31:0] if_id_pc;
    pipeline_status::forwards_t if_id_status;

    // ------------------------------------------------------------------
    // ID/EX wires
    // ------------------------------------------------------------------
    logic [31:0] id_ex_rs1_data;
    logic [31:0] id_ex_rs2_data;
    logic [31:0] id_ex_pc;
    instruction::t id_ex_instruction;
    pipeline_status::forwards_t id_ex_status;

    // ------------------------------------------------------------------
    // EX/MEM wires
    // ------------------------------------------------------------------
    logic [31:0] ex_mem_source_data;
    logic [31:0] ex_mem_rd_data;
    instruction::t ex_mem_instruction;
    logic [31:0] ex_mem_pc;
    logic [31:0] ex_mem_next_pc;
    forwarding::t ex_mem_forwarding;
    pipeline_status::forwards_t ex_mem_status;

    // ------------------------------------------------------------------
    // MEM/WB wires
    // ------------------------------------------------------------------
    logic [31:0] mem_wb_source_data;
    logic [31:0] mem_wb_rd_data;
    instruction::t mem_wb_instruction;
    logic [31:0] mem_wb_pc;
    logic [31:0] mem_wb_next_pc;
    forwarding::t mem_wb_forwarding;
    pipeline_status::forwards_t mem_wb_status;

    // ------------------------------------------------------------------
    // WB forwarding
    // ------------------------------------------------------------------
    forwarding::t wb_forwarding;

    // ------------------------------------------------------------------
    // Backward outputs from stages
    // ------------------------------------------------------------------
    pipeline_status::backwards_t decode_backwards_out;
    logic [31:0] decode_jump_address_out;

    pipeline_status::backwards_t execute_backwards_out;
    logic [31:0] execute_jump_address_out;

    pipeline_status::backwards_t memory_backwards_out;
    logic [31:0] memory_jump_address_out;

    pipeline_status::backwards_t writeback_backwards_out;
    logic [31:0] writeback_jump_address_out;

    // ------------------------------------------------------------------
    // Backward inputs to stages
    // ------------------------------------------------------------------
    pipeline_status::backwards_t fetch_backwards_in;
    logic [31:0] fetch_jump_address_in;

    pipeline_status::backwards_t decode_backwards_in;
    logic [31:0] decode_jump_address_in;

    pipeline_status::backwards_t execute_backwards_in;
    logic [31:0] execute_jump_address_in;

    pipeline_status::backwards_t memory_backwards_in;
    logic [31:0] memory_jump_address_in;

    // ------------------------------------------------------------------
    // Decode IF/ID instruction for top-level hazard detection
    // ------------------------------------------------------------------
    instruction::t if_id_decoded_instruction;

    instruction_decoder hazard_instruction_decoder (
        .instruction_in  (if_id_instruction),
        .instruction_out (if_id_decoded_instruction)
    );

    // ------------------------------------------------------------------
    // Source-operand usage for instruction currently in IF/ID
    // ------------------------------------------------------------------
    logic id_rs1_used;
    logic id_rs2_used;

    always_comb begin
        id_rs1_used = 1'b0;
        id_rs2_used = 1'b0;

        unique case (if_id_decoded_instruction.op)

            // R-type
            op::ADD, op::SUB, op::SLL, op::SLT, op::SLTU,
            op::XOR, op::SRL, op::SRA, op::OR, op::AND: begin
                id_rs1_used = 1'b1;
                id_rs2_used = 1'b1;
            end

            // Branches
            op::BEQ, op::BNE, op::BLT, op::BGE, op::BLTU, op::BGEU: begin
                id_rs1_used = 1'b1;
                id_rs2_used = 1'b1;
            end

            // Stores
            op::SB, op::SH, op::SW: begin
                id_rs1_used = 1'b1;
                id_rs2_used = 1'b1;
            end

            // I-type arithmetic
            op::ADDI, op::SLTI, op::SLTIU,
            op::XORI, op::ORI, op::ANDI,
            op::SLLI, op::SRLI, op::SRAI: begin
                id_rs1_used = 1'b1;
                id_rs2_used = 1'b0;
            end

            // Loads
            op::LB, op::LH, op::LW, op::LBU, op::LHU: begin
                id_rs1_used = 1'b1;
                id_rs2_used = 1'b0;
            end

            // JALR
            op::JALR: begin
                id_rs1_used = 1'b1;
                id_rs2_used = 1'b0;
            end

            // CSR register-source instructions
            op::CSRRW, op::CSRRS, op::CSRRC: begin
                id_rs1_used = 1'b1;
                id_rs2_used = 1'b0;
            end

            // CSR immediate-source instructions do not read integer rs1
            op::CSRRWI, op::CSRRSI, op::CSRRCI: begin
                id_rs1_used = 1'b0;
                id_rs2_used = 1'b0;
            end

            default: begin
                id_rs1_used = 1'b0;
                id_rs2_used = 1'b0;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Late-result producer classification
    //
    // Loads produce final rd data after memory.
    // CSR instructions produce old CSR value in writeback.
    // ------------------------------------------------------------------
    function automatic logic is_load_op(input op::t op_i);
        begin
            unique case (op_i)
                op::LB, op::LH, op::LW, op::LBU, op::LHU: begin
                    is_load_op = 1'b1;
                end

                default: begin
                    is_load_op = 1'b0;
                end
            endcase
        end
    endfunction

    function automatic logic is_csr_op(input op::t op_i);
        begin
            unique case (op_i)
                op::CSRRW,
                op::CSRRS,
                op::CSRRC,
                op::CSRRWI,
                op::CSRRSI,
                op::CSRRCI: begin
                    is_csr_op = 1'b1;
                end

                default: begin
                    is_csr_op = 1'b0;
                end
            endcase
        end
    endfunction

    function automatic logic is_late_rd_producer(input instruction::t instr);
        begin
            is_late_rd_producer = is_load_op(instr.op) || is_csr_op(instr.op);
        end
    endfunction

    function automatic logic source_match_late_producer(
        input instruction::t producer_instr,
        input logic          producer_valid,
        input instruction::t consumer_instr,
        input logic          consumer_uses_rs1,
        input logic          consumer_uses_rs2
    );
        begin
            source_match_late_producer = 1'b0;

            if (producer_valid &&
                is_late_rd_producer(producer_instr) &&
                (producer_instr.rd_address != 5'd0)) begin

                if (consumer_uses_rs1 &&
                    (consumer_instr.rs1_address == producer_instr.rd_address)) begin
                    source_match_late_producer = 1'b1;
                end

                if (consumer_uses_rs2 &&
                    (consumer_instr.rs2_address == producer_instr.rd_address)) begin
                    source_match_late_producer = 1'b1;
                end
            end
        end
    endfunction

    // ------------------------------------------------------------------
    // Late-result-use hazard detection
    // ------------------------------------------------------------------
    logic late_result_use_hazard_raw;

    always_comb begin
        late_result_use_hazard_raw = 1'b0;

        if (if_id_status == pipeline_status::VALID) begin

            if (source_match_late_producer(
                    id_ex_instruction,
                    (id_ex_status == pipeline_status::VALID),
                    if_id_decoded_instruction,
                    id_rs1_used,
                    id_rs2_used
                )) begin
                late_result_use_hazard_raw = 1'b1;
            end

            if (source_match_late_producer(
                    ex_mem_instruction,
                    (ex_mem_status == pipeline_status::VALID),
                    if_id_decoded_instruction,
                    id_rs1_used,
                    id_rs2_used
                )) begin
                late_result_use_hazard_raw = 1'b1;
            end

            if (source_match_late_producer(
                    mem_wb_instruction,
                    (mem_wb_status == pipeline_status::VALID),
                    if_id_decoded_instruction,
                    id_rs1_used,
                    id_rs2_used
                )) begin
                late_result_use_hazard_raw = 1'b1;
            end
        end
    end

    // ------------------------------------------------------------------
    // Redirect sources
    //
    // Execute redirect:
    //   Branch/JAL/JALR redirect from execute. Flush fetch/decode only.
    //
    // Writeback redirect:
    //   Trap/MRET redirect from writeback. Flush fetch/decode/execute/memory.
    // ------------------------------------------------------------------
    logic wb_redirect;
    logic ex_redirect;

    logic [31:0] wb_redirect_addr;
    logic [31:0] ex_redirect_addr;

    assign wb_redirect = (writeback_backwards_out == pipeline_status::JUMP);
    assign ex_redirect = (execute_backwards_out   == pipeline_status::JUMP);

    assign wb_redirect_addr = writeback_jump_address_out;
    assign ex_redirect_addr = execute_jump_address_out;

    logic any_redirect;

    assign any_redirect = wb_redirect || ex_redirect;

    // ------------------------------------------------------------------
    // Stall sources
    //
    // memory_backwards_out stalls only younger/upstream stages.
    // It must not feed back into memory_backwards_in.
    // ------------------------------------------------------------------
    logic memory_busy_stall;
    logic late_result_use_hazard;

    assign memory_busy_stall      = (memory_backwards_out == pipeline_status::STALL);
    assign late_result_use_hazard = late_result_use_hazard_raw && !any_redirect;

    // ------------------------------------------------------------------
    // Memory-stage backward input
    //
    // Critical:
    //   memory_backwards_in is driven only from writeback redirect.
    //   This prevents a memory_backwards_out -> memory_backwards_in loop.
    // ------------------------------------------------------------------
    assign memory_backwards_in =
        wb_redirect ? pipeline_status::JUMP : pipeline_status::READY;

    assign memory_jump_address_in =
        wb_redirect ? wb_redirect_addr : 32'd0;

    // ------------------------------------------------------------------
    // Decode input status
    //
    // During a late-result hazard, fetch is held and decode receives BUBBLE.
    // ------------------------------------------------------------------
    pipeline_status::forwards_t decode_status_in;

    assign decode_status_in =
        late_result_use_hazard ? pipeline_status::BUBBLE : if_id_status;

    // ------------------------------------------------------------------
    // Backward input generation for fetch/decode/execute
    //
    // Priority:
    //   1. WB redirect: flush fetch/decode/execute
    //   2. EX redirect: flush fetch/decode only
    //   3. memory busy: stall fetch/decode/execute
    //   4. late-result-use: stall fetch only; decode gets BUBBLE
    // ------------------------------------------------------------------
    always_comb begin
        fetch_backwards_in      = pipeline_status::READY;
        fetch_jump_address_in   = 32'd0;

        decode_backwards_in     = pipeline_status::READY;
        decode_jump_address_in  = 32'd0;

        execute_backwards_in    = pipeline_status::READY;
        execute_jump_address_in = 32'd0;

        if (wb_redirect) begin
            fetch_backwards_in      = pipeline_status::JUMP;
            fetch_jump_address_in   = wb_redirect_addr;

            decode_backwards_in     = pipeline_status::JUMP;
            decode_jump_address_in  = wb_redirect_addr;

            execute_backwards_in    = pipeline_status::JUMP;
            execute_jump_address_in = wb_redirect_addr;
        end else if (ex_redirect) begin
            fetch_backwards_in      = pipeline_status::JUMP;
            fetch_jump_address_in   = ex_redirect_addr;

            decode_backwards_in     = pipeline_status::JUMP;
            decode_jump_address_in  = ex_redirect_addr;

            // Execute must not receive its own redirect.
            execute_backwards_in    = pipeline_status::READY;
            execute_jump_address_in = 32'd0;
        end else if (memory_busy_stall) begin
            fetch_backwards_in      = pipeline_status::STALL;
            fetch_jump_address_in   = 32'd0;

            decode_backwards_in     = pipeline_status::STALL;
            decode_jump_address_in  = 32'd0;

            execute_backwards_in    = pipeline_status::STALL;
            execute_jump_address_in = 32'd0;
        end else if (late_result_use_hazard) begin
            fetch_backwards_in      = pipeline_status::STALL;
            fetch_jump_address_in   = 32'd0;

            decode_backwards_in     = pipeline_status::READY;
            decode_jump_address_in  = 32'd0;

            execute_backwards_in    = pipeline_status::READY;
            execute_jump_address_in = 32'd0;
        end
    end

    // ------------------------------------------------------------------
    // Fetch stage
    // ------------------------------------------------------------------
    fetch_stage fetch_inst (
        .clk                       (clk),
        .rst                       (rst),

        .wb                        (memory_fetch_port),

        .instruction_reg_out       (if_id_instruction),
        .program_counter_reg_out   (if_id_pc),

        .status_forwards_out       (if_id_status),
        .status_backwards_in       (fetch_backwards_in),
        .jump_address_backwards_in (fetch_jump_address_in)
    );

    // ------------------------------------------------------------------
    // Decode stage
    // ------------------------------------------------------------------
    decode_stage decode_inst (
        .clk                        (clk),
        .rst                        (rst),

        .instruction_in             (if_id_instruction),
        .program_counter_in         (if_id_pc),

        .exe_forwarding_in          (ex_mem_forwarding),
        .mem_forwarding_in          (mem_wb_forwarding),
        .wb_forwarding_in           (wb_forwarding),

        .rs1_data_reg_out           (id_ex_rs1_data),
        .rs2_data_reg_out           (id_ex_rs2_data),
        .program_counter_reg_out    (id_ex_pc),
        .instruction_reg_out        (id_ex_instruction),

        .status_forwards_in         (decode_status_in),
        .status_forwards_out        (id_ex_status),

        .status_backwards_in        (decode_backwards_in),
        .status_backwards_out       (decode_backwards_out),

        .jump_address_backwards_in  (decode_jump_address_in),
        .jump_address_backwards_out (decode_jump_address_out)
    );

    // ------------------------------------------------------------------
    // Execute stage
    // ------------------------------------------------------------------
    execute_stage execute_inst (
        .clk                          (clk),
        .rst                          (rst),

        .rs1_data_in                  (id_ex_rs1_data),
        .rs2_data_in                  (id_ex_rs2_data),
        .instruction_in               (id_ex_instruction),
        .program_counter_in           (id_ex_pc),

        .source_data_reg_out          (ex_mem_source_data),
        .rd_data_reg_out              (ex_mem_rd_data),
        .instruction_reg_out          (ex_mem_instruction),
        .program_counter_reg_out      (ex_mem_pc),
        .next_program_counter_reg_out (ex_mem_next_pc),
        .forwarding_out               (ex_mem_forwarding),

        .status_forwards_in           (id_ex_status),
        .status_forwards_out          (ex_mem_status),

        .status_backwards_in          (execute_backwards_in),
        .status_backwards_out         (execute_backwards_out),

        .jump_address_backwards_in    (execute_jump_address_in),
        .jump_address_backwards_out   (execute_jump_address_out)
    );

    // ------------------------------------------------------------------
    // Memory stage
    // ------------------------------------------------------------------
    memory_stage memory_inst (
        .clk                          (clk),
        .rst                          (rst),

        .wb                           (memory_mem_port),

        .source_data_in               (ex_mem_source_data),
        .rd_data_in                   (ex_mem_rd_data),
        .instruction_in               (ex_mem_instruction),
        .program_counter_in           (ex_mem_pc),
        .next_program_counter_in      (ex_mem_next_pc),

        .source_data_reg_out          (mem_wb_source_data),
        .rd_data_reg_out              (mem_wb_rd_data),
        .instruction_reg_out          (mem_wb_instruction),
        .program_counter_reg_out      (mem_wb_pc),
        .next_program_counter_reg_out (mem_wb_next_pc),
        .forwarding_out               (mem_wb_forwarding),

        .status_forwards_in           (ex_mem_status),
        .status_forwards_out          (mem_wb_status),

        .status_backwards_in          (memory_backwards_in),
        .status_backwards_out         (memory_backwards_out),

        .jump_address_backwards_in    (memory_jump_address_in),
        .jump_address_backwards_out   (memory_jump_address_out)
    );

    // ------------------------------------------------------------------
    // Writeback stage
    // ------------------------------------------------------------------
    writeback_stage writeback_inst (
        .clk                          (clk),
        .rst                          (rst),

        .source_data_in               (mem_wb_source_data),
        .rd_data_in                   (mem_wb_rd_data),
        .instruction_in               (mem_wb_instruction),
        .program_counter_in           (mem_wb_pc),
        .next_program_counter_in      (mem_wb_next_pc),

        .external_interrupt_in        (external_interrupt_in),
        .timer_interrupt_in           (timer_interrupt_in),

        .forwarding_out               (wb_forwarding),

        .status_forwards_in           (mem_wb_status),
        .status_backwards_out         (writeback_backwards_out),
        .jump_address_backwards_out   (writeback_jump_address_out)
    );

endmodule