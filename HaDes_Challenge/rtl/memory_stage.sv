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

    logic is_load;
    logic is_store;

    always_comb begin
        is_load  = 1'b0;
        is_store = 1'b0;

        case (instruction_in.op)
            op::LB, op::LH, op::LW, op::LBU, op::LHU:
                is_load = 1'b1;

            op::SB, op::SH, op::SW:
                is_store = 1'b1;

            default: ;
        endcase
    end

    typedef enum logic [0:0] {
        WB_IDLE,
        WB_BUSY
    } wb_state_t;

    wb_state_t wb_state;

    instruction::t active_instr;
    logic [31:0]   active_source_data;
    logic [31:0]   active_rd_data;
    logic [31:0]   active_pc;
    logic [31:0]   active_next_pc;
    logic          active_is_load;
    logic          active_is_store;

    logic [31:0] load_value;

    always_comb begin
        load_value = wb.dat_miso;

        case (active_instr.op)
            op::LB: begin
                case (active_rd_data[1:0])
                    2'b00: load_value = {{24{wb.dat_miso[7]}},  wb.dat_miso[7:0]};
                    2'b01: load_value = {{24{wb.dat_miso[15]}}, wb.dat_miso[15:8]};
                    2'b10: load_value = {{24{wb.dat_miso[23]}}, wb.dat_miso[23:16]};
                    2'b11: load_value = {{24{wb.dat_miso[31]}}, wb.dat_miso[31:24]};
                endcase
            end

            op::LBU: begin
                case (active_rd_data[1:0])
                    2'b00: load_value = {24'd0, wb.dat_miso[7:0]};
                    2'b01: load_value = {24'd0, wb.dat_miso[15:8]};
                    2'b10: load_value = {24'd0, wb.dat_miso[23:16]};
                    2'b11: load_value = {24'd0, wb.dat_miso[31:24]};
                endcase
            end

            op::LH: begin
                if (active_rd_data[1] == 1'b0)
                    load_value = {{16{wb.dat_miso[15]}}, wb.dat_miso[15:0]};
                else
                    load_value = {{16{wb.dat_miso[31]}}, wb.dat_miso[31:16]};
            end

            op::LHU: begin
                if (active_rd_data[1] == 1'b0)
                    load_value = {16'd0, wb.dat_miso[15:0]};
                else
                    load_value = {16'd0, wb.dat_miso[31:16]};
            end

            default: begin
                load_value = wb.dat_miso;
            end
        endcase
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            wb_state    <= WB_IDLE;
            wb.cyc      <= 1'b0;
            wb.stb      <= 1'b0;
            wb.adr      <= 32'd0;
            wb.sel      <= 4'b1111;
            wb.we       <= 1'b0;
            wb.dat_mosi <= 32'd0;

            active_instr       <= instruction::NOP;
            active_source_data <= 32'd0;
            active_rd_data     <= 32'd0;
            active_pc          <= 32'd0;
            active_next_pc     <= 32'd0;
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

            status_forwards_out        <= pipeline_status::BUBBLE;
            status_backwards_out       <= pipeline_status::READY;
            jump_address_backwards_out <= 32'd0;
        end else begin
            forwarding_out.data_valid <= 1'b0;
            forwarding_out.data       <= 32'd0;
            forwarding_out.address    <= 5'd0;

            status_forwards_out        <= pipeline_status::VALID;
            status_backwards_out       <= pipeline_status::READY;
            jump_address_backwards_out <= 32'd0;

            case (wb_state)
                WB_IDLE: begin
                    wb.cyc      <= 1'b0;
                    wb.stb      <= 1'b0;
                    wb.we       <= 1'b0;
                    wb.sel      <= 4'b1111;
                    wb.dat_mosi <= 32'd0;

                    if (is_load || is_store) begin
                        active_instr       <= instruction_in;
                        active_source_data <= source_data_in;
                        active_rd_data     <= rd_data_in;
                        active_pc          <= program_counter_in;
                        active_next_pc     <= next_program_counter_in;
                        active_is_load     <= is_load;
                        active_is_store    <= is_store;

                        wb.cyc      <= 1'b1;
                        wb.stb      <= 1'b1;
                        wb.adr      <= rd_data_in;
                        wb.sel      <= 4'b1111;
                        wb.we       <= is_store;
                        wb.dat_mosi <= source_data_in;

                        wb_state <= WB_BUSY;
                    end else begin
                        source_data_reg_out          <= source_data_in;
                        rd_data_reg_out              <= rd_data_in;
                        instruction_reg_out          <= instruction_in;
                        program_counter_reg_out      <= program_counter_in;
                        next_program_counter_reg_out <= next_program_counter_in;

                        forwarding_out.data_valid <= (instruction_in.rd_address != 5'd0);
                        forwarding_out.data       <= rd_data_in;
                        forwarding_out.address    <= instruction_in.rd_address;
                    end
                end

                WB_BUSY: begin
                    wb.cyc <= 1'b1;
                    wb.stb <= 1'b1;

                    if (wb.ack || wb.err) begin
                        wb.cyc <= 1'b0;
                        wb.stb <= 1'b0;
                        wb.we  <= 1'b0;

                        source_data_reg_out          <= active_source_data;
                        rd_data_reg_out              <= active_is_load ? load_value : active_rd_data;
                        instruction_reg_out          <= active_instr;
                        program_counter_reg_out      <= active_pc;
                        next_program_counter_reg_out <= active_next_pc;

                        forwarding_out.data_valid <= active_is_load &&
                                                     (active_instr.rd_address != 5'd0) &&
                                                     !wb.err;
                        forwarding_out.data       <= load_value;
                        forwarding_out.address    <= active_instr.rd_address;

                        wb_state <= WB_IDLE;
                    end
                end
            endcase
        end
    end

endmodule