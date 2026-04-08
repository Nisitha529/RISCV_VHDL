`timescale 1ns/1ps

module tb_data_feeder ();

  parameter N          = 4;
  parameter DATA_WIDTH = 32;

  localparam CYCLE_LEN = 2 * N - 1;

  reg                       clk;
  reg                       rst_n;
  
  reg                       start;

  reg  [DATA_WIDTH - 1 : 0] mata      [0 : N - 1][0 : N - 1];
  reg  [DATA_WIDTH - 1 : 0] matb      [0 : N - 1][0 : N - 1];

  wire [DATA_WIDTH - 1 : 0] inp_north [0 : N - 1];
  wire [DATA_WIDTH - 1 : 0] inp_west  [0 : N - 1];
  
  wire                      valid;
  wire                      done;

  data_feeder #(
    .N          (N), 
    .DATA_WIDTH (DATA_WIDTH)
  ) dut_data_feeder (
    .clk        (clk),
    .rst_n      (rst_n),
    
    .start      (start),
    
    .mata       (mata),
    .matb       (matb),
    
    .inp_north  (inp_north),
    .inp_west   (inp_west),

    .valid      (valid),
    .done       (done)
  );

  always #5 clk = ~clk;
 
  reg [DATA_WIDTH - 1 : 0] ref_a [0 : N - 1][0 : CYCLE_LEN - 1];
  reg [DATA_WIDTH - 1 : 0] ref_b [0 : N - 1][0 : CYCLE_LEN - 1];

  integer                  i;
  integer                  j;
  
  integer                  errors;
  
  integer                  cycle;

  task build_reference;
    begin
      // Clear
      for (i = 0; i < N; i++) begin
        for (j = 0; j < CYCLE_LEN; j++) begin
          ref_a[i][j] = 0;
          ref_b[i][j] = 0;
        end
      end

     // A : north (column skew)
     for (i = 0; i < N; i++) begin
       for (j = 0; j < N; j++) begin
         ref_a[j][i+j] = mata[i][j];
       end
     end

     // B : west (row skew)
     for (i = 0; i < N; i++) begin
       for (j = 0; j < N; j++) begin
         ref_b[i][i+j] = matb[i][j];
       end
     end  
     
    end
  endtask

  initial begin
    clk            = 0;
    rst_n          = 0;
    start          = 0;
    errors         = 0;

    for (i = 0; i < N; i++) begin
      for (j = 0; j < N; j++) begin
        mata[i][j] = i + j + 1;
        matb[i][j] = i * 10 + j;
      end
    end

    build_reference();

    repeat(3) @(posedge clk);
    rst_n          = 1;

    @(posedge clk);
    start          = 1;
    @(posedge clk);
    start          = 0;

    // Wait for valid
    while (valid == 0)
    @(posedge clk);
    
    // check the loop
    cycle          = 0;

    while (valid == 1) begin

      // Prevent out of bounds 
      if (cycle < CYCLE_LEN) begin

        for (i = 0; i < N; i++) begin
          if (inp_north[i] !== ref_a[i][cycle]) begin
            $display("North : Cycle = %0d i = %0d Received = %0d Expected = %0d", cycle, i, inp_north[i], ref_a[i][cycle]);
            errors++;
          end

          if (inp_west[i] !== ref_b[i][cycle]) begin
            $display("West :   Cycle = %0d i = %0d Received = %0d Expected = %0d", cycle, i, inp_west[i], ref_b[i][cycle]);
            errors++;
          end

        end

      end

      cycle++;
    
      @(posedge clk);
    end

    // Check is completed
    @(posedge clk);

    if (!done) begin
      $display("Error : Done signal is not asserted");
      errors++;
    end else begin
      $display("Done signal is asserted");
    end

    // Cycle count check
    if (cycle != CYCLE_LEN) begin
      $display("Error : cycle mismatch %0d vs %0d", cycle, CYCLE_LEN);
      errors++;
    end

    if (errors == 0) begin
      $display("\nAll tests are passed.\n");
    end else begin
      $display("\Failed with %0d errors\n", errors);
    end

    $finish;
  end

endmodule
