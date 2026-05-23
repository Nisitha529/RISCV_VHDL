// tb_execute_stage.sv – corrected
`timescale 1ns/1ps

module tb_execute_stage;

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

    // DUT signals
    logic [31:0]   rs1_data_in, rs2_data_in;
    instruction::t instruction_in;
    logic [31:0]   program_counter_in;

    logic [31:0]   source_data_reg_out, rd_data_reg_out;
    instruction::t instruction_reg_out;
    logic [31:0]   program_counter_reg_out, next_program_counter_reg_out;
    forwarding::t  forwarding_out;

    pipeline_status::forwards_t  status_forwards_in, status_forwards_out;
    pipeline_status::backwards_t status_backwards_in, status_backwards_out;
    logic [31:0] jump_address_backwards_in, jump_address_backwards_out;

    execute_stage dut (
        .clk, .rst,
        .rs1_data_in, .rs2_data_in, .instruction_in, .program_counter_in,
        .source_data_reg_out, .rd_data_reg_out, .instruction_reg_out,
        .program_counter_reg_out, .next_program_counter_reg_out, .forwarding_out,
        .status_forwards_in, .status_forwards_out,
        .status_backwards_in, .status_backwards_out,
        .jump_address_backwards_in, .jump_address_backwards_out
    );

    task apply_and_check(
        input string test_name,
        input [31:0] rs1, rs2,
        input instruction::t instr,
        input [31:0] pc,
        input [31:0] exp_source,
        input [31:0] exp_rd,
        input [31:0] exp_next_pc,
        input forwarding::t exp_fwd,
        input pipeline_status::backwards_t exp_back_status,
        input [31:0] exp_jump_addr
    );
        begin
            @(negedge clk);
            rs1_data_in = rs1;
            rs2_data_in = rs2;
            instruction_in = instr;
            program_counter_in = pc;
            status_backwards_in = pipeline_status::READY;
            status_forwards_in = pipeline_status::VALID;
            jump_address_backwards_in = 32'd0;
            @(posedge clk);
            #1;
            if (source_data_reg_out !== exp_source) begin
                $display("[FAIL] %s: source_data_reg_out = %h, expected %h", test_name, source_data_reg_out, exp_source);
                $finish;
            end
            if (rd_data_reg_out !== exp_rd) begin
                $display("[FAIL] %s: rd_data_reg_out = %h, expected %h", test_name, rd_data_reg_out, exp_rd);
                $finish;
            end
            if (next_program_counter_reg_out !== exp_next_pc) begin
                $display("[FAIL] %s: next_pc = %h, expected %h", test_name, next_program_counter_reg_out, exp_next_pc);
                $finish;
            end
            if (forwarding_out.data_valid !== exp_fwd.data_valid ||
                forwarding_out.data !== exp_fwd.data ||
                forwarding_out.address !== exp_fwd.address) begin
                $display("[FAIL] %s: forwarding_out mismatch", test_name);
                $finish;
            end
            if (status_backwards_out !== exp_back_status) begin
                $display("[FAIL] %s: status_backwards_out = %0d, expected %0d", test_name, status_backwards_out, exp_back_status);
                $finish;
            end
            if (jump_address_backwards_out !== exp_jump_addr) begin
                $display("[FAIL] %s: jump_address = %h, expected %h", test_name, jump_address_backwards_out, exp_jump_addr);
                $finish;
            end
            $display("[PASS] %s", test_name);
        end
    endtask

    initial begin
        wait (rst == 0);
        @(posedge clk); #1;

        // 1. ADD x3, x1, x2 (x1=10, x2=20)
        apply_and_check("ADD",
            32'd10, 32'd20,
            '{op: op::ADD, rd_address: 3, rs1_address: 1, rs2_address: 2, immediate: 0, csr: csr::t'(0)},
            32'h1000,
            32'd0, 32'd30, 32'h1004,
            '{data_valid: 1'b1, data: 32'd30, address: 3},
            pipeline_status::READY, 32'd0);

        // 2. ADDI x5, x1, 5 (x1=10)
        apply_and_check("ADDI",
            32'd10, 32'd0,
            '{op: op::ADDI, rd_address: 5, rs1_address: 1, rs2_address: 0, immediate: 5, csr: csr::t'(0)},
            32'h1004,
            32'd0, 32'd15, 32'h1008,
            '{data_valid: 1'b1, data: 32'd15, address: 5},
            pipeline_status::READY, 32'd0);

        // 3. SUB x6, x2, x1 (20-10)
        apply_and_check("SUB",
            32'd20, 32'd10,
            '{op: op::SUB, rd_address: 6, rs1_address: 2, rs2_address: 1, immediate: 0, csr: csr::t'(0)},
            32'h1008,
            32'd0, 32'd10, 32'h100C,
            '{data_valid: 1'b1, data: 32'd10, address: 6},
            pipeline_status::READY, 32'd0);

        // 4. BEQ taken (x1=10, x2=10) -> branch taken
        apply_and_check("BEQ taken",
            32'd10, 32'd10,
            '{op: op::BEQ, rd_address: 0, rs1_address: 1, rs2_address: 2, immediate: 8, csr: csr::t'(0)},
            32'h2000,
            32'd0, 32'd0, 32'h2008,
            '{data_valid: 1'b0, data: 0, address: 0},
            pipeline_status::JUMP, 32'h2008);

        // 5. BNE not taken (x1=10, x2=10 -> equal, so no branch)
        apply_and_check("BNE not taken",
            32'd10, 32'd10,
            '{op: op::BNE, rd_address: 0, rs1_address: 1, rs2_address: 2, immediate: 8, csr: csr::t'(0)},
            32'h2004,
            32'd0, 32'd0, 32'h2008,
            '{data_valid: 1'b0, data: 0, address: 0},
            pipeline_status::READY, 32'd0);

        // 6. BNE taken (x1=10, x2=20 -> not equal)
        apply_and_check("BNE taken",
            32'd10, 32'd20,
            '{op: op::BNE, rd_address: 0, rs1_address: 1, rs2_address: 2, immediate: 8, csr: csr::t'(0)},
            32'h2010,
            32'd0, 32'd0, 32'h2018,
            '{data_valid: 1'b0, data: 0, address: 0},
            pipeline_status::JUMP, 32'h2018);

        // 7. JAL x1, +16
        apply_and_check("JAL",
            32'd0, 32'd0,
            '{op: op::JAL, rd_address: 1, rs1_address: 0, rs2_address: 0, immediate: 16, csr: csr::t'(0)},
            32'h3000,
            32'd0, 32'h3004, 32'h3010,
            '{data_valid: 1'b1, data: 32'h3004, address: 1},
            pipeline_status::JUMP, 32'h3010);

        // 8. JALR x2, 8(x3) ; rs1=100
        apply_and_check("JALR",
            32'd100, 32'd0,
            '{op: op::JALR, rd_address: 2, rs1_address: 3, rs2_address: 0, immediate: 8, csr: csr::t'(0)},
            32'h4000,
            32'd0, 32'h4004, 32'd108,
            '{data_valid: 1'b1, data: 32'h4004, address: 2},
            pipeline_status::JUMP, 32'd108);

        // 9. LUI x10, 0x12345
        apply_and_check("LUI",
            32'd0, 32'd0,
            '{op: op::LUI, rd_address: 10, rs1_address: 0, rs2_address: 0, immediate: 32'h12345000, csr: csr::t'(0)},
            32'h5000,
            32'd0, 32'h12345000, 32'h5004,
            '{data_valid: 1'b1, data: 32'h12345000, address: 10},
            pipeline_status::READY, 32'd0);

        // 10. AUIPC x11, 0xABCDE
        apply_and_check("AUIPC",
            32'd0, 32'd0,
            '{op: op::AUIPC, rd_address: 11, rs1_address: 0, rs2_address: 0, immediate: 32'hABCDE000, csr: csr::t'(0)},
            32'h5000,
            32'd0, 32'hABCE3000, 32'h5004,
            '{data_valid: 1'b1, data: 32'hABCE3000, address: 11},
            pipeline_status::READY, 32'd0);

        // 11. Store: SW x5, 16(x6) -> source_data_reg_out = rs2_data_in (42)
        apply_and_check("SW",
            32'd100, 32'd42,
            '{op: op::SW, rd_address: 0, rs1_address: 6, rs2_address: 5, immediate: 16, csr: csr::t'(0)},
            32'h6000,
            32'd42, 32'd0, 32'h6004,
            '{data_valid: 1'b0, data: 0, address: 0},
            pipeline_status::READY, 32'd0);

        // 12. Load: LW x8, 20(x9)
        apply_and_check("LW",
            32'd200, 32'd0,
            '{op: op::LW, rd_address: 8, rs1_address: 9, rs2_address: 0, immediate: 20, csr: csr::t'(0)},
            32'h7000,
            32'd0, 32'd220, 32'h7004,
            '{data_valid: 1'b1, data: 32'd220, address: 8},
            pipeline_status::READY, 32'd0);

        $display("\n=====================================");
        $display("ALL EXECUTE_STAGE TESTS PASSED");
        $display("=====================================\n");
        $finish;
    end

endmodule