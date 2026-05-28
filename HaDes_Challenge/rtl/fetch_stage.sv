// fetch_stage.sv
`timescale 1ns/1ps

module fetch_stage #(
    parameter DATA_WIDTH = 32
)(
    input  logic                        clk,
    input  logic                        rst,

    wishbone_interface.master           wb,

    output logic [DATA_WIDTH - 1 : 0]   instruction_reg_out,
    output logic [DATA_WIDTH - 1 : 0]   program_counter_reg_out,

    output pipeline_status::forwards_t  status_forwards_out,
    input  pipeline_status::backwards_t status_backwards_in,
    input  logic [DATA_WIDTH - 1 : 0]   jump_address_backwards_in
);

    localparam logic [DATA_WIDTH - 1 : 0] NOP_INSTR = 32'h0000_0013;

    typedef enum logic [0:0] {
        WB_IDLE,
        WB_BUSY
    } wb_state_t;

    wb_state_t wb_state;

    logic [DATA_WIDTH - 1 : 0] pc;
    logic [DATA_WIDTH - 1 : 0] request_pc;

    logic                      pending_valid;
    logic [DATA_WIDTH - 1 : 0] pending_instr;
    logic [DATA_WIDTH - 1 : 0] pending_pc;
    pipeline_status::forwards_t pending_status;

    logic kill_response;

    logic downstream_stall;
    logic downstream_jump;
    logic response_valid;
    logic response_is_error;
    logic can_request;

    assign downstream_stall   = (status_backwards_in == pipeline_status::STALL);
    assign downstream_jump    = (status_backwards_in == pipeline_status::JUMP);
    assign response_valid     = (wb_state == WB_BUSY) && (wb.ack || wb.err);
    assign response_is_error  = wb.err;

    assign can_request = (wb_state == WB_IDLE) &&
                         !pending_valid       &&
                         !downstream_stall    &&
                         !downstream_jump;

    // ------------------------------------------------------------------
    // Stale response tracking
    //
    // If a jump happens while a fetch is outstanding, the returning
    // response belongs to the old path and must be ignored.
    // ------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            kill_response <= 1'b0;
        end else begin
            if (downstream_jump && (wb_state == WB_BUSY) && !response_valid) begin
                kill_response <= 1'b1;
            end else if (response_valid) begin
                kill_response <= 1'b0;
            end
        end
    end

    // ------------------------------------------------------------------
    // Wishbone request FSM
    //
    // IMPORTANT:
    //   The CPU PC is byte-addressed.
    //   The Wishbone address is word-addressed.
    //
    // Therefore:
    //   wb.adr <= pc[31:2]
    //
    // This is required for MCU RAM:
    //   RESET_ADDRESS      = 0x00040000
    //   RESET_ADDRESS >> 2 = 0x00010000 = MEMORY_START
    // ------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            wb_state    <= WB_IDLE;

            wb.cyc      <= 1'b0;
            wb.stb      <= 1'b0;
            wb.adr      <= 32'd0;
            wb.sel      <= 4'b1111;
            wb.we       <= 1'b0;
            wb.dat_mosi <= 32'd0;

            pc          <= constants::RESET_ADDRESS;
            request_pc  <= constants::RESET_ADDRESS;
        end else begin
            wb.sel      <= 4'b1111;
            wb.we       <= 1'b0;
            wb.dat_mosi <= 32'd0;

            if (downstream_jump) begin
                pc <= jump_address_backwards_in;
            end

            unique case (wb_state)

                WB_IDLE: begin
                    wb.cyc <= 1'b0;
                    wb.stb <= 1'b0;

                    if (can_request) begin
                        wb.cyc <= 1'b1;
                        wb.stb <= 1'b1;

                        // Correct HaDes-V Wishbone instruction address:
                        // word address, not byte address.
                        wb.adr <= {2'b00, pc[DATA_WIDTH - 1 : 2]};

                        request_pc <= pc;
                        pc         <= pc + 32'd4;

                        wb_state <= WB_BUSY;
                    end
                end

                WB_BUSY: begin
                    wb.cyc <= 1'b1;
                    wb.stb <= 1'b1;

                    if (response_valid) begin
                        wb.cyc   <= 1'b0;
                        wb.stb   <= 1'b0;
                        wb_state <= WB_IDLE;
                    end
                end

                default: begin
                    wb_state <= WB_IDLE;
                    wb.cyc   <= 1'b0;
                    wb.stb   <= 1'b0;
                end
            endcase
        end
    end

    // ------------------------------------------------------------------
    // Forward pipeline output
    // ------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            instruction_reg_out     <= NOP_INSTR;
            program_counter_reg_out <= constants::RESET_ADDRESS;
            status_forwards_out     <= pipeline_status::BUBBLE;

            pending_valid           <= 1'b0;
            pending_instr           <= NOP_INSTR;
            pending_pc              <= constants::RESET_ADDRESS;
            pending_status          <= pipeline_status::BUBBLE;
        end else begin
            if (downstream_jump) begin
                instruction_reg_out     <= NOP_INSTR;
                program_counter_reg_out <= jump_address_backwards_in;
                status_forwards_out     <= pipeline_status::BUBBLE;

                pending_valid           <= 1'b0;
                pending_instr           <= NOP_INSTR;
                pending_pc              <= jump_address_backwards_in;
                pending_status          <= pipeline_status::BUBBLE;
            end else if (downstream_stall) begin
                instruction_reg_out     <= instruction_reg_out;
                program_counter_reg_out <= program_counter_reg_out;
                status_forwards_out     <= status_forwards_out;

                if (response_valid && !kill_response) begin
                    pending_valid <= 1'b1;
                    pending_pc    <= request_pc;

                    if (response_is_error) begin
                        pending_instr  <= NOP_INSTR;
                        pending_status <= pipeline_status::FETCH_FAULT;
                    end else begin
                        pending_instr  <= wb.dat_miso;
                        pending_status <= pipeline_status::VALID;
                    end
                end
            end else begin
                if (pending_valid) begin
                    instruction_reg_out     <= pending_instr;
                    program_counter_reg_out <= pending_pc;
                    status_forwards_out     <= pending_status;

                    pending_valid <= 1'b0;
                end else if (response_valid && !kill_response) begin
                    program_counter_reg_out <= request_pc;

                    if (response_is_error) begin
                        instruction_reg_out <= NOP_INSTR;
                        status_forwards_out <= pipeline_status::FETCH_FAULT;
                    end else begin
                        instruction_reg_out <= wb.dat_miso;
                        status_forwards_out <= pipeline_status::VALID;
                    end
                end else begin
                    instruction_reg_out     <= NOP_INSTR;
                    program_counter_reg_out <= program_counter_reg_out;
                    status_forwards_out     <= pipeline_status::BUBBLE;
                end
            end
        end
    end

endmodule