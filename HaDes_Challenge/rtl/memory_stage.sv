// memory_stage.sv
`timescale 1ns/1ps

module memory_stage (
    input logic clk,
    input logic rst,

    wishbone_interface.master wb,

    input logic [31:0]   source_data_in,
    input logic [31:0]   rd_data_in,
    input instruction::t instruction_in,
    input logic [31:0]   program_counter_in,
    input logic [31:0]   next_program_counter_in,

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

    // ------------------------------------------------------------------
    // Wishbone FSM
    //
    // IDLE:
    //   Can accept a new instruction.
    //
    // BUSY:
    //   Active memory transaction.
    //
    // RELEASE:
    //   One-cycle release bubble after completion.
    //   During RELEASE, upstream sees READY, but memory_stage itself
    //   does not accept a new input until the following cycle. This lets
    //   execute_stage advance cleanly to the next EX/MEM instruction.
    // ------------------------------------------------------------------
    typedef enum logic [1:0] {
        WB_IDLE,
        WB_BUSY,
        WB_RELEASE
    } wb_state_t;

    wb_state_t wb_state;

    // ------------------------------------------------------------------
    // Downstream redirect only
    //
    // Do not depend on downstream STALL combinationally. In this top-level
    // design, writeback does not stall memory. Memory only needs to flush
    // on a writeback redirect.
    // ------------------------------------------------------------------
    logic downstream_jump;

    assign downstream_jump = (status_backwards_in == pipeline_status::JUMP);

    // ------------------------------------------------------------------
    // Instruction classification
    // ------------------------------------------------------------------
    logic is_load;
    logic is_store;

    always_comb begin
        is_load  = 1'b0;
        is_store = 1'b0;

        unique case (instruction_in.op)
            op::LB,
            op::LH,
            op::LW,
            op::LBU,
            op::LHU: begin
                is_load = 1'b1;
            end

            op::SB,
            op::SH,
            op::SW: begin
                is_store = 1'b1;
            end

            default: begin
                is_load  = 1'b0;
                is_store = 1'b0;
            end
        endcase
    end

    logic valid_memory_op;
    logic valid_non_memory_op;

    assign valid_memory_op = (status_forwards_in == pipeline_status::VALID) &&
                             (is_load || is_store);

    assign valid_non_memory_op = (status_forwards_in == pipeline_status::VALID) &&
                                 !is_load &&
                                 !is_store;

    // ------------------------------------------------------------------
    // Misalignment detection
    //
    // rd_data_in is the effective address produced by execute_stage.
    // ------------------------------------------------------------------
    logic access_misaligned;

    always_comb begin
        access_misaligned = 1'b0;

        unique case (instruction_in.op)
            op::LH,
            op::LHU,
            op::SH: begin
                access_misaligned = rd_data_in[0];
            end

            op::LW,
            op::SW: begin
                access_misaligned = |rd_data_in[1:0];
            end

            default: begin
                access_misaligned = 1'b0;
            end
        endcase
    end

    pipeline_status::forwards_t misaligned_status_comb;

    always_comb begin
        if (is_load) begin
            misaligned_status_comb = pipeline_status::LOAD_MISALIGNED;
        end else if (is_store) begin
            misaligned_status_comb = pipeline_status::STORE_MISALIGNED;
        end else begin
            misaligned_status_comb = pipeline_status::VALID;
        end
    end

    // ------------------------------------------------------------------
    // Byte select generation
    // ------------------------------------------------------------------
    logic [3:0] byte_sel_comb;

    always_comb begin
        byte_sel_comb = 4'b1111;

        unique case (instruction_in.op)
            op::LB,
            op::LBU,
            op::SB: begin
                unique case (rd_data_in[1:0])
                    2'b00:  byte_sel_comb = 4'b0001;
                    2'b01:  byte_sel_comb = 4'b0010;
                    2'b10:  byte_sel_comb = 4'b0100;
                    2'b11:  byte_sel_comb = 4'b1000;
                    default: byte_sel_comb = 4'b0001;
                endcase
            end

            op::LH,
            op::LHU,
            op::SH: begin
                byte_sel_comb = rd_data_in[1] ? 4'b1100 : 4'b0011;
            end

            op::LW,
            op::SW: begin
                byte_sel_comb = 4'b1111;
            end

            default: begin
                byte_sel_comb = 4'b1111;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Store data alignment
    // ------------------------------------------------------------------
    logic [31:0] store_data_comb;

    always_comb begin
        store_data_comb = source_data_in;

        unique case (instruction_in.op)
            op::SB: begin
                unique case (rd_data_in[1:0])
                    2'b00:  store_data_comb = {24'd0, source_data_in[7:0]};
                    2'b01:  store_data_comb = {16'd0, source_data_in[7:0], 8'd0};
                    2'b10:  store_data_comb = {8'd0,  source_data_in[7:0], 16'd0};
                    2'b11:  store_data_comb = {source_data_in[7:0], 24'd0};
                    default: store_data_comb = {24'd0, source_data_in[7:0]};
                endcase
            end

            op::SH: begin
                store_data_comb = rd_data_in[1] ?
                                  {source_data_in[15:0], 16'd0} :
                                  {16'd0, source_data_in[15:0]};
            end

            op::SW: begin
                store_data_comb = source_data_in;
            end

            default: begin
                store_data_comb = source_data_in;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Active transaction registers
    // ------------------------------------------------------------------
    instruction::t active_instr;
    logic [31:0]   active_source_data;
    logic [31:0]   active_addr;
    logic [31:0]   active_store_data;
    logic [31:0]   active_pc;
    logic [31:0]   active_next_pc;
    logic [3:0]    active_sel;
    logic          active_is_load;
    logic          active_is_store;

    // ------------------------------------------------------------------
    // Launch condition
    //
    // Launch is visible combinationally through status_backwards_out=STALL.
    // This prevents execute_stage from advancing and dropping the next
    // back-to-back memory instruction.
    // ------------------------------------------------------------------
    logic launch_memory_op;

    assign launch_memory_op = (wb_state == WB_IDLE) &&
                              !downstream_jump &&
                              valid_memory_op &&
                              !access_misaligned;

    // ------------------------------------------------------------------
    // Backward control
    //
    // STALL is combinational during launch and while BUSY.
    // RELEASE is intentionally READY so execute_stage can advance once.
    // ------------------------------------------------------------------
    always_comb begin
        status_backwards_out       = pipeline_status::READY;
        jump_address_backwards_out = 32'd0;

        if (downstream_jump) begin
            status_backwards_out       = pipeline_status::JUMP;
            jump_address_backwards_out = jump_address_backwards_in;
        end else if ((wb_state == WB_BUSY) || launch_memory_op) begin
            status_backwards_out       = pipeline_status::STALL;
            jump_address_backwards_out = 32'd0;
        end else begin
            status_backwards_out       = pipeline_status::READY;
            jump_address_backwards_out = 32'd0;
        end
    end

    // ------------------------------------------------------------------
    // Wishbone request outputs
    //
    // Request is combinational on launch and held from active_* while BUSY.
    // Address is forced to word boundary (clear lower 2 bits) because
    // Wishbone expects word-aligned addresses. Byte/halfword accesses
    // are handled via sel and data alignment.
    // ------------------------------------------------------------------
    logic        wb_cyc_comb;
    logic        wb_stb_comb;
    logic [31:0] wb_adr_comb;
    logic [3:0]  wb_sel_comb;
    logic        wb_we_comb;
    logic [31:0] wb_dat_mosi_comb;

    always_comb begin
        wb_cyc_comb      = 1'b0;
        wb_stb_comb      = 1'b0;
        wb_adr_comb      = 32'd0;
        wb_sel_comb      = 4'b1111;
        wb_we_comb       = 1'b0;
        wb_dat_mosi_comb = 32'd0;

        if (wb_state == WB_BUSY) begin
            wb_cyc_comb      = 1'b1;
            wb_stb_comb      = 1'b1;
            wb_adr_comb      = {active_addr[31:2], 2'b00};   // align to word
            wb_sel_comb      = active_sel;
            wb_we_comb       = active_is_store;
            wb_dat_mosi_comb = active_store_data;
        end else if (launch_memory_op) begin
            wb_cyc_comb      = 1'b1;
            wb_stb_comb      = 1'b1;
            wb_adr_comb      = {rd_data_in[31:2], 2'b00};    // align to word
            wb_sel_comb      = byte_sel_comb;
            wb_we_comb       = is_store;
            wb_dat_mosi_comb = store_data_comb;
        end
    end

    assign wb.cyc      = wb_cyc_comb;
    assign wb.stb      = wb_stb_comb;
    assign wb.adr      = wb_adr_comb;
    assign wb.sel      = wb_sel_comb;
    assign wb.we       = wb_we_comb;
    assign wb.dat_mosi = wb_dat_mosi_comb;

    // ------------------------------------------------------------------
    // Load data extraction from active transaction
    // ------------------------------------------------------------------
    logic [31:0] active_load_value_comb;

    always_comb begin
        active_load_value_comb = wb.dat_miso;

        unique case (active_instr.op)
            op::LB: begin
                unique case (active_addr[1:0])
                    2'b00:  active_load_value_comb = {{24{wb.dat_miso[7]}},  wb.dat_miso[7:0]};
                    2'b01:  active_load_value_comb = {{24{wb.dat_miso[15]}}, wb.dat_miso[15:8]};
                    2'b10:  active_load_value_comb = {{24{wb.dat_miso[23]}}, wb.dat_miso[23:16]};
                    2'b11:  active_load_value_comb = {{24{wb.dat_miso[31]}}, wb.dat_miso[31:24]};
                    default: active_load_value_comb = {{24{wb.dat_miso[7]}}, wb.dat_miso[7:0]};
                endcase
            end

            op::LBU: begin
                unique case (active_addr[1:0])
                    2'b00:  active_load_value_comb = {24'd0, wb.dat_miso[7:0]};
                    2'b01:  active_load_value_comb = {24'd0, wb.dat_miso[15:8]};
                    2'b10:  active_load_value_comb = {24'd0, wb.dat_miso[23:16]};
                    2'b11:  active_load_value_comb = {24'd0, wb.dat_miso[31:24]};
                    default: active_load_value_comb = {24'd0, wb.dat_miso[7:0]};
                endcase
            end

            op::LH: begin
                active_load_value_comb = active_addr[1] ?
                                         {{16{wb.dat_miso[31]}}, wb.dat_miso[31:16]} :
                                         {{16{wb.dat_miso[15]}}, wb.dat_miso[15:0]};
            end

            op::LHU: begin
                active_load_value_comb = active_addr[1] ?
                                         {16'd0, wb.dat_miso[31:16]} :
                                         {16'd0, wb.dat_miso[15:0]};
            end

            op::LW: begin
                active_load_value_comb = wb.dat_miso;
            end

            default: begin
                active_load_value_comb = wb.dat_miso;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Load data extraction for immediate single-cycle launch completion
    // ------------------------------------------------------------------
    logic [31:0] live_load_value_comb;

    always_comb begin
        live_load_value_comb = wb.dat_miso;

        unique case (instruction_in.op)
            op::LB: begin
                unique case (rd_data_in[1:0])
                    2'b00:  live_load_value_comb = {{24{wb.dat_miso[7]}},  wb.dat_miso[7:0]};
                    2'b01:  live_load_value_comb = {{24{wb.dat_miso[15]}}, wb.dat_miso[15:8]};
                    2'b10:  live_load_value_comb = {{24{wb.dat_miso[23]}}, wb.dat_miso[23:16]};
                    2'b11:  live_load_value_comb = {{24{wb.dat_miso[31]}}, wb.dat_miso[31:24]};
                    default: live_load_value_comb = {{24{wb.dat_miso[7]}}, wb.dat_miso[7:0]};
                endcase
            end

            op::LBU: begin
                unique case (rd_data_in[1:0])
                    2'b00:  live_load_value_comb = {24'd0, wb.dat_miso[7:0]};
                    2'b01:  live_load_value_comb = {24'd0, wb.dat_miso[15:8]};
                    2'b10:  live_load_value_comb = {24'd0, wb.dat_miso[23:16]};
                    2'b11:  live_load_value_comb = {24'd0, wb.dat_miso[31:24]};
                    default: live_load_value_comb = {24'd0, wb.dat_miso[7:0]};
                endcase
            end

            op::LH: begin
                live_load_value_comb = rd_data_in[1] ?
                                       {{16{wb.dat_miso[31]}}, wb.dat_miso[31:16]} :
                                       {{16{wb.dat_miso[15]}}, wb.dat_miso[15:0]};
            end

            op::LHU: begin
                live_load_value_comb = rd_data_in[1] ?
                                       {16'd0, wb.dat_miso[31:16]} :
                                       {16'd0, wb.dat_miso[15:0]};
            end

            op::LW: begin
                live_load_value_comb = wb.dat_miso;
            end

            default: begin
                live_load_value_comb = wb.dat_miso;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Fault status
    // ------------------------------------------------------------------
    pipeline_status::forwards_t active_fault_status_comb;
    pipeline_status::forwards_t live_fault_status_comb;

    always_comb begin
        if (active_is_load) begin
            active_fault_status_comb = pipeline_status::LOAD_FAULT;
        end else if (active_is_store) begin
            active_fault_status_comb = pipeline_status::STORE_FAULT;
        end else begin
            active_fault_status_comb = pipeline_status::VALID;
        end

        if (is_load) begin
            live_fault_status_comb = pipeline_status::LOAD_FAULT;
        end else if (is_store) begin
            live_fault_status_comb = pipeline_status::STORE_FAULT;
        end else begin
            live_fault_status_comb = pipeline_status::VALID;
        end
    end

    // ------------------------------------------------------------------
    // Sequential FSM and forward pipeline outputs
    // ------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            wb_state <= WB_IDLE;

            active_instr       <= instruction::NOP;
            active_source_data <= 32'd0;
            active_addr        <= 32'd0;
            active_store_data  <= 32'd0;
            active_pc          <= 32'd0;
            active_next_pc     <= 32'd0;
            active_sel         <= 4'b1111;
            active_is_load     <= 1'b0;
            active_is_store    <= 1'b0;

            source_data_reg_out          <= 32'd0;
            rd_data_reg_out              <= 32'd0;
            instruction_reg_out          <= instruction::NOP;
            program_counter_reg_out      <= 32'd0;
            next_program_counter_reg_out <= 32'd0;

            forwarding_out.data_valid <= 1'b0;
            forwarding_out.data       <= 32'd0;
            forwarding_out.address    <= 5'd0;

            status_forwards_out <= pipeline_status::BUBBLE;
        end else begin
            if (downstream_jump) begin
                if (wb_state != WB_BUSY) begin
                    wb_state <= WB_IDLE;
                end

                source_data_reg_out          <= 32'd0;
                rd_data_reg_out              <= 32'd0;
                instruction_reg_out          <= instruction::NOP;
                program_counter_reg_out      <= 32'd0;
                next_program_counter_reg_out <= 32'd0;

                forwarding_out.data_valid <= 1'b0;
                forwarding_out.data       <= 32'd0;
                forwarding_out.address    <= 5'd0;

                status_forwards_out <= pipeline_status::BUBBLE;
            end else begin
                unique case (wb_state)

                    // --------------------------------------------------
                    // IDLE: accept new input from execute_stage
                    // --------------------------------------------------
                    WB_IDLE: begin
                        if (status_forwards_in != pipeline_status::VALID) begin
                            source_data_reg_out          <= 32'd0;
                            rd_data_reg_out              <= 32'd0;
                            instruction_reg_out          <= instruction::NOP;
                            program_counter_reg_out      <= program_counter_in;
                            next_program_counter_reg_out <= next_program_counter_in;

                            forwarding_out.data_valid <= 1'b0;
                            forwarding_out.data       <= 32'd0;
                            forwarding_out.address    <= 5'd0;

                            status_forwards_out <= status_forwards_in;
                        end else if (valid_memory_op && access_misaligned) begin
                            source_data_reg_out          <= source_data_in;
                            rd_data_reg_out              <= rd_data_in;
                            instruction_reg_out          <= instruction_in;
                            program_counter_reg_out      <= program_counter_in;
                            next_program_counter_reg_out <= next_program_counter_in;

                            forwarding_out.data_valid <= 1'b0;
                            forwarding_out.data       <= 32'd0;
                            forwarding_out.address    <= 5'd0;

                            status_forwards_out <= misaligned_status_comb;
                        end else if (launch_memory_op) begin
                            active_instr       <= instruction_in;
                            active_source_data <= source_data_in;
                            active_addr        <= rd_data_in;
                            active_store_data  <= store_data_comb;
                            active_pc          <= program_counter_in;
                            active_next_pc     <= next_program_counter_in;
                            active_sel         <= byte_sel_comb;
                            active_is_load     <= is_load;
                            active_is_store    <= is_store;

                            if (wb.ack || wb.err) begin
                                // Fast/asynchronous completion on launch.
                                source_data_reg_out <= source_data_in;

                                rd_data_reg_out <= wb.err ? rd_data_in :
                                                   is_load ? live_load_value_comb :
                                                             rd_data_in;

                                instruction_reg_out          <= instruction_in;
                                program_counter_reg_out      <= program_counter_in;
                                next_program_counter_reg_out <= next_program_counter_in;

                                forwarding_out.data_valid <= is_load &&
                                                             !wb.err &&
                                                             (instruction_in.rd_address != 5'd0);

                                forwarding_out.data    <= is_load ? live_load_value_comb : 32'd0;
                                forwarding_out.address <= instruction_in.rd_address;

                                status_forwards_out <= wb.err ? live_fault_status_comb :
                                                                pipeline_status::VALID;

                                wb_state <= WB_RELEASE;
                            end else begin
                                source_data_reg_out          <= 32'd0;
                                rd_data_reg_out              <= 32'd0;
                                instruction_reg_out          <= instruction::NOP;
                                program_counter_reg_out      <= 32'd0;
                                next_program_counter_reg_out <= 32'd0;

                                forwarding_out.data_valid <= 1'b0;
                                forwarding_out.data       <= 32'd0;
                                forwarding_out.address    <= 5'd0;

                                status_forwards_out <= pipeline_status::BUBBLE;

                                wb_state <= WB_BUSY;
                            end
                        end else if (valid_non_memory_op) begin
                            source_data_reg_out          <= source_data_in;
                            rd_data_reg_out              <= rd_data_in;
                            instruction_reg_out          <= instruction_in;
                            program_counter_reg_out      <= program_counter_in;
                            next_program_counter_reg_out <= next_program_counter_in;

                            forwarding_out.data_valid <= (instruction_in.rd_address != 5'd0);
                            forwarding_out.data       <= rd_data_in;
                            forwarding_out.address    <= instruction_in.rd_address;

                            status_forwards_out <= pipeline_status::VALID;
                        end else begin
                            source_data_reg_out          <= 32'd0;
                            rd_data_reg_out              <= 32'd0;
                            instruction_reg_out          <= instruction::NOP;
                            program_counter_reg_out      <= program_counter_in;
                            next_program_counter_reg_out <= next_program_counter_in;

                            forwarding_out.data_valid <= 1'b0;
                            forwarding_out.data       <= 32'd0;
                            forwarding_out.address    <= 5'd0;

                            status_forwards_out <= pipeline_status::BUBBLE;
                        end
                    end

                    // --------------------------------------------------
                    // BUSY: wait for Wishbone ack/err
                    // --------------------------------------------------
                    WB_BUSY: begin
                        forwarding_out.data_valid <= 1'b0;
                        forwarding_out.data       <= 32'd0;
                        forwarding_out.address    <= 5'd0;

                        status_forwards_out <= pipeline_status::BUBBLE;

                        if (wb.ack || wb.err) begin
                            source_data_reg_out <= active_source_data;

                            rd_data_reg_out <= wb.err ? active_addr :
                                               active_is_load ? active_load_value_comb :
                                                                active_addr;

                            instruction_reg_out          <= active_instr;
                            program_counter_reg_out      <= active_pc;
                            next_program_counter_reg_out <= active_next_pc;

                            forwarding_out.data_valid <= active_is_load &&
                                                         !wb.err &&
                                                         (active_instr.rd_address != 5'd0);

                            forwarding_out.data    <= active_is_load ? active_load_value_comb : 32'd0;
                            forwarding_out.address <= active_instr.rd_address;

                            status_forwards_out <= wb.err ? active_fault_status_comb :
                                                            pipeline_status::VALID;

                            wb_state <= WB_RELEASE;
                        end
                    end

                    // --------------------------------------------------
                    // RELEASE:
                    //
                    // Upstream sees READY in this cycle and can advance.
                    // Memory stage does not accept a new input until the
                    // following cycle, preventing duplicate/replayed stores.
                    // --------------------------------------------------
                    WB_RELEASE: begin
                        source_data_reg_out          <= 32'd0;
                        rd_data_reg_out              <= 32'd0;
                        instruction_reg_out          <= instruction::NOP;
                        program_counter_reg_out      <= 32'd0;
                        next_program_counter_reg_out <= 32'd0;

                        forwarding_out.data_valid <= 1'b0;
                        forwarding_out.data       <= 32'd0;
                        forwarding_out.address    <= 5'd0;

                        status_forwards_out <= pipeline_status::BUBBLE;

                        wb_state <= WB_IDLE;
                    end

                    default: begin
                        wb_state <= WB_IDLE;

                        source_data_reg_out          <= 32'd0;
                        rd_data_reg_out              <= 32'd0;
                        instruction_reg_out          <= instruction::NOP;
                        program_counter_reg_out      <= 32'd0;
                        next_program_counter_reg_out <= 32'd0;

                        forwarding_out.data_valid <= 1'b0;
                        forwarding_out.data       <= 32'd0;
                        forwarding_out.address    <= 5'd0;

                        status_forwards_out <= pipeline_status::BUBBLE;
                    end
                endcase
            end
        end
    end

endmodule