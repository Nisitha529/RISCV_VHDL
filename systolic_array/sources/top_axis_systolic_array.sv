`timescale 1ns/1ps

module top_axis_systolic #(
  parameter N          = 8,
  parameter DATA_WIDTH = 32
)(
  input                               clk,
  input                               rst_n,

  // AXI Input
  input                               s_axis_tvalid,
  output                              s_axis_tready,
  input      [DATA_WIDTH - 1 : 0]     s_axis_tdata,
  input                               s_axis_tlast,

  // AXI Output
  output reg                          m_axis_tvalid,
  input                               m_axis_tready,
  output reg [2 * DATA_WIDTH - 1 : 0] m_axis_tdata,
  output reg                          m_axis_tlast
);

  localparam WAIT_CYCLES = 2 * N + 2;

  reg  [DATA_WIDTH - 1 : 0]              mata [0 : N - 1][0 : N - 1];
  reg  [DATA_WIDTH - 1 : 0]              matb [0 : N - 1][0 : N - 1];

  reg  [$clog2(2 * N * N + 1) - 1 : 0]   load_cnt;
  reg                                    loading_done;
  
  reg                                    feeder_done_d;
  reg  [$clog2(WAIT_CYCLES + 1) - 1 : 0] wait_cnt;
  reg                                    wait_active;

  reg  [$clog2(N * N + 1) - 1 : 0]       out_cnt;
  reg                                    output_active;
  
  wire [2 * DATA_WIDTH - 1 : 0]          results [0 : N * N - 1];
  
  wire [DATA_WIDTH - 1 : 0]              inp_north [0 : N - 1];
  wire [DATA_WIDTH - 1 : 0]              inp_west  [0 : N - 1];
  wire                                   feeder_valid;
  wire                                   feeder_done;
  
  wire                                   feeder_done_rise;
  
  assign feeder_done_rise = feeder_done & ~feeder_done_d;

  assign s_axis_tready    = 1'b1;
  
  data_feeder #(
    .N          (N),
    .DATA_WIDTH (DATA_WIDTH)
  ) data_feeder_01 (
    .clk         (clk),
    .rst_n       (rst_n),
    
    .start       (loading_done),
    
    .mata        (mata),
    .matb        (matb),
    
    .inp_north   (inp_north),
    .inp_west    (inp_west),
    
    .valid       (feeder_valid),
    .done        (feeder_done)
  );

  systolic_array_8x8 #(
    .ARRAY_WIDTH (N),
    .DATA_WIDTH  (DATA_WIDTH)
  ) systolic_array_8x8_01 (
    .clk         (clk),
    .rst_n       (rst_n),
    
    .rst_flush   (1'b0),
    
    .valid       (feeder_valid),
    
    .inp_west    (inp_west),
    .inp_north   (inp_north),
    
    .results     (results)
  );

  // Input load
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      load_cnt                                                 <= 0;
      loading_done                                             <= 0;
    end else begin
      if (s_axis_tvalid && s_axis_tready && !loading_done) begin
        if (load_cnt < N * N) begin
          mata[load_cnt / N][load_cnt % N]                     <= s_axis_tdata;
        end else if (load_cnt < 2 * N * N) begin
          matb[(load_cnt - N * N) / N][(load_cnt - N * N) % N] <= s_axis_tdata;
        end 

        if (load_cnt == 2*N*N-1) begin
          loading_done                                         <= 1'b1;
        end

        load_cnt                                               <= load_cnt + 1'b1;
      end
    end
  end

  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      feeder_done_d     <= 0;
      wait_cnt          <= 0;
      wait_active       <= 0;
      out_cnt           <= 0;
      output_active     <= 0;
      m_axis_tvalid     <= 0;
      m_axis_tdata      <= 0;
      m_axis_tlast      <= 0;
    end else begin
      feeder_done_d     <= feeder_done;

      m_axis_tvalid     <= 0;
      m_axis_tlast      <= 0;

      // Detect feeder completion once 
      if (feeder_done_rise) begin
        wait_active     <= 1;
        wait_cnt        <= 0;
      end

      // Wait for array to settle
      if (wait_active) begin
        if (wait_cnt == WAIT_CYCLES - 1) begin
          wait_active   <= 0;
          output_active <= 1;
          out_cnt       <= 0;
        end else begin
          wait_cnt      <= wait_cnt + 1'b1;
        end
      end

      // Stream results
      if (output_active && m_axis_tready) begin
        m_axis_tvalid   <= 1'b1;
        m_axis_tdata    <= results[out_cnt];
        m_axis_tlast    <= (out_cnt == N*N-1);

        if (out_cnt == N * N - 1) begin
          output_active <= 0;
        end

        out_cnt         <= out_cnt + 1'b1;
      end
    end
  end

endmodule