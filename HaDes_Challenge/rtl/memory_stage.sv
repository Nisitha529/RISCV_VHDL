// memory_stage.sv – final (no changes needed)
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

    // Decode instruction type
    logic is_load, is_store;
    logic [5:0] mem_width;
    always_comb begin
        is_load  = 1'b0;
        is_store = 1'b0;
        mem_width = 32;
        case (instruction_in.op)
            op::LB, op::LBU: mem_width = 8;
            op::LH, op::LHU: mem_width = 16;
            op::LW:          mem_width = 32;
            op::SB:          mem_width = 8;
            op::SH:          mem_width = 16;
            op::SW:          mem_width = 32;
            default: ;
        endcase
        is_load  = (instruction_in.op inside {op::LB, op::LH, op::LW, op::LBU, op::LHU});
        is_store = (instruction_in.op inside {op::SB, op::SH, op::SW});
    end

    // Wishbone byte lane selection
    logic [3:0] wb_sel;
    always_comb begin
        wb_sel = 4'b1111;
        if (mem_width == 8) begin
            case (rd_data_in[1:0])
                2'b00: wb_sel = 4'b0001;
                2'b01: wb_sel = 4'b0010;
                2'b10: wb_sel = 4'b0100;
                2'b11: wb_sel = 4'b1000;
            endcase
        end else if (mem_width == 16) begin
            if (rd_data_in[1] == 1'b0) wb_sel = 4'b0011;
            else wb_sel = 4'b1100;
        end
    end

    // Wishbone FSM
    typedef enum logic [1:0] { WB_IDLE, WB_BUSY } wb_state_t;
    wb_state_t wb_state;

    always_ff @(posedge clk) begin
        if (rst) begin
            wb_state <= WB_IDLE;
            wb.cyc   <= 1'b0;
            wb.stb   <= 1'b0;
            wb.adr   <= 32'd0;
            wb.sel   <= 4'b1111;
            wb.we    <= 1'b0;
            wb.dat_mosi <= 32'd0;
        end else begin
            case (wb_state)
                WB_IDLE: begin
                    if ((is_load || is_store) && (instruction_in.op != op::ILLEGAL)) begin
                        wb.cyc <= 1'b1;
                        wb.stb <= 1'b1;
                        wb.adr <= rd_data_in;
                        wb.sel <= wb_sel;
                        wb.we  <= is_store;
                        wb.dat_mosi <= source_data_in;
                        wb_state <= WB_BUSY;
                    end else begin
                        wb.cyc <= 1'b0;
                        wb.stb <= 1'b0;
                    end
                end
                WB_BUSY: begin
                    if (wb.ack || wb.err) begin
                        wb.cyc <= 1'b0;
                        wb.stb <= 1'b0;
                        wb_state <= WB_IDLE;
                    end else begin
                        wb.cyc <= 1'b1;
                        wb.stb <= 1'b1;
                    end
                end
                default: wb_state <= WB_IDLE;
            endcase
        end
    end

    // Load data alignment and sign extension
    logic [31:0] load_data;
    always_comb begin
        load_data = 32'd0;
        if (is_load && wb.ack && !wb.err) begin
            if (mem_width == 8) begin
                case (rd_data_in[1:0])
                    2'b00: load_data = wb.dat_miso & 32'h000000FF;
                    2'b01: load_data = (wb.dat_miso >> 8) & 32'h000000FF;
                    2'b10: load_data = (wb.dat_miso >> 16) & 32'h000000FF;
                    2'b11: load_data = (wb.dat_miso >> 24) & 32'h000000FF;
                endcase
                if (instruction_in.op == op::LB) begin
                    if (load_data[7]) load_data = {24'hFFFFFF, load_data[7:0]};
                end
            end else if (mem_width == 16) begin
                if (rd_data_in[1] == 0)
                    load_data = wb.dat_miso & 32'h0000FFFF;
                else
                    load_data = (wb.dat_miso >> 16) & 32'h0000FFFF;
                if (instruction_in.op == op::LH) begin
                    if (load_data[15]) load_data = {16'hFFFF, load_data[15:0]};
                end
            end else begin
                load_data = wb.dat_miso;
            end
        end
    end

    // MEM/WB pipeline register
    always_ff @(posedge clk) begin
        if (rst) begin
            source_data_reg_out      <= 32'd0;
            rd_data_reg_out          <= 32'd0;
            instruction_reg_out      <= instruction::NOP;
            program_counter_reg_out  <= 32'd0;
            next_program_counter_reg_out <= 32'd0;
            forwarding_out.data_valid <= 1'b0;
            forwarding_out.data       <= 32'd0;
            forwarding_out.address    <= 5'd0;
            status_forwards_out       <= pipeline_status::BUBBLE;
            status_backwards_out      <= pipeline_status::READY;
            jump_address_backwards_out <= 32'd0;
        end else begin
            source_data_reg_out <= source_data_in;
            if (is_load && wb.ack && !wb.err)
                rd_data_reg_out <= load_data;
            else
                rd_data_reg_out <= rd_data_in;
            instruction_reg_out <= instruction_in;
            program_counter_reg_out <= program_counter_in;
            next_program_counter_reg_out <= next_program_counter_in;

            if ((instruction_in.rd_address != 0) && (!is_store) &&
                (!is_load || (is_load && wb.ack && !wb.err))) begin
                forwarding_out.data_valid <= 1'b1;
                forwarding_out.data <= (is_load && wb.ack && !wb.err) ? load_data : rd_data_in;
                forwarding_out.address <= instruction_in.rd_address;
            end else begin
                forwarding_out.data_valid <= 1'b0;
                forwarding_out.data <= 32'd0;
                forwarding_out.address <= 5'd0;
            end

            status_forwards_out <= (instruction_in.op == op::ILLEGAL) ?
                                   pipeline_status::ILLEGAL_INSTRUCTION :
                                   pipeline_status::VALID;
            status_backwards_out <= pipeline_status::READY;
            jump_address_backwards_out <= 32'd0;
        end
    end

endmodule