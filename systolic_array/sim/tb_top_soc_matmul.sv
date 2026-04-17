`timescale 1ns/1ps
`include "memory_defines.vh"
`include "cpu_defines.vh"

module tb_top_soc_matmul;

    parameter N                    = 4;
    parameter DATA_WIDTH           = 32;
    parameter ACCEL_RAM_ADDR_WIDTH = 10;
    parameter CLKS_PER_BIT         = 8;
    parameter ACCEL_CFG_BASE       = 32'h0300_0000;
    parameter ACCEL_CFG_SIZE_BYTES = 32;

    //----------------------------------
    // DUT I/O
    //----------------------------------
    reg         clk;
    reg         rst_n;
    reg         uart_rx_pin;
    wire        uart_tx_pin;

    wire        bootload_busy;
    wire        bootload_done;
    wire        bootload_error;
    wire        cpu_resetn_out;
    wire [31:0] bytes_loaded_out;
    wire        accel_irq;

    //----------------------------------
    // DUT
    //----------------------------------
    top_soc_matmul #(
        .CLKS_PER_BIT         (CLKS_PER_BIT),
        .ACCEL_RAM_ADDR_WIDTH (ACCEL_RAM_ADDR_WIDTH),
        .ACCEL_CFG_BASE       (ACCEL_CFG_BASE),
        .ACCEL_CFG_SIZE_BYTES (ACCEL_CFG_SIZE_BYTES)
    ) dut (
        .clk              (clk),
        .rst_n            (rst_n),
        .uart_rx_pin      (uart_rx_pin),
        .uart_tx_pin      (uart_tx_pin),
        .bootload_busy    (bootload_busy),
        .bootload_done    (bootload_done),
        .bootload_error   (bootload_error),
        .cpu_resetn_out   (cpu_resetn_out),
        .bytes_loaded_out (bytes_loaded_out),
        .accel_irq        (accel_irq)
    );

    //----------------------------------
    // Clock
    //----------------------------------
    initial clk = 1'b0;
    always #5 clk = ~clk;

    //----------------------------------
    // Test matrices / reference
    //----------------------------------
    reg [31:0] A   [0:N-1][0:N-1];
    reg [31:0] B   [0:N-1][0:N-1];
    reg [63:0] REF [0:N-1][0:N-1];

    integer i, j, k;
    integer idx;
    integer errors;
    integer timeout_count;

    //----------------------------------
    // Address plan
    //----------------------------------
    localparam [31:0] A_BASE_BYTE = `DATA_RAM_BASE_ADDRESS + 32'h0000_0040;
    localparam [31:0] B_BASE_BYTE = `DATA_RAM_BASE_ADDRESS + 32'h0000_0080;
    localparam [31:0] C_BASE_BYTE = `DATA_RAM_BASE_ADDRESS + 32'h0000_00C0;

    localparam integer A_BASE_WORD = 16;  // 0x40 / 4
    localparam integer B_BASE_WORD = 32;  // 0x80 / 4
    localparam integer C_BASE_WORD = 48;  // 0xC0 / 4

    //----------------------------------
    // Helpers for byte-lane RAM
    //----------------------------------
    task tb_mem_write_word(
        input integer word_index,
        input [31:0] data
    );
        begin
            dut.shared_ram_i.mem_b0[word_index] = data[7:0];
            dut.shared_ram_i.mem_b1[word_index] = data[15:8];
            dut.shared_ram_i.mem_b2[word_index] = data[23:16];
            dut.shared_ram_i.mem_b3[word_index] = data[31:24];
        end
    endtask

    task tb_mem_read_word(
        input  integer word_index,
        output [31:0] data
    );
        begin
            data = {
                dut.shared_ram_i.mem_b3[word_index],
                dut.shared_ram_i.mem_b2[word_index],
                dut.shared_ram_i.mem_b1[word_index],
                dut.shared_ram_i.mem_b0[word_index]
            };
        end
    endtask

    //----------------------------------
    // Reference model
    //----------------------------------
    task compute_reference;
        begin
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    REF[i][j] = 64'd0;
                    for (k = 0; k < N; k = k + 1) begin
                        REF[i][j] = REF[i][j] + (A[i][k] * B[k][j]);
                    end
                end
            end
        end
    endtask

    //----------------------------------
    // Pretty print
    //----------------------------------
    task print_matrix_a;
        begin
            $display("=== Matrix A ===");
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1)
                    $write("%0d ", A[i][j]);
                $display("");
            end
        end
    endtask

    task print_matrix_b;
        begin
            $display("=== Matrix B ===");
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1)
                    $write("%0d ", B[i][j]);
                $display("");
            end
        end
    endtask

    task print_reference;
        begin
            $display("=== Reference C = A x B ===");
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1)
                    $write("%0d ", REF[i][j]);
                $display("");
            end
        end
    endtask

    //----------------------------------
    // Hierarchical preload
    //----------------------------------
    task preload_shared_ram;
        begin
            for (idx = 0; idx < (1 << ACCEL_RAM_ADDR_WIDTH); idx = idx + 1)
                tb_mem_write_word(idx, 32'd0);

            idx = 0;
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    tb_mem_write_word(A_BASE_WORD + idx, A[i][j]);
                    idx = idx + 1;
                end
            end

            idx = 0;
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    tb_mem_write_word(B_BASE_WORD + idx, B[i][j]);
                    idx = idx + 1;
                end
            end
        end
    endtask

    //----------------------------------
    // Force internal cfg path
    //----------------------------------
    task accel_cfg_write(
        input [7:0]  addr,
        input [31:0] data
    );
        begin
            @(negedge clk);
            force dut.accel_cfg_addr  = addr;
            force dut.accel_cfg_wdata = data;
            force dut.accel_cfg_we    = 1'b1;

            @(negedge clk);
            force dut.accel_cfg_we    = 1'b0;
            release dut.accel_cfg_addr;
            release dut.accel_cfg_wdata;
            release dut.accel_cfg_we;
        end
    endtask

    //----------------------------------
    // Wait for accelerator done
    //----------------------------------
    task wait_for_done;
        begin
            timeout_count = 0;
            while (accel_irq !== 1'b1) begin
                @(posedge clk);
                timeout_count = timeout_count + 1;
                if (timeout_count > 10000) begin
                    $display("❌ ERROR: timeout waiting for accelerator done.");
                    errors = errors + 1;
                    disable wait_for_done;
                end
            end
            $display("=== Accelerator DONE observed ===");
        end
    endtask

    //----------------------------------
    // Check result memory
    //----------------------------------
    task check_result_memory;
        reg [31:0] lo;
        reg [31:0] hi;
        reg [63:0] got;
        begin
            idx = 0;
            $display("=== Checking result matrix C from shared memory ===");

            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    tb_mem_read_word(C_BASE_WORD + (idx << 1),     lo);
                    tb_mem_read_word(C_BASE_WORD + (idx << 1) + 1, hi);
                    got = {hi, lo};

                    if (got !== REF[i][j]) begin
                        $display("❌ ERROR C[%0d][%0d] = %0d expected %0d",
                                 i, j, got, REF[i][j]);
                        errors = errors + 1;
                    end else begin
                        $display("✅ PASS  C[%0d][%0d] = %0d",
                                 i, j, got);
                    end

                    idx = idx + 1;
                end
            end
        end
    endtask

    //----------------------------------
    // Debug monitor
    //----------------------------------
    always @(posedge clk) begin
        if (dut.accel_mem_re) begin
            $display("[%0t] ACCEL MEM-READ  addr=0x%0h data=0x%08h",
                     $time, dut.accel_mem_addr, dut.accel_mem_rdata);
        end
        if (dut.accel_mem_we) begin
            $display("[%0t] ACCEL MEM-WRITE addr=0x%0h data=0x%08h",
                     $time, dut.accel_mem_addr, dut.accel_mem_wdata);
        end
    end

    //----------------------------------
    // Main test
    //----------------------------------
    initial begin
        rst_n       = 1'b0;
        uart_rx_pin = 1'b1;
        errors      = 0;

        for (i = 0; i < N; i = i + 1) begin
            for (j = 0; j < N; j = j + 1) begin
                A[i][j] = i + j + 1;
                B[i][j] = i*10 + j;
            end
        end

        compute_reference();
        print_matrix_a();
        print_matrix_b();
        print_reference();

        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (2) @(posedge clk);

        //----------------------------------
        // Bypass bootloader/CPU path
        //----------------------------------
        force dut.bootload_done  = 1'b1;
        force dut.bootload_error = 1'b0;

        force dut.dmem_valid        = 1'b0;
        force dut.dmem_addr         = 32'd0;
        force dut.dmem_write_enable = 1'b0;
        force dut.dmem_access_width = `MEM_ACCESS_WIDTH_32;
        force dut.dmem_wdata        = 32'd0;

        repeat (2) @(posedge clk);

        $display("=== Preloading A and B into shared RAM ===");
        preload_shared_ram();

        $display("=== Programming accelerator registers ===");
        accel_cfg_write(8'h08, A_BASE_WORD);
        accel_cfg_write(8'h0C, B_BASE_WORD);
        accel_cfg_write(8'h10, C_BASE_WORD);

        $display("=== Starting accelerator ===");
        accel_cfg_write(8'h00, 32'h0000_0001);

        wait_for_done();
        check_result_memory();

        if (errors == 0) begin
            $display("==============================================");
            $display("PASS: tb_top_soc_matmul self-checking test passed");
            $display("==============================================");
        end else begin
            $display("==============================================");
            $display("FAIL: tb_top_soc_matmul failed with %0d error(s)", errors);
            $display("==============================================");
        end

        $finish;
    end

endmodule