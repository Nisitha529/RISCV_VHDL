`timescale 1ns/1ps

interface wishbone_interface;
    logic        cyc;
    logic        stb;
    logic        ack;
    logic        err;
    logic [31:0] adr;
    logic [3:0]  sel;
    logic        we;
    logic [31:0] dat_mosi;
    logic [31:0] dat_miso;

    modport master (
        output cyc,
        output stb,
        input  ack,
        input  err,
        output adr,
        output sel,
        output we,
        output dat_mosi,
        input  dat_miso
    );
endinterface

module tb_memory_stage;

    logic clk, rst;

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

    int pass_count;
    int fail_count;

    memory_stage dut (
        .clk                         (clk),
        .rst                         (rst),
        .wb                          (wb.master),

        .source_data_in              (source_data_in),
        .rd_data_in                  (rd_data_in),
        .instruction_in              (instruction_in),
        .program_counter_in          (program_counter_in),
        .next_program_counter_in     (next_program_counter_in),

        .source_data_reg_out         (source_data_reg_out),
        .rd_data_reg_out             (rd_data_reg_out),
        .instruction_reg_out         (instruction_reg_out),
        .program_counter_reg_out     (program_counter_reg_out),
        .next_program_counter_reg_out(next_program_counter_reg_out),
        .forwarding_out              (forwarding_out),

        .status_forwards_in          (status_forwards_in),
        .status_forwards_out         (status_forwards_out),
        .status_backwards_in         (status_backwards_in),
        .status_backwards_out        (status_backwards_out),
        .jump_address_backwards_in   (jump_address_backwards_in),
        .jump_address_backwards_out  (jump_address_backwards_out)
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
        input logic [31:0] imm_i
    );
        begin
            make_instr = '{
                op:          op_i,
                rd_address:  rd_i,
                rs1_address: rs1_i,
                rs2_address: rs2_i,
                csr:         csr::t'(12'h000),
                immediate:   imm_i
            };
        end
    endfunction

    task automatic clear_bus();
        begin
            wb.ack      = 1'b0;
            wb.err      = 1'b0;
            wb.dat_miso = 32'd0;
        end
    endtask

    task automatic drive_bubble_now();
        begin
            source_data_in            = 32'd0;
            rd_data_in                = 32'd0;
            instruction_in            = instruction::NOP;
            program_counter_in        = 32'd0;
            next_program_counter_in   = 32'd0;
            status_forwards_in        = pipeline_status::BUBBLE;
            status_backwards_in       = pipeline_status::READY;
            jump_address_backwards_in = 32'd0;
            clear_bus();
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

    task automatic check32(input string name, input logic [31:0] actual, input logic [31:0] expected);
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

    task automatic check4(input string name, input logic [3:0] actual, input logic [3:0] expected);
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=0b%04b expected=0b%04b", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_bit(input string name, input logic actual, input logic expected);
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

    task automatic check_op(input string name, input op::t actual, input op::t expected);
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

    task automatic check_fwd_status(
        input string name,
        input pipeline_status::forwards_t actual,
        input pipeline_status::forwards_t expected
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

    task automatic drive_non_memory(
        input string name,
        input op::t op_i,
        input logic [4:0] rd_i,
        input logic [31:0] rd_val,
        input logic [31:0] pc_i
    );
        begin
            $display("\n--- %s ---", name);

            @(negedge clk);
            source_data_in            = 32'd0;
            rd_data_in                = rd_val;
            instruction_in            = make_instr(op_i, rd_i, 5'd1, 5'd2, 32'd0);
            program_counter_in        = pc_i;
            next_program_counter_in   = pc_i + 32'd4;
            status_forwards_in        = pipeline_status::VALID;
            status_backwards_in       = pipeline_status::READY;
            jump_address_backwards_in = 32'd0;
            clear_bus();

            @(posedge clk);
            #1;

            check_op({name, " op"}, instruction_reg_out.op, op_i);
            check32({name, " rd"}, rd_data_reg_out, rd_val);
            check32({name, " pc"}, program_counter_reg_out, pc_i);
            check32({name, " next_pc"}, next_program_counter_reg_out, pc_i + 32'd4);
            check_bit({name, " forwarding valid"}, forwarding_out.data_valid, rd_i != 5'd0);
            check32({name, " forwarding data"}, forwarding_out.data, rd_val);
            check_fwd_status({name, " status"}, status_forwards_out, pipeline_status::VALID);
            check_bwd_status({name, " backward"}, status_backwards_out, pipeline_status::READY);
            check_bit({name, " wb.cyc"}, wb.cyc, 1'b0);
            check_bit({name, " wb.stb"}, wb.stb, 1'b0);

            drive_bubble_cycle();
        end
    endtask

    task automatic start_memory_op(
        input string name,
        input op::t op_i,
        input logic [4:0] rd_i,
        input logic [31:0] addr_i,
        input logic [31:0] store_data_i,
        input logic [31:0] pc_i
    );
        begin
            $display("\n--- %s ---", name);

            @(negedge clk);
            source_data_in            = store_data_i;
            rd_data_in                = addr_i;
            instruction_in            = make_instr(op_i, rd_i, 5'd1, 5'd2, 32'd0);
            program_counter_in        = pc_i;
            next_program_counter_in   = pc_i + 32'd4;
            status_forwards_in        = pipeline_status::VALID;
            status_backwards_in       = pipeline_status::READY;
            jump_address_backwards_in = 32'd0;
            clear_bus();

            @(posedge clk);
            #1;
        end
    endtask

    task automatic finish_load_ok(
        input string name,
        input logic [31:0] memory_word,
        input logic [31:0] expected_value,
        input logic [4:0] expected_rd,
        input logic [31:0] expected_pc
    );
        begin
            @(negedge clk);
            wb.dat_miso = memory_word;
            wb.ack      = 1'b1;
            wb.err      = 1'b0;

            @(posedge clk);
            #1;

            check32({name, " loaded value"}, rd_data_reg_out, expected_value);
            check32({name, " pc"}, program_counter_reg_out, expected_pc);
            check_fwd_status({name, " status"}, status_forwards_out, pipeline_status::VALID);
            check_bit({name, " forwarding valid"}, forwarding_out.data_valid, expected_rd != 5'd0);
            check32({name, " forwarding data"}, forwarding_out.data, expected_value);
            check_bwd_status({name, " backward ready"}, status_backwards_out, pipeline_status::READY);

            @(negedge clk);
            drive_bubble_now();

            @(posedge clk);
            #1;
        end
    endtask

    task automatic finish_store_ok(
        input string name,
        input logic [31:0] expected_addr,
        input logic [31:0] expected_pc
    );
        begin
            @(negedge clk);
            wb.ack      = 1'b1;
            wb.err      = 1'b0;
            wb.dat_miso = 32'd0;

            @(posedge clk);
            #1;

            check32({name, " address output"}, rd_data_reg_out, expected_addr);
            check32({name, " pc"}, program_counter_reg_out, expected_pc);
            check_fwd_status({name, " status"}, status_forwards_out, pipeline_status::VALID);
            check_bit({name, " forwarding valid"}, forwarding_out.data_valid, 1'b0);
            check_bwd_status({name, " backward ready"}, status_backwards_out, pipeline_status::READY);

            @(negedge clk);
            drive_bubble_now();

            @(posedge clk);
            #1;
        end
    endtask

    task automatic finish_fault(
        input string name,
        input pipeline_status::forwards_t expected_status
    );
        begin
            @(negedge clk);
            wb.ack      = 1'b0;
            wb.err      = 1'b1;
            wb.dat_miso = 32'hDEAD_DEAD;

            @(posedge clk);
            #1;

            check_fwd_status({name, " fault status"}, status_forwards_out, expected_status);
            check_bit({name, " forwarding invalid"}, forwarding_out.data_valid, 1'b0);
            check_bwd_status({name, " backward ready"}, status_backwards_out, pipeline_status::READY);

            @(negedge clk);
            drive_bubble_now();

            @(posedge clk);
            #1;
        end
    endtask

    task automatic test_load(
        input string name,
        input op::t op_i,
        input logic [4:0] rd_i,
        input logic [31:0] addr_i,
        input logic [31:0] memory_word,
        input logic [31:0] expected_value,
        input logic [3:0] expected_sel
    );
        logic [31:0] pc_i;
        begin
            pc_i = 32'h1000 + pass_count;

            start_memory_op(name, op_i, rd_i, addr_i, 32'd0, pc_i);

            check_bit({name, " request cyc"}, wb.cyc, 1'b1);
            check_bit({name, " request stb"}, wb.stb, 1'b1);
            check_bit({name, " request we"}, wb.we, 1'b0);
            check32({name, " request addr"}, wb.adr, addr_i);
            check4({name, " request sel"}, wb.sel, expected_sel);
            check_fwd_status({name, " bubble while busy"}, status_forwards_out, pipeline_status::BUBBLE);
            check_bwd_status({name, " stall while busy"}, status_backwards_out, pipeline_status::STALL);
            check_bit({name, " no forwarding while busy"}, forwarding_out.data_valid, 1'b0);

            finish_load_ok(name, memory_word, expected_value, rd_i, pc_i);
        end
    endtask

    task automatic test_store(
        input string name,
        input op::t op_i,
        input logic [31:0] addr_i,
        input logic [31:0] source_i,
        input logic [31:0] expected_mosi,
        input logic [3:0] expected_sel
    );
        logic [31:0] pc_i;
        begin
            pc_i = 32'h2000 + pass_count;

            start_memory_op(name, op_i, 5'd0, addr_i, source_i, pc_i);

            check_bit({name, " request cyc"}, wb.cyc, 1'b1);
            check_bit({name, " request stb"}, wb.stb, 1'b1);
            check_bit({name, " request we"}, wb.we, 1'b1);
            check32({name, " request addr"}, wb.adr, addr_i);
            check4({name, " request sel"}, wb.sel, expected_sel);
            check32({name, " request data"}, wb.dat_mosi, expected_mosi);
            check_fwd_status({name, " bubble while busy"}, status_forwards_out, pipeline_status::BUBBLE);
            check_bwd_status({name, " stall while busy"}, status_backwards_out, pipeline_status::STALL);

            finish_store_ok(name, addr_i, pc_i);
        end
    endtask

    task automatic test_misaligned(
        input string name,
        input op::t op_i,
        input logic [4:0] rd_i,
        input logic [31:0] addr_i,
        input pipeline_status::forwards_t expected_status
    );
        begin
            start_memory_op(name, op_i, rd_i, addr_i, 32'hAAAA_BBBB, 32'h3000);

            check_bit({name, " no wb.cyc"}, wb.cyc, 1'b0);
            check_bit({name, " no wb.stb"}, wb.stb, 1'b0);
            check_fwd_status({name, " misaligned status"}, status_forwards_out, expected_status);
            check_bit({name, " no forwarding"}, forwarding_out.data_valid, 1'b0);
            check_bwd_status({name, " no stall"}, status_backwards_out, pipeline_status::READY);

            drive_bubble_cycle();
        end
    endtask

    initial begin
        pass_count = 0;
        fail_count = 0;

        drive_bubble_now();

        rst = 1'b1;
        repeat (3) @(posedge clk);
        #1;

        check_op("reset NOP", instruction_reg_out.op, instruction::NOP.op);
        check_fwd_status("reset BUBBLE", status_forwards_out, pipeline_status::BUBBLE);
        check_bwd_status("reset READY", status_backwards_out, pipeline_status::READY);
        check_bit("reset wb.cyc", wb.cyc, 1'b0);
        check_bit("reset wb.stb", wb.stb, 1'b0);

        rst = 1'b0;
        drive_bubble_cycle();

        drive_non_memory("pass ADD result", op::ADD, 5'd5, 32'h1234_5678, 32'h0100);

        test_load("LW",  op::LW,  5'd6, 32'h0000_0800, 32'hAABB_CCDD, 32'hAABB_CCDD, 4'b1111);
        test_load("LB byte0 sign", op::LB, 5'd7, 32'h0000_0800, 32'h1122_3380, 32'hFFFF_FF80, 4'b0001);
        test_load("LB byte1 sign", op::LB, 5'd7, 32'h0000_0801, 32'h1122_8033, 32'hFFFF_FF80, 4'b0010);
        test_load("LBU byte2", op::LBU, 5'd7, 32'h0000_0802, 32'h11AA_2233, 32'h0000_00AA, 4'b0100);
        test_load("LBU byte3", op::LBU, 5'd7, 32'h0000_0803, 32'hAA11_2233, 32'h0000_00AA, 4'b1000);
        test_load("LH low sign", op::LH, 5'd8, 32'h0000_0800, 32'h1234_8001, 32'hFFFF_8001, 4'b0011);
        test_load("LH high sign", op::LH, 5'd8, 32'h0000_0802, 32'h8001_1234, 32'hFFFF_8001, 4'b1100);
        test_load("LHU low", op::LHU, 5'd8, 32'h0000_0800, 32'h1234_8001, 32'h0000_8001, 4'b0011);
        test_load("LHU high", op::LHU, 5'd8, 32'h0000_0802, 32'h8001_1234, 32'h0000_8001, 4'b1100);

        test_store("SW", op::SW, 32'h0000_0900, 32'hDEAD_BEEF, 32'hDEAD_BEEF, 4'b1111);
        test_store("SB byte0", op::SB, 32'h0000_0900, 32'h0000_00AA, 32'h0000_00AA, 4'b0001);
        test_store("SB byte1", op::SB, 32'h0000_0901, 32'h0000_00AA, 32'h0000_AA00, 4'b0010);
        test_store("SB byte2", op::SB, 32'h0000_0902, 32'h0000_00AA, 32'h00AA_0000, 4'b0100);
        test_store("SB byte3", op::SB, 32'h0000_0903, 32'h0000_00AA, 32'hAA00_0000, 4'b1000);
        test_store("SH low", op::SH, 32'h0000_0900, 32'h0000_BEEF, 32'h0000_BEEF, 4'b0011);
        test_store("SH high", op::SH, 32'h0000_0902, 32'h0000_BEEF, 32'hBEEF_0000, 4'b1100);

        test_misaligned("LH misaligned",  op::LH,  5'd1, 32'h0000_0801, pipeline_status::LOAD_MISALIGNED);
        test_misaligned("LHU misaligned", op::LHU, 5'd1, 32'h0000_0801, pipeline_status::LOAD_MISALIGNED);
        test_misaligned("LW misaligned",  op::LW,  5'd1, 32'h0000_0802, pipeline_status::LOAD_MISALIGNED);
        test_misaligned("SH misaligned",  op::SH,  5'd0, 32'h0000_0901, pipeline_status::STORE_MISALIGNED);
        test_misaligned("SW misaligned",  op::SW,  5'd0, 32'h0000_0902, pipeline_status::STORE_MISALIGNED);

        start_memory_op("LOAD_FAULT", op::LW, 5'd9, 32'h0000_0A00, 32'd0, 32'h4000);
        check_bwd_status("LOAD_FAULT busy stall", status_backwards_out, pipeline_status::STALL);
        finish_fault("LOAD_FAULT", pipeline_status::LOAD_FAULT);

        start_memory_op("STORE_FAULT", op::SW, 5'd0, 32'h0000_0A04, 32'hFACE_CAFE, 32'h4004);
        check_bwd_status("STORE_FAULT busy stall", status_backwards_out, pipeline_status::STALL);
        finish_fault("STORE_FAULT", pipeline_status::STORE_FAULT);

        $display("\n--- incoming FETCH_FAULT propagation ---");
        @(negedge clk);
        source_data_in            = 32'd0;
        rd_data_in                = 32'd0;
        instruction_in            = make_instr(op::ADD, 5'd1, 5'd0, 5'd0, 32'd0);
        program_counter_in        = 32'h5000;
        next_program_counter_in   = 32'h5004;
        status_forwards_in        = pipeline_status::FETCH_FAULT;
        status_backwards_in       = pipeline_status::READY;
        jump_address_backwards_in = 32'd0;
        clear_bus();

        @(posedge clk);
        #1;

        check_fwd_status("FETCH_FAULT propagated", status_forwards_out, pipeline_status::FETCH_FAULT);
        check_bit("FETCH_FAULT no forwarding", forwarding_out.data_valid, 1'b0);
        check_op("FETCH_FAULT NOP", instruction_reg_out.op, instruction::NOP.op);

        drive_bubble_cycle();

        $display("\n--- downstream STALL hold ---");
        drive_non_memory("STALL baseline", op::ADD, 5'd10, 32'h1111_2222, 32'h6000);

        @(negedge clk);
        source_data_in            = 32'd0;
        rd_data_in                = 32'h3333_4444;
        instruction_in            = make_instr(op::SUB, 5'd11, 5'd0, 5'd0, 32'd0);
        program_counter_in        = 32'h6004;
        next_program_counter_in   = 32'h6008;
        status_forwards_in        = pipeline_status::VALID;
        status_backwards_in       = pipeline_status::STALL;
        jump_address_backwards_in = 32'hABCD_0000;
        clear_bus();

        @(posedge clk);
        #1;

        check_op("STALL holds op", instruction_reg_out.op, instruction::NOP.op);
        check_bwd_status("STALL backward", status_backwards_out, pipeline_status::STALL);
        check32("STALL jump pass", jump_address_backwards_out, 32'hABCD_0000);

        $display("\n--- downstream JUMP flush ---");
        @(negedge clk);
        status_backwards_in       = pipeline_status::JUMP;
        jump_address_backwards_in = 32'hCAFE_BABE;

        @(posedge clk);
        #1;

        check_op("JUMP flush NOP", instruction_reg_out.op, instruction::NOP.op);
        check_fwd_status("JUMP flush BUBBLE", status_forwards_out, pipeline_status::BUBBLE);
        check_bwd_status("JUMP backward", status_backwards_out, pipeline_status::JUMP);
        check32("JUMP address pass", jump_address_backwards_out, 32'hCAFE_BABE);
        check_bit("JUMP no forwarding", forwarding_out.data_valid, 1'b0);

        $display("\n========================================");
        $display("COMPREHENSIVE MEMORY_STAGE TEST SUMMARY");
        $display("PASSED: %0d", pass_count);
        $display("FAILED: %0d", fail_count);
        $display("========================================");

        if (fail_count == 0) begin
            $display("ALL COMPREHENSIVE MEMORY_STAGE TESTS PASSED");
            $finish;
        end else begin
            $display("COMPREHENSIVE MEMORY_STAGE TESTS FAILED");
            $fatal;
        end
    end

    initial begin
        $dumpfile("tb_memory_stage.vcd");
        $dumpvars(0, tb_memory_stage);
    end

    initial begin
        repeat (10000) @(posedge clk);
        $display("[FAIL] Simulation timeout");
        $fatal;
    end

endmodule