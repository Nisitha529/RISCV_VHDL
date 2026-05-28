`timescale 1ns/1ps

module tb_writeback_stage;

    logic clk;
    logic rst;

    logic [31:0]   source_data_in;
    logic [31:0]   rd_data_in;
    instruction::t instruction_in;
    logic [31:0]   program_counter_in;
    logic [31:0]   next_program_counter_in;

    logic external_interrupt_in;
    logic timer_interrupt_in;

    forwarding::t forwarding_out;

    pipeline_status::forwards_t  status_forwards_in;
    pipeline_status::backwards_t status_backwards_out;
    logic [31:0] jump_address_backwards_out;

    int pass_count;
    int fail_count;

    localparam logic [11:0] CSR_MSTATUS = 12'h300;
    localparam logic [11:0] CSR_MIE     = 12'h304;
    localparam logic [11:0] CSR_MTVEC   = 12'h305;
    localparam logic [11:0] CSR_MEPC    = 12'h341;
    localparam logic [11:0] CSR_MCAUSE  = 12'h342;
    localparam logic [11:0] CSR_MTVAL   = 12'h343;
    localparam logic [11:0] CSR_MIP     = 12'h344;

    localparam logic [31:0] MSTATUS_MIE  = 32'h0000_0008;
    localparam logic [31:0] MSTATUS_MPIE = 32'h0000_0080;

    localparam logic [31:0] MIE_MTIE = 32'h0000_0080;
    localparam logic [31:0] MIE_MEIE = 32'h0000_0800;

    localparam logic [31:0] MCAUSE_INSTR_MISALIGNED = 32'd0;
    localparam logic [31:0] MCAUSE_INSTR_FAULT      = 32'd1;
    localparam logic [31:0] MCAUSE_ILLEGAL          = 32'd2;
    localparam logic [31:0] MCAUSE_BREAKPOINT       = 32'd3;
    localparam logic [31:0] MCAUSE_LOAD_MISALIGNED  = 32'd4;
    localparam logic [31:0] MCAUSE_LOAD_FAULT       = 32'd5;
    localparam logic [31:0] MCAUSE_STORE_MISALIGNED = 32'd6;
    localparam logic [31:0] MCAUSE_STORE_FAULT      = 32'd7;
    localparam logic [31:0] MCAUSE_ECALL_MMODE      = 32'd11;

    localparam logic [31:0] MCAUSE_TIMER_INTERRUPT  = 32'h8000_0007;
    localparam logic [31:0] MCAUSE_EXT_INTERRUPT    = 32'h8000_000B;

    writeback_stage dut (
        .clk                        (clk),
        .rst                        (rst),

        .source_data_in             (source_data_in),
        .rd_data_in                 (rd_data_in),
        .instruction_in             (instruction_in),
        .program_counter_in         (program_counter_in),
        .next_program_counter_in    (next_program_counter_in),

        .external_interrupt_in      (external_interrupt_in),
        .timer_interrupt_in         (timer_interrupt_in),

        .forwarding_out             (forwarding_out),

        .status_forwards_in         (status_forwards_in),
        .status_backwards_out       (status_backwards_out),
        .jump_address_backwards_out (jump_address_backwards_out)
    );

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    function automatic instruction::t make_instr(
        input op::t        op_i,
        input logic [4:0]  rd_i,
        input logic [4:0]  rs1_i,
        input logic [4:0]  rs2_i,
        input logic [11:0] csr_i,
        input logic [31:0] imm_i
    );
        begin
            make_instr = '{
                op:          op_i,
                rd_address:  rd_i,
                rs1_address: rs1_i,
                rs2_address: rs2_i,
                csr:         csr::t'(csr_i),
                immediate:   imm_i
            };
        end
    endfunction

    task automatic drive_bubble_now();
        begin
            source_data_in          = 32'd0;
            rd_data_in              = 32'd0;
            instruction_in          = instruction::NOP;
            program_counter_in      = 32'd0;
            next_program_counter_in = 32'd0;
            status_forwards_in      = pipeline_status::BUBBLE;
            external_interrupt_in   = 1'b0;
            timer_interrupt_in      = 1'b0;
        end
    endtask

    task automatic drive_bubble_cycle();
        begin
            @(negedge clk);
            drive_bubble_now();

            @(posedge clk);
            #1;
        end
    endtask

    task automatic check32(
        input string name,
        input logic [31:0] actual,
        input logic [31:0] expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=0x%08h expected=0x%08h", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check5(
        input string name,
        input logic [4:0] actual,
        input logic [4:0] expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_bit(
        input string name,
        input logic actual,
        input logic expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0b expected=%0b", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_bwd_status(
        input string name,
        input pipeline_status::backwards_t actual,
        input pipeline_status::backwards_t expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_forwarding(
        input string name,
        input logic expected_valid,
        input logic [4:0] expected_addr,
        input logic [31:0] expected_data
    );
        begin
            check_bit({name, " forwarding valid"}, forwarding_out.data_valid, expected_valid);
            check5({name, " forwarding addr"}, forwarding_out.address, expected_addr);
            check32({name, " forwarding data"}, forwarding_out.data, expected_data);
        end
    endtask

    task automatic drive_instruction(
        input string name,
        input op::t op_i,
        input logic [4:0] rd_i,
        input logic [31:0] rd_data_i,
        input logic [31:0] source_data_i,
        input logic [11:0] csr_i,
        input logic [31:0] pc_i,
        input pipeline_status::forwards_t status_i
    );
        begin
            $display("\n--- %s ---", name);

            @(negedge clk);
            instruction_in          = make_instr(op_i, rd_i, 5'd1, 5'd2, csr_i, 32'd0);
            rd_data_in              = rd_data_i;
            source_data_in          = source_data_i;
            program_counter_in      = pc_i;
            next_program_counter_in = pc_i + 32'd4;
            status_forwards_in      = status_i;
            external_interrupt_in   = 1'b0;
            timer_interrupt_in      = 1'b0;

            @(posedge clk);
            #1;
        end
    endtask

    task automatic test_normal_wb(
        input string name,
        input op::t op_i,
        input logic [4:0] rd_i,
        input logic [31:0] rd_data_i
    );
        begin
            drive_instruction(name, op_i, rd_i, rd_data_i, 32'd0, 12'h000, 32'h1000, pipeline_status::VALID);

            check_forwarding(name, (rd_i != 5'd0), rd_i, rd_data_i);
            check_bwd_status({name, " backward"}, status_backwards_out, pipeline_status::READY);
            check32({name, " jump addr"}, jump_address_backwards_out, 32'd0);

            drive_bubble_cycle();
        end
    endtask

    task automatic test_no_wb(
        input string name,
        input op::t op_i
    );
        begin
            drive_instruction(name, op_i, 5'd7, 32'hABCD_EF01, 32'd0, 12'h000, 32'h1100, pipeline_status::VALID);

            check_forwarding(name, 1'b0, 5'd7, 32'hABCD_EF01);
            check_bwd_status({name, " backward"}, status_backwards_out, pipeline_status::READY);
            check32({name, " jump addr"}, jump_address_backwards_out, 32'd0);

            drive_bubble_cycle();
        end
    endtask

    task automatic csr_write(
        input string name,
        input op::t csr_op_i,
        input logic [11:0] csr_i,
        input logic [31:0] source_i,
        input logic [4:0] rd_i,
        input logic [31:0] expected_old
    );
        begin
            drive_instruction(name, csr_op_i, rd_i, 32'd0, source_i, csr_i, 32'h2000, pipeline_status::VALID);

            check_forwarding(name, (rd_i != 5'd0), rd_i, expected_old);
            check_bwd_status({name, " backward"}, status_backwards_out, pipeline_status::READY);
            check32({name, " jump addr"}, jump_address_backwards_out, 32'd0);

            drive_bubble_cycle();
        end
    endtask

    task automatic csr_read_expect(
        input string name,
        input logic [11:0] csr_i,
        input logic [31:0] expected_value
    );
        begin
            drive_instruction(name, op::CSRRS, 5'd10, 32'd0, 32'd0, csr_i, 32'h2100, pipeline_status::VALID);

            check_forwarding(name, 1'b1, 5'd10, expected_value);
            check_bwd_status({name, " backward"}, status_backwards_out, pipeline_status::READY);
            check32({name, " jump addr"}, jump_address_backwards_out, 32'd0);

            drive_bubble_cycle();
        end
    endtask

    task automatic expect_trap(
        input string name,
        input op::t op_i,
        input pipeline_status::forwards_t status_i,
        input logic [31:0] pc_i,
        input logic [31:0] rd_data_i,
        input logic [31:0] expected_mtvec,
        input logic [31:0] expected_mcause,
        input logic [31:0] expected_mtval
    );
        begin
            drive_instruction(name, op_i, 5'd8, rd_data_i, 32'd0, 12'h000, pc_i, status_i);

            check_forwarding(name, 1'b0, 5'd8, rd_data_i);
            check_bwd_status({name, " redirect"}, status_backwards_out, pipeline_status::JUMP);
            check32({name, " jump mtvec"}, jump_address_backwards_out, expected_mtvec);

            drive_bubble_cycle();

            csr_read_expect({name, " read mepc"},   CSR_MEPC,   pc_i);
            csr_read_expect({name, " read mcause"}, CSR_MCAUSE, expected_mcause);
            csr_read_expect({name, " read mtval"},  CSR_MTVAL,  expected_mtval);
        end
    endtask

    task automatic expect_interrupt(
        input string name,
        input logic timer_irq,
        input logic external_irq,
        input logic [31:0] pc_i,
        input logic [31:0] expected_mtvec,
        input logic [31:0] expected_mcause
    );
        begin
            $display("\n--- %s ---", name);

            @(negedge clk);
            instruction_in          = make_instr(op::ADD, 5'd9, 5'd1, 5'd2, 12'h000, 32'd0);
            rd_data_in              = 32'h1111_2222;
            source_data_in          = 32'd0;
            program_counter_in      = pc_i;
            next_program_counter_in = pc_i + 32'd4;
            status_forwards_in      = pipeline_status::VALID;
            timer_interrupt_in      = timer_irq;
            external_interrupt_in   = external_irq;

            @(posedge clk);
            #1;

            check_forwarding(name, 1'b0, 5'd9, 32'h1111_2222);
            check_bwd_status({name, " redirect"}, status_backwards_out, pipeline_status::JUMP);
            check32({name, " jump mtvec"}, jump_address_backwards_out, expected_mtvec);

            drive_bubble_cycle();

            csr_read_expect({name, " read mepc"},   CSR_MEPC,   pc_i);
            csr_read_expect({name, " read mcause"}, CSR_MCAUSE, expected_mcause);
        end
    endtask

    initial begin
        pass_count = 0;
        fail_count = 0;

        drive_bubble_now();

        rst = 1'b1;
        repeat (3) @(posedge clk);
        #1;

        check_forwarding("reset", 1'b0, 5'd0, 32'd0);
        check_bwd_status("reset backward", status_backwards_out, pipeline_status::READY);
        check32("reset jump", jump_address_backwards_out, 32'd0);

        rst = 1'b0;
        drive_bubble_cycle();

        // --------------------------------------------------------------
        // Normal RV32I writeback-producing instructions
        // --------------------------------------------------------------
        test_normal_wb("ADD writeback",   op::ADD,   5'd1, 32'h0000_001E);
        test_normal_wb("SUB writeback",   op::SUB,   5'd2, 32'h0000_000A);
        test_normal_wb("ADDI writeback",  op::ADDI,  5'd3, 32'h0000_1234);
        test_normal_wb("LUI writeback",   op::LUI,   5'd4, 32'h1234_5000);
        test_normal_wb("AUIPC writeback", op::AUIPC, 5'd5, 32'h0000_4000);
        test_normal_wb("JAL writeback",   op::JAL,   5'd6, 32'h0000_2004);
        test_normal_wb("JALR writeback",  op::JALR,  5'd7, 32'h0000_3004);
        test_normal_wb("LW writeback",    op::LW,    5'd8, 32'hDEAD_BEEF);
        test_normal_wb("LB writeback",    op::LB,    5'd9, 32'hFFFF_FF80);
        test_normal_wb("LHU writeback",   op::LHU,   5'd10, 32'h0000_ABCD);

        // x0 must never be forwarded as valid.
        test_normal_wb("ADD x0 no writeback", op::ADD, 5'd0, 32'hCAFE_BABE);

        // --------------------------------------------------------------
        // Non-register-writing instructions
        // --------------------------------------------------------------
        test_no_wb("SW no writeback",     op::SW);
        test_no_wb("SB no writeback",     op::SB);
        test_no_wb("SH no writeback",     op::SH);
        test_no_wb("BEQ no writeback",    op::BEQ);
        test_no_wb("BNE no writeback",    op::BNE);
        test_no_wb("FENCE no writeback",  op::FENCE);
        test_no_wb("FENCE_I no writeback",op::FENCE_I);
        test_no_wb("WFI no writeback",    op::WFI);

        // BUBBLE should not write or redirect.
        drive_instruction("BUBBLE no writeback", op::ADD, 5'd11, 32'h9999_9999, 32'd0, 12'h000, 32'h1200, pipeline_status::BUBBLE);
        check_forwarding("BUBBLE no writeback", 1'b0, 5'd11, 32'h9999_9999);
        check_bwd_status("BUBBLE backward", status_backwards_out, pipeline_status::READY);
        check32("BUBBLE jump", jump_address_backwards_out, 32'd0);
        drive_bubble_cycle();

        // --------------------------------------------------------------
        // CSR read/write functionality
        // --------------------------------------------------------------
        csr_read_expect("initial mtvec", CSR_MTVEC, 32'd0);

        csr_write("CSRRW mtvec = 0x80000100", op::CSRRW, CSR_MTVEC, 32'h8000_0100, 5'd12, 32'd0);
        csr_read_expect("read mtvec after CSRRW", CSR_MTVEC, 32'h8000_0100);

        csr_write("CSRRS mie set MTIE", op::CSRRS, CSR_MIE, MIE_MTIE, 5'd13, 32'd0);
        csr_read_expect("read mie MTIE", CSR_MIE, MIE_MTIE);

        csr_write("CSRRS mie set MEIE", op::CSRRS, CSR_MIE, MIE_MEIE, 5'd14, MIE_MTIE);
        csr_read_expect("read mie MTIE+MEIE", CSR_MIE, MIE_MTIE | MIE_MEIE);

        csr_write("CSRRC mie clear MTIE", op::CSRRC, CSR_MIE, MIE_MTIE, 5'd15, MIE_MTIE | MIE_MEIE);
        csr_read_expect("read mie only MEIE", CSR_MIE, MIE_MEIE);

        csr_write("CSRRSI mie set zimm bit0", op::CSRRSI, CSR_MIE, 32'h0000_0001, 5'd16, MIE_MEIE);
        csr_read_expect("read mie MEIE plus bit0", CSR_MIE, MIE_MEIE | 32'h1);

        csr_write("CSRRCI mie clear zimm bit0", op::CSRRCI, CSR_MIE, 32'h0000_0001, 5'd17, MIE_MEIE | 32'h1);
        csr_read_expect("read mie MEIE restored", CSR_MIE, MIE_MEIE);

        csr_write("CSRRWI mstatus MIE", op::CSRRWI, CSR_MSTATUS, MSTATUS_MIE, 5'd18, 32'd0);
        csr_read_expect("read mstatus MIE", CSR_MSTATUS, MSTATUS_MIE);

        // --------------------------------------------------------------
        // Exceptions and traps
        // mtvec currently 0x80000100
        // --------------------------------------------------------------
        expect_trap("FETCH_MISALIGNED trap",
                    op::ADD,
                    pipeline_status::FETCH_MISALIGNED,
                    32'h3000,
                    32'h3002,
                    32'h8000_0100,
                    MCAUSE_INSTR_MISALIGNED,
                    32'h3004);

        expect_trap("FETCH_FAULT trap",
                    op::ADD,
                    pipeline_status::FETCH_FAULT,
                    32'h3010,
                    32'h0,
                    32'h8000_0100,
                    MCAUSE_INSTR_FAULT,
                    32'h3010);

        expect_trap("ILLEGAL trap",
                    op::ILLEGAL,
                    pipeline_status::ILLEGAL_INSTRUCTION,
                    32'h3020,
                    32'h0,
                    32'h8000_0100,
                    MCAUSE_ILLEGAL,
                    32'h0);

        expect_trap("LOAD_MISALIGNED trap",
                    op::LW,
                    pipeline_status::LOAD_MISALIGNED,
                    32'h3030,
                    32'h0000_0802,
                    32'h8000_0100,
                    MCAUSE_LOAD_MISALIGNED,
                    32'h0000_0802);

        expect_trap("LOAD_FAULT trap",
                    op::LW,
                    pipeline_status::LOAD_FAULT,
                    32'h3040,
                    32'h0000_0A00,
                    32'h8000_0100,
                    MCAUSE_LOAD_FAULT,
                    32'h0000_0A00);

        expect_trap("STORE_MISALIGNED trap",
                    op::SW,
                    pipeline_status::STORE_MISALIGNED,
                    32'h3050,
                    32'h0000_0902,
                    32'h8000_0100,
                    MCAUSE_STORE_MISALIGNED,
                    32'h0000_0902);

        expect_trap("STORE_FAULT trap",
                    op::SW,
                    pipeline_status::STORE_FAULT,
                    32'h3060,
                    32'h0000_0B00,
                    32'h8000_0100,
                    MCAUSE_STORE_FAULT,
                    32'h0000_0B00);

        expect_trap("ECALL trap",
                    op::ECALL,
                    pipeline_status::VALID,
                    32'h3070,
                    32'h0,
                    32'h8000_0100,
                    MCAUSE_ECALL_MMODE,
                    32'h0);

        expect_trap("EBREAK trap",
                    op::EBREAK,
                    pipeline_status::VALID,
                    32'h3080,
                    32'h0,
                    32'h8000_0100,
                    MCAUSE_BREAKPOINT,
                    32'h0);

        // --------------------------------------------------------------
        // MRET
        // Set mepc, then MRET must jump to mepc.
        // --------------------------------------------------------------
        csr_write("CSRRW mepc = 0x90000000", op::CSRRW, CSR_MEPC, 32'h9000_0000, 5'd19, 32'h3080);

        drive_instruction("MRET redirect", op::MRET, 5'd0, 32'd0, 32'd0, 12'h000, 32'h4000, pipeline_status::VALID);
        check_forwarding("MRET redirect", 1'b0, 5'd0, 32'd0);
        check_bwd_status("MRET backward jump", status_backwards_out, pipeline_status::JUMP);
        check32("MRET jump mepc", jump_address_backwards_out, 32'h9000_0000);
        drive_bubble_cycle();

        // --------------------------------------------------------------
        // Interrupts
        // Need mstatus.MIE=1 and mie bits enabled.
        // Current mie has only MEIE from earlier. Set both.
        // --------------------------------------------------------------
        csr_write("Enable mstatus MIE", op::CSRRW, CSR_MSTATUS, MSTATUS_MIE, 5'd20, MSTATUS_MPIE);
        csr_write("Enable mie MTIE+MEIE", op::CSRRW, CSR_MIE, MIE_MTIE | MIE_MEIE, 5'd21, MIE_MEIE);

        expect_interrupt("timer interrupt trap",
                         1'b1,
                         1'b0,
                         32'h5000,
                         32'h8000_0100,
                         MCAUSE_TIMER_INTERRUPT);

        // Re-enable MIE because trap clears mstatus.MIE.
        csr_write("Re-enable mstatus MIE after timer trap", op::CSRRW, CSR_MSTATUS, MSTATUS_MIE, 5'd22, MSTATUS_MPIE);

        expect_interrupt("external interrupt trap",
                         1'b0,
                         1'b1,
                         32'h5010,
                         32'h8000_0100,
                         MCAUSE_EXT_INTERRUPT);

        // External has priority over timer if both are pending.
        csr_write("Re-enable mstatus MIE after external trap", op::CSRRW, CSR_MSTATUS, MSTATUS_MIE, 5'd23, MSTATUS_MPIE);

        expect_interrupt("external priority over timer",
                         1'b1,
                         1'b1,
                         32'h5020,
                         32'h8000_0100,
                         MCAUSE_EXT_INTERRUPT);

        $display("\n========================================");
        $display("COMPREHENSIVE WRITEBACK_STAGE TEST SUMMARY");
        $display("PASSED: %0d", pass_count);
        $display("FAILED: %0d", fail_count);
        $display("========================================");

        if (fail_count == 0) begin
            $display("ALL COMPREHENSIVE WRITEBACK_STAGE TESTS PASSED");
            $finish;
        end else begin
            $display("COMPREHENSIVE WRITEBACK_STAGE TESTS FAILED");
            $fatal;
        end
    end

    initial begin
        $dumpfile("tb_writeback_stage.vcd");
        $dumpvars(0, tb_writeback_stage);
    end

    initial begin
        repeat (10000) @(posedge clk);
        $display("[FAIL] Simulation timeout");
        $fatal;
    end

endmodule