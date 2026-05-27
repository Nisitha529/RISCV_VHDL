`timescale 1ns/1ps

module tb_top_cpu;

    logic clk;
    logic rst;

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst = 1'b1;
        repeat (3) @(posedge clk);
        rst = 1'b0;
    end

    wishbone_interface wb_imem();
    wishbone_interface wb_dmem();

    top_cpu dut (
        .clk                  (clk),
        .rst                  (rst),
        .memory_fetch_port    (wb_imem.master),
        .memory_mem_port      (wb_dmem.master),
        .external_interrupt_in(1'b0),
        .timer_interrupt_in   (1'b0)
    );

    logic [31:0] imem [0:1023];

    initial begin
        for (int i = 0; i < 1024; i++) begin
            imem[i] = 32'h00000013;
        end

        imem[0]  = 32'h00A00093; // addi x1, x0, 10
        imem[1]  = 32'h01400113; // addi x2, x0, 20
        imem[2]  = 32'h002081B3; // add  x3, x1, x2 = 30

        imem[3]  = 32'h00000013; // nop
        imem[4]  = 32'h00000013; // nop

        imem[5]  = 32'h000012B7; // lui  x5, 0x1       -> x5 = 0x1000
        imem[6]  = 32'h80028293; // addi x5, x5, -2048 -> x5 = 0x800

        imem[7]  = 32'h00000013; // nop
        imem[8]  = 32'h00000013; // nop

        imem[9]  = 32'h0032A023; // sw x3, 0(x5)

        imem[10] = 32'h00000013; // nop
        imem[11] = 32'h00000013; // nop
        imem[12] = 32'h00000013; // nop

        imem[13] = 32'h0002A203; // lw x4, 0(x5)

        imem[14] = 32'h00000013; // nop
        imem[15] = 32'h00000013; // nop
        imem[16] = 32'h00000013; // nop

        imem[17] = 32'hFE000EE3; // loop
    end

    always_ff @(negedge clk) begin
        if (rst) begin
            wb_imem.ack      <= 1'b0;
            wb_imem.err      <= 1'b0;
            wb_imem.dat_miso <= 32'd0;
        end else begin
            wb_imem.ack <= 1'b0;
            wb_imem.err <= 1'b0;

            if (wb_imem.cyc && wb_imem.stb && !wb_imem.we) begin
                wb_imem.ack      <= 1'b1;
                wb_imem.dat_miso <= imem[wb_imem.adr[9:0]];
            end
        end
    end

    logic [31:0] dmem [0:1023];

    initial begin
        for (int i = 0; i < 1024; i++) begin
            dmem[i] = 32'd0;
        end
    end

    always_ff @(negedge clk) begin
        if (rst) begin
            wb_dmem.ack      <= 1'b0;
            wb_dmem.err      <= 1'b0;
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
        begin
            actual = dut.decode_inst.regfile_inst.regs[reg_num];

            if (actual !== expected) begin
                $display("[FAIL] x%0d = %0d / 0x%08h (expected %0d / 0x%08h)",
                         reg_num, actual, actual, expected, expected);
                $finish;
            end else begin
                $display("[PASS] x%0d = %0d", reg_num, actual);
            end
        end
    endtask

    task check_memory(input logic [31:0] addr, input logic [31:0] expected);
        logic [31:0] actual;
        begin
            actual = dmem[addr[11:2]];

            if (actual !== expected) begin
                $display("[FAIL] Memory[%h] = %h (expected %h)",
                         addr, actual, expected);
                $finish;
            end else begin
                $display("[PASS] Memory[%h] = %h", addr, actual);
            end
        end
    endtask

    initial begin
        repeat (120) @(posedge clk);
        #1;

        $display("\nTest results:");
        check_register(1, 32'd10);
        check_register(2, 32'd20);
        check_register(3, 32'd30);
        check_register(4, 32'd30);
        check_memory(32'h00000800, 32'd30);

        $display("\n=====================================");
        $display("ALL TESTS PASSED");
        $display("=====================================\n");
        $finish;
    end

    initial begin
        repeat (10000) @(posedge clk);
        $display("\n[FAIL] Simulation timeout\n");
        $finish;
    end

    initial begin
        $dumpfile("tb_top_cpu.vcd");
        $dumpvars(0, tb_top_cpu);
    end

endmodule