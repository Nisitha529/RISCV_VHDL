// tb_writeback_stage.sv
`timescale 1ns/1ps

module tb_writeback_stage;

    // ------------------------------------------------------------------
    //  Clock and reset (minimal, since module is mostly combinational)
    // ------------------------------------------------------------------
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

    // ------------------------------------------------------------------
    //  DUT signals
    // ------------------------------------------------------------------
    logic [31:0]   source_data_in;
    logic [31:0]   rd_data_in;
    instruction::t instruction_in;
    logic [31:0]   program_counter_in;
    logic [31:0]   next_program_counter_in;

    logic          external_interrupt_in;
    logic          timer_interrupt_in;

    forwarding::t  forwarding_out;
    pipeline_status::forwards_t  status_forwards_in;
    pipeline_status::backwards_t status_backwards_out;
    logic [31:0]   jump_address_backwards_out;

    // ------------------------------------------------------------------
    //  DUT
    // ------------------------------------------------------------------
    writeback_stage dut (
        .clk, .rst,
        .source_data_in, .rd_data_in, .instruction_in,
        .program_counter_in, .next_program_counter_in,
        .external_interrupt_in, .timer_interrupt_in,
        .forwarding_out,
        .status_forwards_in, .status_backwards_out,
        .jump_address_backwards_out
    );

    // ------------------------------------------------------------------
    //  Helper task
    // ------------------------------------------------------------------
    task check(
        input string test_name,
        input instruction::t instr,
        input logic [31:0] rd_val,
        input logic exp_valid,
        input logic [31:0] exp_data,
        input logic [4:0] exp_addr
    );
        // Apply inputs (combinational, so #0 to settle)
        instruction_in = instr;
        rd_data_in = rd_val;
        #1;
        if (forwarding_out.data_valid !== exp_valid) begin
            $display("[FAIL] %s: data_valid = %b, expected %b", test_name, forwarding_out.data_valid, exp_valid);
            $finish;
        end
        if (forwarding_out.data !== exp_data) begin
            $display("[FAIL] %s: data = %h, expected %h", test_name, forwarding_out.data, exp_data);
            $finish;
        end
        if (forwarding_out.address !== exp_addr) begin
            $display("[FAIL] %s: address = %0d, expected %0d", test_name, forwarding_out.address, exp_addr);
            $finish;
        end
        if (status_backwards_out !== pipeline_status::READY) begin
            $display("[FAIL] %s: status_backwards_out = %0d, expected READY", test_name, status_backwards_out);
            $finish;
        end
        if (jump_address_backwards_out !== 32'd0) begin
            $display("[FAIL] %s: jump_address_backwards_out = %h, expected 0", test_name, jump_address_backwards_out);
            $finish;
        end
        $display("[PASS] %s", test_name);
    endtask

    // ------------------------------------------------------------------
    //  Test sequence
    // ------------------------------------------------------------------
    initial begin
        // Initialise
        source_data_in = 32'd0;
        program_counter_in = 32'd0;
        next_program_counter_in = 32'd0;
        external_interrupt_in = 1'b0;
        timer_interrupt_in = 1'b0;
        status_forwards_in = pipeline_status::VALID;

        wait (rst == 0);
        @(posedge clk); #1;

        // ------------------------------------------------------------------
        // 1. ADD (writes x3) with rd_data_in = 42
        // ------------------------------------------------------------------
        check("ADD writes rd",
            '{op: op::ADD, rd_address: 5'd3, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'd42,
            1'b1, 32'd42, 5'd3);

        // ------------------------------------------------------------------
        // 2. ADDI (writes x5) with rd_data_in = 100
        // ------------------------------------------------------------------
        check("ADDI writes rd",
            '{op: op::ADDI, rd_address: 5'd5, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'd100,
            1'b1, 32'd100, 5'd5);

        // ------------------------------------------------------------------
        // 3. LW (load, writes x2) with rd_data_in = load data
        // ------------------------------------------------------------------
        check("LW writes rd",
            '{op: op::LW, rd_address: 5'd2, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'hDEADBEEF,
            1'b1, 32'hDEADBEEF, 5'd2);

        // ------------------------------------------------------------------
        // 4. SB (store, does not write register) – forwarding should be invalid
        // ------------------------------------------------------------------
        check("SB no write",
            '{op: op::SB, rd_address: 0, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'd0,
            1'b0, 32'd0, 5'd0);

        // ------------------------------------------------------------------
        // 5. BEQ (branch, no write) – forwarding invalid
        // ------------------------------------------------------------------
        check("BEQ no write",
            '{op: op::BEQ, rd_address: 0, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'd0,
            1'b0, 32'd0, 5'd0);

        // ------------------------------------------------------------------
        // 6. JAL (writes x1) with rd_data_in = PC+4 (simulated as 0x1004)
        // ------------------------------------------------------------------
        check("JAL writes rd",
            '{op: op::JAL, rd_address: 5'd1, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h1004,
            1'b1, 32'h1004, 5'd1);

        // ------------------------------------------------------------------
        // 7. LUI (writes x10) with immediate 0x12345000
        // ------------------------------------------------------------------
        check("LUI writes rd",
            '{op: op::LUI, rd_address: 5'd10, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'h12345000,
            1'b1, 32'h12345000, 5'd10);

        // ------------------------------------------------------------------
        // 8. CSRRW (CSR instruction, writes x1) with rd_data_in = value from CSR
        // ------------------------------------------------------------------
        check("CSRRW writes rd",
            '{op: op::CSRRW, rd_address: 5'd1, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(12'h300)},
            32'h00000500,
            1'b1, 32'h00000500, 5'd1);

        // ------------------------------------------------------------------
        // 9. ILLEGAL instruction – does not write rd
        // ------------------------------------------------------------------
        check("Illegal no write",
            '{op: op::ILLEGAL, rd_address: 0, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'd0,
            1'b0, 32'd0, 5'd0);

        // ------------------------------------------------------------------
        // 10. Zero rd address (x0) – should not forward even if instruction writes
        // ------------------------------------------------------------------
        check("Write to x0 invalid",
            '{op: op::ADD, rd_address: 5'd0, rs1_address: 0, rs2_address: 0, immediate: 0, csr: csr::t'(0)},
            32'd999,
            1'b0, 32'd0, 5'd0);

        $display("\n=====================================");
        $display("ALL WRITEBACK_STAGE TESTS PASSED");
        $display("=====================================\n");
        $finish;
    end

endmodule