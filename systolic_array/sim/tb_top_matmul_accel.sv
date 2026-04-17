`timescale 1ns/1ps

module tb_top_matmul_accel;

    parameter N          = 4;
    parameter DATA_WIDTH = 32;
    parameter ADDR_WIDTH = 12;

    //----------------------------------
    // Clock / Reset
    //----------------------------------
    logic clk;
    logic rst_n;

    initial clk = 1'b0;
    always #5 clk = ~clk;

    //----------------------------------
    // Accelerator config interface
    //----------------------------------
    logic        cfg_we;
    logic [7:0]  cfg_addr;
    logic [31:0] cfg_wdata;
    logic [31:0] cfg_rdata;
    logic        irq;

    //----------------------------------
    // Accelerator memory port (connects to DPRAM port B)
    //----------------------------------
    logic                  acc_mem_we;
    logic                  acc_mem_re;
    logic [ADDR_WIDTH-1:0] acc_mem_addr;
    logic [DATA_WIDTH-1:0] acc_mem_wdata;
    logic [DATA_WIDTH-1:0] acc_mem_rdata;

    //----------------------------------
    // CPU/Testbench memory port (connects to DPRAM port A)
    //----------------------------------
    logic                  cpu_mem_we;
    logic                  cpu_mem_re;
    logic [ADDR_WIDTH-1:0] cpu_mem_addr;
    logic [DATA_WIDTH-1:0] cpu_mem_wdata;
    logic [DATA_WIDTH-1:0] cpu_mem_rdata;

    //----------------------------------
    // DUT
    //----------------------------------
    top_matmul_accel #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) dut (
        .clk      (clk),
        .rst_n    (rst_n),

        .cfg_we   (cfg_we),
        .cfg_addr (cfg_addr),
        .cfg_wdata(cfg_wdata),
        .cfg_rdata(cfg_rdata),

        .mem_we   (acc_mem_we),
        .mem_re   (acc_mem_re),
        .mem_addr (acc_mem_addr),
        .mem_wdata(acc_mem_wdata),
        .mem_rdata(acc_mem_rdata),

        .irq      (irq)
    );

    //----------------------------------
    // Shared dual-port RAM
    //----------------------------------
    shared_dpram #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) u_shared_dpram (
    .clk(clk),

    // CPU side
    .a_we(cpu_mem_we),
    .a_re(cpu_mem_re),
    .a_addr(cpu_mem_addr),
    .a_wdata(cpu_mem_wdata),
    .a_rdata(cpu_mem_rdata),

    // ACCEL side
    .b_we(acc_mem_we),
    .b_re(acc_mem_re),
    .b_addr(acc_mem_addr),
    .b_wdata(acc_mem_wdata),
    .b_rdata(acc_mem_rdata)
);

    //----------------------------------
    // Test matrices / reference
    //----------------------------------
    logic [31:0] A   [0:N-1][0:N-1];
    logic [31:0] B   [0:N-1][0:N-1];
    logic [63:0] REF [0:N-1][0:N-1];

    integer i, j, k;
    integer errors;
    integer timeout_count;

    //----------------------------------
    // Base addresses in shared RAM
    // Word addressed
    //----------------------------------
    localparam [ADDR_WIDTH-1:0] BASE_A = 12'h040;
    localparam [ADDR_WIDTH-1:0] BASE_B = 12'h080;
    localparam [ADDR_WIDTH-1:0] BASE_C = 12'h0C0;

    //----------------------------------
    // CPU-side helpers for DPRAM port A
    //----------------------------------
    task cpu_mem_write(
        input [ADDR_WIDTH-1:0] addr,
        input [31:0]           data
    );
        begin
            @(negedge clk);
            cpu_mem_addr  = addr;
            cpu_mem_wdata = data;
            cpu_mem_we    = 1'b1;
            cpu_mem_re    = 1'b0;

            @(negedge clk);
            cpu_mem_we    = 1'b0;
            cpu_mem_addr  = '0;
            cpu_mem_wdata = '0;
        end
    endtask

    task cpu_mem_read(
        input  [ADDR_WIDTH-1:0] addr,
        output [31:0]           data
    );
        begin
            @(negedge clk);
            cpu_mem_addr = addr;
            cpu_mem_re   = 1'b1;
            cpu_mem_we   = 1'b0;

            @(posedge clk);
            #1;
            data = cpu_mem_rdata;

            @(negedge clk);
            cpu_mem_re   = 1'b0;
            cpu_mem_addr = '0;
        end
    endtask

    //----------------------------------
    // Config write helper
    //----------------------------------
    task write_cfg(
        input [7:0]  addr,
        input [31:0] data
    );
        begin
            @(negedge clk);
            cfg_addr  = addr;
            cfg_wdata = data;
            cfg_we    = 1'b1;

            @(negedge clk);
            cfg_we    = 1'b0;
            cfg_addr  = 8'h00;
            cfg_wdata = 32'h0;
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
                        REF[i][j] = REF[i][j] + (64'(A[i][k]) * 64'(B[k][j]));
                    end
                end
            end
        end
    endtask

    //----------------------------------
    // Pretty printers
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
    // Preload A and B into DPRAM through CPU port
    //----------------------------------
    task preload_matrices_into_memory;
        integer idx;
        begin
            idx = 0;
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    cpu_mem_write(BASE_A + idx, A[i][j]);
                    idx = idx + 1;
                end
            end

            idx = 0;
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    cpu_mem_write(BASE_B + idx, B[i][j]);
                    idx = idx + 1;
                end
            end
        end
    endtask

    //----------------------------------
    // Check C from DPRAM through CPU port
    //----------------------------------
    task check_result_memory;
        integer idx;
        logic [31:0] lo;
        logic [31:0] hi;
        logic [63:0] got;
        begin
            idx = 0;

            $display("=== Checking result matrix C from shared memory ===");

            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    cpu_mem_read(BASE_C + (idx << 1),     lo);
                    cpu_mem_read(BASE_C + (idx << 1) + 1, hi);
                    got = {hi, lo};

                    if (got !== REF[i][j]) begin
                        $display("❌ ERROR C[%0d][%0d] = %0d expected %0d",
                                 i, j, got, REF[i][j]);
                        errors = errors + 1;
                    end
                    else begin
                        $display("✅ PASS  C[%0d][%0d] = %0d",
                                 i, j, got);
                    end

                    idx = idx + 1;
                end
            end
        end
    endtask

    //----------------------------------
    // Wait for accelerator done
    //----------------------------------
    task wait_for_done;
        begin
            timeout_count = 0;
            while (irq !== 1'b1) begin
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
    // Optional debug monitors
    //----------------------------------
    always @(posedge clk) begin
        if (acc_mem_re) begin
            $display("[%0t] ACCEL MEM-READ  addr=0x%0h data=0x%08h",
                     $time, acc_mem_addr, acc_mem_rdata);
        end
        if (acc_mem_we) begin
            $display("[%0t] ACCEL MEM-WRITE addr=0x%0h data=0x%08h",
                     $time, acc_mem_addr, acc_mem_wdata);
        end
    end

    //----------------------------------
    // Main test
    //----------------------------------
    initial begin
        cfg_we       = 1'b0;
        cfg_addr     = 8'h00;
        cfg_wdata    = 32'h0;
        rst_n        = 1'b0;
        errors       = 0;

        cpu_mem_we    = 1'b0;
        cpu_mem_re    = 1'b0;
        cpu_mem_addr  = '0;
        cpu_mem_wdata = '0;

        //----------------------------------
        // Initialize matrices
        //----------------------------------
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

        //----------------------------------
        // Reset
        //----------------------------------
        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (2) @(posedge clk);

        //----------------------------------
        // Preload shared memory
        //----------------------------------
        $display("=== Preloading A and B into shared DPRAM ===");
        preload_matrices_into_memory();

        //----------------------------------
        // Program accelerator
        //----------------------------------
        $display("=== Programming accelerator registers ===");
        write_cfg(8'h08, BASE_A);   // A_BASE
        write_cfg(8'h0C, BASE_B);   // B_BASE
        write_cfg(8'h10, BASE_C);   // C_BASE

        //----------------------------------
        // Start accelerator
        //----------------------------------
        $display("=== Starting accelerator ===");
        write_cfg(8'h00, 32'h0000_0001);

        //----------------------------------
        // Wait for completion
        //----------------------------------
        wait_for_done();

        //----------------------------------
        // Check results
        //----------------------------------
        check_result_memory();

        //----------------------------------
        // Final report
        //----------------------------------
        if (errors == 0) begin
            $display("==============================================");
            $display("PASS: tb_top_matmul_accel self-checking test passed");
            $display("==============================================");
        end
        else begin
            $display("==============================================");
            $display("FAIL: tb_top_matmul_accel failed with %0d error(s)", errors);
            $display("==============================================");
        end

        $finish;
    end

endmodule