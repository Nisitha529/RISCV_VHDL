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

module tb_fetch_stage;

    logic clk;
    logic rst;

    wishbone_interface wb();

    logic [31:0] instruction_reg_out;
    logic [31:0] program_counter_reg_out;

    pipeline_status::forwards_t  status_forwards_out;
    pipeline_status::backwards_t status_backwards_in;
    logic [31:0] jump_address_backwards_in;

    int pass_count;
    int fail_count;

    logic [31:0] addr;

    localparam logic [31:0] NOP_INSTR = 32'h00000013;

    fetch_stage dut (
        .clk                       (clk),
        .rst                       (rst),
        .wb                        (wb.master),
        .instruction_reg_out       (instruction_reg_out),
        .program_counter_reg_out   (program_counter_reg_out),
        .status_forwards_out       (status_forwards_out),
        .status_backwards_in       (status_backwards_in),
        .jump_address_backwards_in (jump_address_backwards_in)
    );

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

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

    task automatic check_status(
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

    task automatic clear_bus();
        begin
            wb.ack      = 1'b0;
            wb.err      = 1'b0;
            wb.dat_miso = 32'd0;
        end
    endtask

    task automatic wait_for_request(output logic [31:0] req_addr);
        int timeout;
        begin
            timeout = 0;

            while (!(wb.cyc && wb.stb)) begin
                @(posedge clk);
                timeout++;

                if (timeout > 50) begin
                    $display("[FAIL] timeout waiting for Wishbone request");
                    fail_count++;
                    req_addr = 32'hXXXX_XXXX;
                    return;
                end
            end

            #1;
            req_addr = wb.adr;
        end
    endtask

    task automatic respond_ok(input logic [31:0] instr);
        begin
            @(negedge clk);
            wb.dat_miso = instr;
            wb.ack      = 1'b1;
            wb.err      = 1'b0;

            @(posedge clk);
            #1;

            @(negedge clk);
            clear_bus();
        end
    endtask

    task automatic respond_err();
        begin
            @(negedge clk);
            wb.dat_miso = 32'hDEAD_DEAD;
            wb.ack      = 1'b0;
            wb.err      = 1'b1;

            @(posedge clk);
            #1;

            @(negedge clk);
            clear_bus();
        end
    endtask

    task automatic fetch_ok(
        input string name,
        input logic [31:0] expected_addr,
        input logic [31:0] instr
    );
        begin
            $display("\n--- %s ---", name);

            wait_for_request(addr);

            check32({name, " request address"}, addr, expected_addr);
            check_bit({name, " wb.we"}, wb.we, 1'b0);
            check32({name, " wb.sel"}, {28'd0, wb.sel}, 32'h0000_000F);

            respond_ok(instr);

            check32({name, " instruction"}, instruction_reg_out, instr);
            check32({name, " pc"}, program_counter_reg_out, expected_addr);
            check_status({name, " status"}, status_forwards_out, pipeline_status::VALID);
        end
    endtask

    task automatic fetch_err(
        input string name,
        input logic [31:0] expected_addr
    );
        begin
            $display("\n--- %s ---", name);

            wait_for_request(addr);

            check32({name, " request address"}, addr, expected_addr);

            respond_err();

            check32({name, " instruction NOP"}, instruction_reg_out, NOP_INSTR);
            check32({name, " pc"}, program_counter_reg_out, expected_addr);
            check_status({name, " status FETCH_FAULT"}, status_forwards_out, pipeline_status::FETCH_FAULT);
        end
    endtask

    task automatic hold_stall_before_first_request();
        begin
            $display("\n--- STALL before first request ---");

            @(negedge clk);
            status_backwards_in = pipeline_status::STALL;
            rst = 1'b0;

            repeat (3) begin
                @(posedge clk);
                #1;
                check_bit("no request during initial STALL cyc", wb.cyc, 1'b0);
                check_bit("no request during initial STALL stb", wb.stb, 1'b0);
                check_status("initial STALL keeps BUBBLE", status_forwards_out, pipeline_status::BUBBLE);
            end

            @(negedge clk);
            status_backwards_in = pipeline_status::READY;
        end
    endtask

    task automatic stall_with_outstanding_request(
        input logic [31:0] expected_addr,
        input logic [31:0] instr
    );
        begin
            $display("\n--- STALL while request outstanding: buffer response ---");

            wait_for_request(addr);
            check32("outstanding request address before STALL", addr, expected_addr);

            @(negedge clk);
            status_backwards_in = pipeline_status::STALL;
            wb.dat_miso         = instr;
            wb.ack              = 1'b1;
            wb.err              = 1'b0;

            @(posedge clk);
            #1;

            @(negedge clk);
            clear_bus();

            repeat (2) begin
                @(posedge clk);
                #1;
                check_bit("no new request while buffered/stalled cyc", wb.cyc, 1'b0);
                check_bit("no new request while buffered/stalled stb", wb.stb, 1'b0);
            end

            @(negedge clk);
            status_backwards_in = pipeline_status::READY;

            @(posedge clk);
            #1;

            check32("buffered instruction emitted", instruction_reg_out, instr);
            check32("buffered pc emitted", program_counter_reg_out, expected_addr);
            check_status("buffered status VALID", status_forwards_out, pipeline_status::VALID);
        end
    endtask

    task automatic jump_with_outstanding_request(
        input logic [31:0] old_expected_addr,
        input logic [31:0] jump_addr,
        input logic [31:0] stale_instr
    );
        begin
            $display("\n--- JUMP while request outstanding: stale response discarded ---");

            wait_for_request(addr);
            check32("old outstanding request address", addr, old_expected_addr);

            @(negedge clk);
            status_backwards_in       = pipeline_status::JUMP;
            jump_address_backwards_in = jump_addr;

            @(posedge clk);
            #1;

            check32("jump flush instruction", instruction_reg_out, NOP_INSTR);
            check32("jump flush pc", program_counter_reg_out, jump_addr);
            check_status("jump flush status", status_forwards_out, pipeline_status::BUBBLE);

            @(negedge clk);
            status_backwards_in       = pipeline_status::READY;
            jump_address_backwards_in = 32'd0;

            // Respond to old request. It must be killed.
            wb.dat_miso = stale_instr;
            wb.ack      = 1'b1;
            wb.err      = 1'b0;

            @(posedge clk);
            #1;

            check32("stale response ignored instruction", instruction_reg_out, NOP_INSTR);
            check_status("stale response ignored status", status_forwards_out, pipeline_status::BUBBLE);

            @(negedge clk);
            clear_bus();
        end
    endtask

    initial begin
        pass_count = 0;
        fail_count = 0;

        status_backwards_in       = pipeline_status::READY;
        jump_address_backwards_in = 32'd0;
        clear_bus();

        rst = 1'b1;
        repeat (3) @(posedge clk);
        #1;

        check32("reset instruction", instruction_reg_out, NOP_INSTR);
        check32("reset pc", program_counter_reg_out, constants::RESET_ADDRESS);
        check_status("reset status", status_forwards_out, pipeline_status::BUBBLE);
        check_bit("reset wb.cyc", wb.cyc, 1'b0);
        check_bit("reset wb.stb", wb.stb, 1'b0);
        check_bit("reset wb.we",  wb.we,  1'b0);

        hold_stall_before_first_request();

        fetch_ok("fetch reset address",
                 constants::RESET_ADDRESS,
                 32'h00A00093);

        fetch_ok("fetch pc+4",
                 constants::RESET_ADDRESS + 32'd4,
                 32'h01400113);

        fetch_ok("fetch pc+8",
                 constants::RESET_ADDRESS + 32'd8,
                 32'h002081B3);

        fetch_err("fetch fault",
                  constants::RESET_ADDRESS + 32'd12);

        fetch_ok("fetch after fault",
                 constants::RESET_ADDRESS + 32'd16,
                 32'h00000013);

        stall_with_outstanding_request(
            constants::RESET_ADDRESS + 32'd20,
            32'h11111113
        );

        fetch_ok("fetch after buffered instruction",
                 constants::RESET_ADDRESS + 32'd24,
                 32'h22222213);

        jump_with_outstanding_request(
            constants::RESET_ADDRESS + 32'd28,
            32'h0000_0100,
            32'hBAD0_BAD0
        );

        fetch_ok("fetch jump target",
                 32'h0000_0100,
                 32'h33333313);

        fetch_ok("fetch jump target + 4",
                 32'h0000_0104,
                 32'h44444413);

        jump_with_outstanding_request(
            32'h0000_0108,
            32'h0000_0200,
            32'hBAD1_BAD1
        );

        fetch_ok("fetch second jump target",
                 32'h0000_0200,
                 32'h55555513);

        fetch_ok("fetch second jump target + 4",
                 32'h0000_0204,
                 32'h66666613);

        $display("\n========================================");
        $display("COMPREHENSIVE FETCH_STAGE TEST SUMMARY");
        $display("PASSED: %0d", pass_count);
        $display("FAILED: %0d", fail_count);
        $display("========================================");

        if (fail_count == 0) begin
            $display("ALL COMPREHENSIVE FETCH_STAGE TESTS PASSED");
            $finish;
        end else begin
            $display("COMPREHENSIVE FETCH_STAGE TESTS FAILED");
            $fatal;
        end
    end

    initial begin
        $dumpfile("tb_fetch_stage.vcd");
        $dumpvars(0, tb_fetch_stage);
    end

    initial begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] Simulation timeout");
        $fatal;
    end

endmodule