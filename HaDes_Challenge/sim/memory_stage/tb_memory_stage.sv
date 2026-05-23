// tb_memory_stage.sv – corrected expectations
`timescale 1ns/1ps

module tb_memory_stage;

    logic clk, rst;
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    initial begin
        rst = 1;
        repeat (2) @(posedge clk);
        rst = 0;
    end

    wishbone_interface wb();

    logic [31:0]   source_data_in;
    logic [31:0]   rd_data_in;
    instruction::t instruction_in;
    logic [31:0]   program_counter_in;
    logic [31:0]   next_program_counter_in;

    logic [31:0]   source_data_reg_out;
    logic [31:0]   rd_data_reg_out;
    instruction::t instruction_reg_out;
    logic [31:0]   program_counter_reg_out;
    logic [31:0]   next_program_counter_reg_out;
    forwarding::t  forwarding_out;

    pipeline_status::forwards_t  status_forwards_in;
    pipeline_status::forwards_t  status_forwards_out;
    pipeline_status::backwards_t status_backwards_in;
    pipeline_status::backwards_t status_backwards_out;
    logic [31:0] jump_address_backwards_in;
    logic [31:0] jump_address_backwards_out;

    memory_stage dut (
        .clk, .rst,
        .wb(wb.master),
        .source_data_in, .rd_data_in,
        .instruction_in,
        .program_counter_in, .next_program_counter_in,
        .source_data_reg_out, .rd_data_reg_out,
        .instruction_reg_out,
        .program_counter_reg_out, .next_program_counter_reg_out,
        .forwarding_out,
        .status_forwards_in, .status_forwards_out,
        .status_backwards_in, .status_backwards_out,
        .jump_address_backwards_in, .jump_address_backwards_out
    );

    // Wishbone memory slave model (1‑cycle latency)
    logic [31:0] memory [0:1023];
    logic        force_error;

    initial begin
        integer i;
        for (i = 0; i < 1024; i++) memory[i] = 32'hDEADBEEF;
        memory[0] = 32'h12345678;   // word at address 0
        memory[2] = 32'hAABBCCDD;   // word at address 8
        memory[4] = 32'h11223344;   // word at address 16
        force_error = 0;
    end

    // Wishbone slave – responds on negedge, handles both reads and writes
    always_ff @(negedge clk) begin
        if (rst) begin
            wb.ack <= 1'b0;
            wb.err <= 1'b0;
            wb.dat_miso <= 32'd0;
        end else begin
            wb.ack <= 1'b0;
            wb.err <= 1'b0;
            if (wb.cyc && wb.stb) begin
                if (force_error) begin
                    wb.err <= 1'b1;
                    wb.dat_miso <= 32'd0;
                end else begin
                    wb.ack <= 1'b1;
                    if (wb.we) begin
                        memory[{22'b0, wb.adr[11:2]}] <= wb.dat_mosi;
                    end else begin
                        wb.dat_miso <= memory[{22'b0, wb.adr[11:2]}];
                    end
                end
            end
        end
    end

    // Helper tasks
    task apply_and_advance(
        input logic [31:0] src,
        input logic [31:0] rd,
        input instruction::t instr,
        input logic [31:0] pc,
        input logic [31:0] next_pc,
        input pipeline_status::forwards_t fwd_status,
        input pipeline_status::backwards_t back_status,
        input logic [31:0] jump_addr
    );
        @(negedge clk);
        source_data_in = src;
        rd_data_in = rd;
        instruction_in = instr;
        program_counter_in = pc;
        next_program_counter_in = next_pc;
        status_forwards_in = fwd_status;
        status_backwards_in = back_status;
        jump_address_backwards_in = jump_addr;
        @(posedge clk);
        #1;
    endtask

    task check_outputs(
        input string test_name,
        input logic [31:0] exp_source_reg,
        input logic [31:0] exp_rd_reg,
        input instruction::t exp_instr_reg,
        input logic [31:0] exp_pc_reg,
        input logic [31:0] exp_next_pc_reg,
        input forwarding::t exp_fwd,
        input pipeline_status::forwards_t exp_fwd_status,
        input pipeline_status::backwards_t exp_back_status,
        input logic [31:0] exp_jump_addr
    );
        if (source_data_reg_out !== exp_source_reg) begin
            $display("[FAIL] %s: source_data_reg_out = %h, expected %h", test_name, source_data_reg_out, exp_source_reg);
            $finish;
        end
        if (rd_data_reg_out !== exp_rd_reg) begin
            $display("[FAIL] %s: rd_data_reg_out = %h, expected %h", test_name, rd_data_reg_out, exp_rd_reg);
            $finish;
        end
        if (instruction_reg_out.op !== exp_instr_reg.op ||
            instruction_reg_out.rd_address !== exp_instr_reg.rd_address) begin
            $display("[FAIL] %s: instruction_reg_out mismatch", test_name);
            $finish;
        end
        if (program_counter_reg_out !== exp_pc_reg) begin
            $display("[FAIL] %s: program_counter_reg_out = %h, expected %h", test_name, program_counter_reg_out, exp_pc_reg);
            $finish;
        end
        if (next_program_counter_reg_out !== exp_next_pc_reg) begin
            $display("[FAIL] %s: next_program_counter_reg_out = %h, expected %h", test_name, next_program_counter_reg_out, exp_next_pc_reg);
            $finish;
        end
        if (forwarding_out.data_valid !== exp_fwd.data_valid ||
            forwarding_out.data !== exp_fwd.data ||
            forwarding_out.address !== exp_fwd.address) begin
            $display("[FAIL] %s: forwarding_out mismatch", test_name);
            $finish;
        end
        if (status_forwards_out !== exp_fwd_status) begin
            $display("[FAIL] %s: status_forwards_out = %0d, expected %0d", test_name, status_forwards_out, exp_fwd_status);
            $finish;
        end
        if (status_backwards_out !== exp_back_status) begin
            $display("[FAIL] %s: status_backwards_out = %0d, expected %0d", test_name, status_backwards_out, exp_back_status);
            $finish;
        end
        if (jump_address_backwards_out !== exp_jump_addr) begin
            $display("[FAIL] %s: jump_address_backwards_out = %h, expected %h", test_name, jump_address_backwards_out, exp_jump_addr);
            $finish;
        end
        $display("[PASS] %s", test_name);
    endtask

    // Main test sequence
    initial begin
        status_backwards_in = pipeline_status::READY;
        jump_address_backwards_in = 32'd0;
        status_forwards_in = pipeline_status::VALID;

        wait (rst == 0);
        @(posedge clk); #1;

        // 1. ALU passthrough
        apply_and_advance(
            32'd0, 32'h12345678,
            '{op: op::ADD, rd_address: 5'd1, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1000, 32'h1004,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        check_outputs("ALU passthrough",
            32'd0, 32'h12345678,
            '{op: op::ADD, rd_address: 5'd1, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1000, 32'h1004,
            '{data_valid: 1'b1, data: 32'h12345678, address: 5'd1},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);

        // 2. LW word load from address 0
        apply_and_advance(
            32'd0, 32'd0,
            '{op: op::LW, rd_address: 5'd2, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1008, 32'h100C,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("LW word load",
            32'd0, 32'h12345678,
            '{op: op::LW, rd_address: 5'd2, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1008, 32'h100C,
            '{data_valid: 1'b1, data: 32'h12345678, address: 5'd2},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);

        // 3. SW word store to address 16 (word index 4)
        apply_and_advance(
            32'hDEADBEEF, 32'd16,
            '{op: op::SW, rd_address: 0, rs1_address: 0, rs2_address: 5'd3, immediate: 0, csr: csr::t'(0)},
            32'h1010, 32'h1014,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("SW word store",
            32'hDEADBEEF, 32'd16,
            '{op: op::SW, rd_address: 0, rs1_address: 0, rs2_address: 5'd3, immediate: 0, csr: csr::t'(0)},
            32'h1010, 32'h1014,
            '{data_valid: 1'b0, data: 0, address: 0},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);
        if (memory[4] !== 32'hDEADBEEF) begin
            $display("[FAIL] Store check: memory[4]=%h, expected DEADBEEF", memory[4]);
            $finish;
        end

        // 4. LB signed byte from address 1 (byte = 0x56, sign‑extended = 0x00000056)
        apply_and_advance(
            32'd0, 32'd1,
            '{op: op::LB, rd_address: 5'd4, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1018, 32'h101C,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("LB signed byte",
            32'd0, 32'h00000056,
            '{op: op::LB, rd_address: 5'd4, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1018, 32'h101C,
            '{data_valid: 1'b1, data: 32'h00000056, address: 5'd4},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);

        // 5. LBU unsigned byte from address 2 (0x34 -> 0x00000034)
        apply_and_advance(
            32'd0, 32'd2,
            '{op: op::LBU, rd_address: 5'd5, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1020, 32'h1024,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("LBU unsigned byte",
            32'd0, 32'h00000034,
            '{op: op::LBU, rd_address: 5'd5, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1020, 32'h1024,
            '{data_valid: 1'b1, data: 32'h00000034, address: 5'd5},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);

        // 6. LH signed halfword from address 2 (0x1234 -> 0x00001234)
        apply_and_advance(
            32'd0, 32'd2,
            '{op: op::LH, rd_address: 5'd6, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1028, 32'h102C,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("LH signed halfword",
            32'd0, 32'h00001234,
            '{op: op::LH, rd_address: 5'd6, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1028, 32'h102C,
            '{data_valid: 1'b1, data: 32'h00001234, address: 5'd6},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);

        // 7. LHU unsigned halfword from address 2 (0x1234 -> 0x00001234)
        apply_and_advance(
            32'd0, 32'd2,
            '{op: op::LHU, rd_address: 5'd7, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1030, 32'h1034,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("LHU unsigned halfword",
            32'd0, 32'h00001234,
            '{op: op::LHU, rd_address: 5'd7, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1030, 32'h1034,
            '{data_valid: 1'b1, data: 32'h00001234, address: 5'd7},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);

        // 8. Wishbone error
        force_error = 1;
        apply_and_advance(
            32'd0, 32'd0,
            '{op: op::LW, rd_address: 5'd8, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1038, 32'h103C,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("Wishbone error",
            32'd0, 32'd0,
            '{op: op::LW, rd_address: 5'd8, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1038, 32'h103C,
            '{data_valid: 1'b0, data: 0, address: 0},
            pipeline_status::VALID, pipeline_status::READY, 32'd0);
        force_error = 0;

        // 9. Illegal instruction
        apply_and_advance(
            32'd0, 32'd0,
            '{op: op::ILLEGAL, rd_address: 0, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1040, 32'h1044,
            pipeline_status::VALID, pipeline_status::READY, 32'd0
        );
        @(posedge clk); #1;
        check_outputs("Illegal instruction",
            32'd0, 32'd0,
            '{op: op::ILLEGAL, rd_address: 0, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1040, 32'h1044,
            '{data_valid: 1'b0, data: 0, address: 0},
            pipeline_status::ILLEGAL_INSTRUCTION, pipeline_status::READY, 32'd0);

        $display("\n=====================================");
        $display("ALL MEMORY_STAGE TESTS PASSED");
        $display("=====================================\n");
        $finish;
    end

endmodule