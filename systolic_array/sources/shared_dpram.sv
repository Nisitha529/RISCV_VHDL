`timescale 1ns/1ps

module shared_dpram #(
    parameter ADDR_WIDTH = 12,
    parameter DATA_WIDTH = 32
)(
    input  logic clk,

    //----------------------------------
    // PORT A (CPU / TB)
    //----------------------------------
    input  logic                  a_we,
    input  logic                  a_re,
    input  logic [ADDR_WIDTH-1:0] a_addr,
    input  logic [DATA_WIDTH-1:0] a_wdata,
    output logic [DATA_WIDTH-1:0] a_rdata,

    //----------------------------------
    // PORT B (ACCEL)
    //----------------------------------
    input  logic                  b_we,
    input  logic                  b_re,
    input  logic [ADDR_WIDTH-1:0] b_addr,
    input  logic [DATA_WIDTH-1:0] b_wdata,
    output logic [DATA_WIDTH-1:0] b_rdata
);

    localparam DEPTH = (1 << ADDR_WIDTH);

    logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];

    //----------------------------------
    // PORT A
    //----------------------------------
    always_ff @(posedge clk) begin
        if (a_we)
            mem[a_addr] <= a_wdata;

        if (a_re)
            a_rdata <= mem[a_addr];
    end

    //----------------------------------
    // PORT B
    //----------------------------------
    always_ff @(posedge clk) begin
        if (b_we)
            mem[b_addr] <= b_wdata;

        if (b_re)
            b_rdata <= mem[b_addr];
    end

endmodule