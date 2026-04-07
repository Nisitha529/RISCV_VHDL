`timescale 1ns/1ps

module tb_block_selfcheck;

    parameter DATA_WIDTH = 32;
    parameter NUM_TESTS  = 20;

    reg clk;
    reg rst_n;
    reg rst_flush;
    reg valid;

    reg  [DATA_WIDTH-1:0] input_north;
    reg  [DATA_WIDTH-1:0] input_west;

    wire [DATA_WIDTH-1:0] output_south;
    wire [DATA_WIDTH-1:0] output_east;
    wire [2*DATA_WIDTH-1:0] result;

    //----------------------------------
    // DUT
    //----------------------------------
    block #(.DATA_WIDTH(DATA_WIDTH)) dut (
        .clk(clk),
        .rst_n(rst_n),
        .rst_flush(rst_flush),
        .valid(valid),
        .input_north(input_north),
        .input_west(input_west),
        .output_south(output_south),
        .output_east(output_east),
        .result(result)
    );

    //----------------------------------
    // Clock
    //----------------------------------
    always #5 clk = ~clk;

    //----------------------------------
    // Reference model (pipelined)
    //----------------------------------
    reg [2*DATA_WIDTH-1:0] expected_acc;
    reg [2*DATA_WIDTH-1:0] expected_result;

    integer i;
    integer errors;

    //----------------------------------
    // TEST
    //----------------------------------
    initial begin
        clk = 0;
        rst_n = 0;
        rst_flush = 0;
        valid = 0;
        input_north = 0;
        input_west  = 0;

        expected_acc = 0;
        expected_result = 0;
        errors = 0;

        //----------------------------------
        // Reset
        //----------------------------------
        repeat(3) @(posedge clk);
        rst_n = 1;
        @(posedge clk);   // extra cycle to clear pipeline after reset

        //----------------------------------
        // TEST LOOP
        //----------------------------------
        for (i = 0; i < NUM_TESTS; i++) begin

            // Apply inputs
            input_north = $urandom_range(1, 10);
            input_west  = $urandom_range(1, 10);
            valid = 1;

            // Reference model: compute expected for NEXT cycle
            expected_acc = expected_acc + (input_north * input_west);
            expected_result = expected_acc - (input_north * input_west);

            @(posedge clk);

            // Check forwarding
            if (output_south !== input_north) begin
                $display("ERROR: south mismatch at iter %0d", i);
                errors++;
            end

            if (output_east !== input_west) begin
                $display("ERROR: east mismatch at iter %0d", i);
                errors++;
            end

            // Check accumulation
            if (result !== expected_result) begin
                $display("ERROR: got=%0d expected=%0d (iter=%0d)",
                          result, expected_result, i);
                errors++;
            end else begin
                $display("PASS: result=%0d", result);
            end
        end

        //----------------------------------
        // FLUSH TEST - FIXED for always-active DUT
        //----------------------------------
        valid = 0;
        // IMPORTANT: Zero the inputs to prevent unwanted accumulation
        input_north = 0;
        input_west  = 0;
        rst_flush = 1;
        @(posedge clk);
        rst_flush = 0;
        @(posedge clk);

        if (result !== 0) begin
            $display("ERROR: flush failed, result=%0d", result);
            errors++;
        end else begin
            $display("PASS: flush OK");
        end

        //----------------------------------
        // Summary
        //----------------------------------
        if (errors == 0)
            $display("ALL TESTS PASSED");
        else
            $display("FAILED: %0d errors", errors);

        $finish;
    end

endmodule