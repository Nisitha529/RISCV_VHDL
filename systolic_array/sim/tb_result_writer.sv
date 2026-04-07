`timescale 1ns/1ps

module tb_result_writer;

    parameter ARRAY_WIDTH = 8;
    parameter DATA_WIDTH  = 32;
    parameter SIZE = ARRAY_WIDTH * ARRAY_WIDTH;

    reg clk;
    reg rst_n;
    reg rst_flush;
    reg complete_matmul;

    reg  [2*DATA_WIDTH-1:0] results [0:SIZE-1];

    wire bram_we;
    wire [10:0] bram_addr;
    wire [2*DATA_WIDTH-1:0] bram_din;
    wire result_done;

    //----------------------------------
    // DUT
    //----------------------------------
    result_writer #(.ARRAY_WIDTH(ARRAY_WIDTH)) dut (
        .clk(clk),
        .rst_n(rst_n),
        .rst_flush(rst_flush),
        .complete_matmul(complete_matmul),
        .results(results),
        .bram_we(bram_we),
        .bram_addr(bram_addr),
        .bram_din(bram_din),
        .result_done(result_done)
    );

    //----------------------------------
    // CLOCK
    //----------------------------------
    always #5 clk = ~clk;

    //----------------------------------
    // Reference tracking
    //----------------------------------
    integer i;
    integer errors;

    //----------------------------------
    // TEST
    //----------------------------------
    initial begin
        clk = 0;
        rst_n = 0;
        rst_flush = 0;
        complete_matmul = 0;
        errors = 0;

        //----------------------------------
        // Initialize results
        //----------------------------------
        for (i = 0; i < SIZE; i++) begin
            results[i] = i + 100;   // known pattern
        end

        //----------------------------------
        // Reset
        //----------------------------------
        repeat(3) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        //----------------------------------
        // Start write
        //----------------------------------
        complete_matmul = 1;

        //----------------------------------
        // CHECK WRITES
        //----------------------------------
        for (i = 0; i < SIZE; i++) begin
            @(posedge clk);

            if (!bram_we) begin
                $display("ERROR: bram_we not asserted at index %0d", i);
                errors++;
            end

            if (bram_addr !== i) begin
                $display("ERROR: addr mismatch: got %0d expected %0d", bram_addr, i);
                errors++;
            end

            if (bram_din !== results[i]) begin
                $display("ERROR: data mismatch at %0d: got %0d expected %0d",
                         i, bram_din, results[i]);
                errors++;
            end else begin
                $display("PASS: write[%0d] = %0d", i, bram_din);
            end
        end

        //----------------------------------
        // Check completion cycle
        //----------------------------------
        @(posedge clk);

        if (!result_done) begin
            $display("ERROR: result_done not asserted");
            errors++;
        end else begin
            $display("PASS: result_done asserted");
        end

        //----------------------------------
        // Check signature write
        //----------------------------------
        if (bram_din !== 64'hFFFF_FFFF_FFFF_FFFF) begin
            $display("ERROR: signature mismatch");
            errors++;
        end else begin
            $display("PASS: signature written");
        end

        //----------------------------------
        // Reset test
        //----------------------------------
        rst_flush = 1;
        @(posedge clk);
        rst_flush = 0;
        @(posedge clk);

        if (result_done !== 0) begin
            $display("ERROR: reset failed (result_done not cleared)");
            errors++;
        end else begin
            $display("PASS: reset works");
        end

        //----------------------------------
        // FINAL REPORT
        //----------------------------------
        if (errors == 0) begin
            $display("\n=================================");
            $display("ALL TESTS PASSED");
            $display("=================================");
        end else begin
            $display("\n=================================");
            $display("TOTAL FAILURES: %0d", errors);
            $display("=================================");
        end

        $finish;
    end

endmodule