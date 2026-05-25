// tb_top_cpu.sv – safe extended test (no hazard interference)
`timescale 1ns/1ps

module tb_top_cpu;

    logic clk, rst;
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    initial begin
        rst = 1;
        repeat (3) @(posedge clk);
        rst = 0;
    end

    wishbone_interface wb_imem();
    wishbone_interface wb_dmem();

    top_cpu dut (
        .clk, .rst,
        .memory_fetch_port(wb_imem.master),
        .memory_mem_port(wb_dmem.master),
        .external_interrupt_in(1'b0),
        .timer_interrupt_in(1'b0)
    );

    // Instruction memory – extended test
    logic [31:0] imem [0:1023];
    initial begin
        for (int i = 0; i < 1024; i++) imem[i] = 32'h00000013;

        // Arithmetic (same as before)
        imem[0] = 32'h00A00093;   // addi x1, x0, 10
        imem[1] = 32'h01400113;   // addi x2, x0, 20
        imem[2] = 32'h002081B3;   // add  x3, x1, x2

        // NOPs to separate phases
        imem[3] = 32'h00000013;
        imem[4] = 32'h00000013;

        // Branch test (does not affect x2 or x3)
        imem[5] = 32'h00108463;   // beq x1, x1, +8 (skip two nops)
        imem[6] = 32'h00000013;   // nop (skipped)
        imem[7] = 32'h00000013;   // nop (skipped)
        imem[8] = 32'h00000013;   // nop (executed)

        // Load/Store test (uses different registers)
        imem[9]  = 32'h10000537;   // lui x5, 0x1000
        imem[10] = 32'h40028293;   // addi x5, x5, 0x400
        imem[11] = 32'h0032A023;   // sw x3, 0(x5)
        imem[12] = 32'h0002A203;   // lw x4, 0(x5)
        imem[13] = 32'h00000013;   // nop

        // Infinite loop to stop
        imem[14] = 32'hFE000EE3;   // beq x0, x0, -4
    end

    always_ff @(negedge clk) begin
        if (rst) begin
            wb_imem.ack <= 1'b0;
            wb_imem.dat_miso <= 32'd0;
        end else begin
            wb_imem.ack <= 1'b0;
            if (wb_imem.cyc && wb_imem.stb && !wb_imem.we) begin
                wb_imem.ack <= 1'b1;
                wb_imem.dat_miso <= imem[wb_imem.adr[11:2]];
            end
        end
    end

    logic [31:0] dmem [0:1023];
    initial for (int i = 0; i < 1024; i++) dmem[i] = 32'h0;

    always_ff @(negedge clk) begin
        if (rst) begin
            wb_dmem.ack <= 1'b0;
            wb_dmem.err <= 1'b0;
            wb_dmem.dat_miso <= 32'd0;
        end else begin
            wb_dmem.ack <= 1'b0;
            wb_dmem.err <= 1'b0;
            if (wb_dmem.cyc && wb_dmem.stb) begin
                wb_dmem.ack <= 1'b1;
                if (wb_dmem.we) begin
                    dmem[wb_dmem.adr[11:2]] <= wb_dmem.dat_mosi;
                end else begin
                    wb_dmem.dat_miso <= dmem[wb_dmem.adr[11:2]];
                end
            end
        end
    end

    task check_register(input int reg_num, input logic [31:0] expected);
        logic [31:0] actual;
        actual = dut.decode_inst.regfile_inst.regs[reg_num];
        if (actual !== expected) begin
            $display("[FAIL] x%d = %0d (expected %0d)", reg_num, actual, expected);
            $finish;
        end else begin
            $display("[PASS] x%d = %0d", reg_num, actual);
        end
    endtask

    task check_memory(input logic [31:0] addr, input logic [31:0] expected);
        logic [31:0] actual;
        actual = dmem[addr[11:2]];
        if (actual !== expected) begin
            $display("[FAIL] Memory[%h] = %h (expected %h)", addr, actual, expected);
            $finish;
        end else begin
            $display("[PASS] Memory[%h] = %h", addr, actual);
        end
    endtask

    initial begin
        // Wait for arithmetic to complete
        repeat (30) @(posedge clk);
        #1;
        $display("\nInitial arithmetic check:");
        check_register(1, 10);
        check_register(2, 20);
        check_register(3, 30);

        // Wait for branch, load/store to complete
        repeat (100) @(posedge clk);
        #1;
        $display("\nExtended test checks:");
        check_register(2, 20);          // branch did not change x2
        check_register(4, 30);          // load value
        check_memory(32'h10000400, 30); // store value

        $display("\n=====================================");
        $display("ALL EXTENDED TESTS PASSED");
        $display("=====================================\n");
        $finish;
    end

    initial begin
        repeat (10000) @(posedge clk);
        $display("\n[FAIL] Timeout\n");
        $finish;
    end

    initial begin
        $dumpfile("tb_top_cpu.vcd");
        $dumpvars(0, tb_top_cpu);
    end

endmodule