`timescale 1ns/1ps

module tb_systolic_array_selfcheck;

    parameter N = 8;
    parameter DATA_WIDTH = 32;

    reg clk;
    reg rst_n;
    reg rst_flush;
    reg valid;                     // ignored by block, but kept for interface
    reg [DATA_WIDTH-1:0] inp_west  [0:N-1];
    reg [DATA_WIDTH-1:0] inp_north [0:N-1];
    wire [2*DATA_WIDTH-1:0] results [0:N*N-1];

    // Clock
    always #5 clk = ~clk;

    // DUT
    systolic_array_8x8 #(
        .ARRAY_WIDTH(N),
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk, .rst_n, .rst_flush, .valid,
        .inp_west, .inp_north, .results
    );

    // Matrices and reference
    reg [DATA_WIDTH-1:0] A [0:N-1][0:N-1];
    reg [DATA_WIDTH-1:0] B [0:N-1][0:N-1];
    reg [2*DATA_WIDTH-1:0] C_ref [0:N-1][0:N-1];
    integer i, j, k, errors, seed;

    // Reference model
    task compute_reference;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) begin
                C_ref[i][j] = 0;
                for (k = 0; k < N; k++)
                    C_ref[i][j] += A[i][k] * B[k][j];
            end
    endtask

    // Wavefront feeding (stops inputs after last cycle)
    task feed_matrices;
        integer t, idx;
        begin
            for (t = 0; t < 2*N - 1; t++) begin
                @(posedge clk);
                for (i = 0; i < N; i++) begin
                    idx = t - i;
                    inp_west[i] = (idx >= 0 && idx < N) ? B[i][idx] : 0;
                end
                for (j = 0; j < N; j++) begin
                    idx = t - j;
                    inp_north[j] = (idx >= 0 && idx < N) ? A[idx][j] : 0;
                end
            end
            @(posedge clk);                     // latch last data
            for (i = 0; i < N; i++) begin       // stop accumulation
                inp_west[i]  = 0;
                inp_north[i] = 0;
            end
        end
    endtask

    // Flush pipeline (enough cycles + delta delay)
    task flush_pipeline;
        begin
            repeat(2 * N + 8) @(posedge clk);
            #1ps;   // allow non-blocking assignments to settle
        end
    endtask

    // Drain any remaining activity before reset
    task drain_pipeline;
        begin
            for (i = 0; i < N; i++) begin
                inp_west[i]  = 0;
                inp_north[i] = 0;
            end
            repeat(2 * N) @(posedge clk);
        end
    endtask

    // Main test
    initial begin
        clk = 0;
        rst_n = 0;
        rst_flush = 0;
        valid = 1;          // block ignores valid, but tie high

        for (i = 0; i < N; i++) begin
            inp_west[i]  = 0;
            inp_north[i] = 0;
        end

        // Generate random matrices (values 1..5)
        seed = 123;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) begin
                A[i][j] = $urandom(seed) % 5 + 1;
                B[i][j] = $urandom(seed) % 5 + 1;
                seed = seed + 1;
            end
        compute_reference();

        // Display inputs (optional)
        $display("\n=== Matrix A ===");
        for (i = 0; i < N; i++) begin
            for (j = 0; j < N; j++) $write("%3d ", A[i][j]);
            $display("");
        end
        $display("\n=== Matrix B ===");
        for (i = 0; i < N; i++) begin
            for (j = 0; j < N; j++) $write("%3d ", B[i][j]);
            $display("");
        end

        // Reset DUT
        repeat(3) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        // ----- First multiplication -----
        feed_matrices();
        flush_pipeline();

        errors = 0;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                if (results[i*N + j] !== C_ref[i][j]) begin
                    $display("ERROR: C[%0d][%0d] = %0d, expected %0d",
                             i, j, results[i*N + j], C_ref[i][j]);
                    errors++;
                end else
                    $display("PASS: C[%0d][%0d] = %0d", i, j, results[i*N + j]);

        if (errors == 0)
            $display("\nFIRST TEST PASSED");
        else
            $display("\nFIRST TEST FAILED: %0d mismatches", errors);

        // ----- Flush test (rst_flush) -----
        drain_pipeline();               // clear any pending activity
        rst_flush = 1;
        repeat(2) @(posedge clk);      // hold reset for two cycles
        rst_flush = 0;
        repeat(2 * N) @(posedge clk);  // let pipeline stabilize
        #1ps;                          // sample after NBA updates

        if (results[0] !== 0) begin
            $display("ERROR: rst_flush failed (result[0]=%0d)", results[0]);
            errors++;
        end else
            $display("PASS: rst_flush cleared results");

        // ----- Second multiplication (verify reset worked) -----
        feed_matrices();
        flush_pipeline();

        if (results[0] !== C_ref[0][0]) begin
            $display("ERROR: After reload, C[0][0] = %0d expected %0d",
                     results[0], C_ref[0][0]);
            errors++;
        end else
            $display("PASS: After reload, multiplication works again");

        // ----- Final report -----
        if (errors == 0) begin
            $display("\n==================================================");
            $display("ALL TESTS PASSED");
            $display("==================================================");
        end else begin
            $display("\n==================================================");
            $display("TOTAL FAILURES: %0d", errors);
            $display("==================================================");
        end

        $finish;
    end
endmodule