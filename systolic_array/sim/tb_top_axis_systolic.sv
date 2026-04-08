`timescale 1ns/1ps

module tb_top_axis_systolic;

    parameter N = 4;
    parameter DATA_WIDTH = 32;

    localparam TOTAL_INPUT_WORDS  = 2 * N * N;
    localparam TOTAL_OUTPUT_WORDS = N * N;

    //----------------------------------
    // DUT interface
    //----------------------------------
    reg                         clk;
    reg                         rst_n;

    reg                         s_axis_tvalid;
    wire                        s_axis_tready;
    reg  [DATA_WIDTH-1:0]       s_axis_tdata;
    reg                         s_axis_tlast;

    wire                        m_axis_tvalid;
    reg                         m_axis_tready;
    wire [2*DATA_WIDTH-1:0]     m_axis_tdata;
    wire                        m_axis_tlast;

    //----------------------------------
    // DUT
    //----------------------------------
    top_axis_systolic #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk          (clk),
        .rst_n        (rst_n),

        .s_axis_tvalid(s_axis_tvalid),
        .s_axis_tready(s_axis_tready),
        .s_axis_tdata (s_axis_tdata),
        .s_axis_tlast (s_axis_tlast),

        .m_axis_tvalid(m_axis_tvalid),
        .m_axis_tready(m_axis_tready),
        .m_axis_tdata (m_axis_tdata),
        .m_axis_tlast (m_axis_tlast)
    );

    //----------------------------------
    // Clock generation
    //----------------------------------
    initial clk = 1'b0;
    always #5 clk = ~clk;   // 100 MHz

    //----------------------------------
    // Test matrices and reference
    //----------------------------------
    reg [DATA_WIDTH-1:0]       A   [0:N-1][0:N-1];
    reg [DATA_WIDTH-1:0]       B   [0:N-1][0:N-1];
    reg [2*DATA_WIDTH-1:0]     REF [0:N-1][0:N-1];

    integer i, j, k;
    integer errors;
    integer out_count;
    integer cycle_count;

    //----------------------------------
    // Reference model
    //----------------------------------
    task compute_reference;
        begin
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    REF[i][j] = 0;
                    for (k = 0; k < N; k = k + 1) begin
                        REF[i][j] = REF[i][j] + (A[i][k] * B[k][j]);
                    end
                end
            end
        end
    endtask

    //----------------------------------
    // Pretty print helpers
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
    // AXI-stream single-word send
    // Drives TVALID until handshake occurs
    //----------------------------------
    task send_word(
        input [DATA_WIDTH-1:0] data,
        input                  last
    );
        begin
            @(negedge clk);
            s_axis_tdata  = data;
            s_axis_tlast  = last;
            s_axis_tvalid = 1'b1;

            // Wait until DUT accepts the word
            while (!(s_axis_tvalid && s_axis_tready)) begin
                @(posedge clk);
                @(negedge clk);
            end

            // Keep stable through the accepting edge
            @(posedge clk);
            @(negedge clk);

            s_axis_tvalid = 1'b0;
            s_axis_tlast  = 1'b0;
            s_axis_tdata  = '0;
        end
    endtask

    //----------------------------------
    // Load A then B over AXI-stream
    //----------------------------------
    task send_matrices;
        begin
            $display("=== Sending Matrix A ===");
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    send_word(A[i][j], 1'b0);
                end
            end

            $display("=== Sending Matrix B ===");
            for (i = 0; i < N; i = i + 1) begin
                for (j = 0; j < N; j = j + 1) begin
                    send_word(B[i][j], (i == N-1 && j == N-1));
                end
            end
        end
    endtask

    //----------------------------------
    // Receive and check all outputs
    //----------------------------------
    task receive_and_check;
        integer exp_row, exp_col;
        begin
            out_count = 0;
            cycle_count = 0;

            $display("=== Waiting for DUT outputs ===");

            while (out_count < TOTAL_OUTPUT_WORDS) begin
                @(posedge clk);
                cycle_count = cycle_count + 1;

                // Timeout protection
                if (cycle_count > 5000) begin
                    $display("ERROR: Timed out waiting for all outputs.");
                    errors = errors + 1;
                    disable receive_and_check;
                end

                if (m_axis_tvalid && m_axis_tready) begin
                    exp_row = out_count / N;
                    exp_col = out_count % N;

                    if (m_axis_tdata !== REF[exp_row][exp_col]) begin
                        $display("ERROR C[%0d][%0d] = %0d expected %0d",
                                 exp_row, exp_col,
                                 m_axis_tdata, REF[exp_row][exp_col]);
                        errors = errors + 1;
                    end
                    else begin
                        $display("PASS  C[%0d][%0d] = %0d",
                                 exp_row, exp_col,
                                 m_axis_tdata);
                    end

                    // TLAST must assert only on final output
                    if (out_count == TOTAL_OUTPUT_WORDS-1) begin
                        if (m_axis_tlast !== 1'b1) begin
                            $display("ERROR: TLAST was not asserted on final output word.");
                            errors = errors + 1;
                        end
                    end
                    else begin
                        if (m_axis_tlast !== 1'b0) begin
                            $display("ERROR: TLAST asserted too early at output index %0d.", out_count);
                            errors = errors + 1;
                        end
                    end

                    out_count = out_count + 1;
                end
            end
        end
    endtask

    //----------------------------------
    // Optional protocol monitor
    //----------------------------------
    always @(posedge clk) begin
        if (rst_n && s_axis_tvalid && s_axis_tready) begin
            $display("[%0t] AXI-IN  data=%0d last=%0b",
                     $time, s_axis_tdata, s_axis_tlast);
        end
    end

    always @(posedge clk) begin
        if (rst_n && m_axis_tvalid && m_axis_tready) begin
            $display("[%0t] AXI-OUT data=%0d last=%0b",
                     $time, m_axis_tdata, m_axis_tlast);
        end
    end

    //----------------------------------
    // Main test
    //----------------------------------
    initial begin
        //----------------------------------
        // Defaults
        //----------------------------------
        rst_n         = 1'b0;
        s_axis_tvalid = 1'b0;
        s_axis_tdata  = '0;
        s_axis_tlast  = 1'b0;
        m_axis_tready = 1'b1;
        errors        = 0;

        //----------------------------------
        // Initialize test matrices
        //----------------------------------
        // Same pattern you were already using
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
        // Stimulus
        //----------------------------------
        send_matrices();

        //----------------------------------
        // Check outputs
        //----------------------------------
        receive_and_check();

        //----------------------------------
        // Final result
        //----------------------------------
        if (errors == 0) begin
            $display("==============================================");
            $display("PASS: top_axis_systolic self-checking test passed");
            $display("==============================================");
        end
        else begin
            $display("==============================================");
            $display("FAIL: top_axis_systolic self-checking test failed with %0d error(s)", errors);
            $display("==============================================");
        end

        $finish;
    end

endmodule