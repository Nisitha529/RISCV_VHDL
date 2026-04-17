`timescale 1ns/1ps
`include "cpu_defines.vh"

module shared_data_ram_accel #(
  parameter ADDR_WIDTH = 10
)(
  input  wire clk,

  // CPU
  input  wire        cpu_en,
  input  wire        cpu_we,
  input  wire [1:0]  cpu_access_width,
  input  wire [31:0] cpu_addr,      // byte address relative to DATA_RAM base
  input  wire [31:0] cpu_wdata,
  output reg  [31:0] cpu_rdata,

  // ACCEL
  input  wire                    acc_we,
  input  wire                    acc_re,
  input  wire [ADDR_WIDTH-1:0]   acc_addr,   // word index
  input  wire [31:0]             acc_wdata,
  output reg  [31:0]             acc_rdata
);

  localparam WORDS = (1 << ADDR_WIDTH);

  // Keep synthesis away from unsupported BRAM inference pattern
  (* ram_style = "registers" *) reg [7:0] mem_b0 [0:WORDS-1];
  (* ram_style = "registers" *) reg [7:0] mem_b1 [0:WORDS-1];
  (* ram_style = "registers" *) reg [7:0] mem_b2 [0:WORDS-1];
  (* ram_style = "registers" *) reg [7:0] mem_b3 [0:WORDS-1];

  integer i;

  initial begin
    for (i = 0; i < WORDS; i = i + 1) begin
      mem_b0[i] = 8'd0;
      mem_b1[i] = 8'd0;
      mem_b2[i] = 8'd0;
      mem_b3[i] = 8'd0;
    end
  end

  //----------------------------------
  // CPU address decode
  //----------------------------------
  wire [ADDR_WIDTH-1:0] cpu_word_idx = cpu_addr[ADDR_WIDTH+1:2];
  wire [1:0]            cpu_byte_off = cpu_addr[1:0];

  //----------------------------------
  // CPU READ (combinational)
  //----------------------------------
  always @(*) begin
    if (cpu_en) begin
      case (cpu_access_width)
        `MEM_ACCESS_WIDTH_32: begin
          cpu_rdata = {
            mem_b3[cpu_word_idx],
            mem_b2[cpu_word_idx],
            mem_b1[cpu_word_idx],
            mem_b0[cpu_word_idx]
          };
        end

        `MEM_ACCESS_WIDTH_16: begin
          if (cpu_byte_off[1] == 1'b0)
            cpu_rdata = {16'd0, mem_b1[cpu_word_idx], mem_b0[cpu_word_idx]};
          else
            cpu_rdata = {16'd0, mem_b3[cpu_word_idx], mem_b2[cpu_word_idx]};
        end

        default: begin
          case (cpu_byte_off)
            2'b00: cpu_rdata = {24'd0, mem_b0[cpu_word_idx]};
            2'b01: cpu_rdata = {24'd0, mem_b1[cpu_word_idx]};
            2'b10: cpu_rdata = {24'd0, mem_b2[cpu_word_idx]};
            2'b11: cpu_rdata = {24'd0, mem_b3[cpu_word_idx]};
            default: cpu_rdata = 32'hFFFF_FFFF;
          endcase
        end
      endcase
    end else begin
      cpu_rdata = 32'hFFFF_FFFF;
    end
  end

  //----------------------------------
  // CPU WRITE (synchronous)
  //----------------------------------
  always @(posedge clk) begin
    if (cpu_en && cpu_we) begin
      case (cpu_access_width)
        `MEM_ACCESS_WIDTH_32: begin
          mem_b0[cpu_word_idx] <= cpu_wdata[7:0];
          mem_b1[cpu_word_idx] <= cpu_wdata[15:8];
          mem_b2[cpu_word_idx] <= cpu_wdata[23:16];
          mem_b3[cpu_word_idx] <= cpu_wdata[31:24];
        end

        `MEM_ACCESS_WIDTH_16: begin
          if (cpu_byte_off[1] == 1'b0) begin
            mem_b0[cpu_word_idx] <= cpu_wdata[7:0];
            mem_b1[cpu_word_idx] <= cpu_wdata[15:8];
          end else begin
            mem_b2[cpu_word_idx] <= cpu_wdata[7:0];
            mem_b3[cpu_word_idx] <= cpu_wdata[15:8];
          end
        end

        default: begin
          case (cpu_byte_off)
            2'b00: mem_b0[cpu_word_idx] <= cpu_wdata[7:0];
            2'b01: mem_b1[cpu_word_idx] <= cpu_wdata[7:0];
            2'b10: mem_b2[cpu_word_idx] <= cpu_wdata[7:0];
            2'b11: mem_b3[cpu_word_idx] <= cpu_wdata[7:0];
          endcase
        end
      endcase
    end
  end

  //----------------------------------
  // ACCEL WRITE (synchronous)
  //----------------------------------
  always @(posedge clk) begin
    if (acc_we) begin
      mem_b0[acc_addr] <= acc_wdata[7:0];
      mem_b1[acc_addr] <= acc_wdata[15:8];
      mem_b2[acc_addr] <= acc_wdata[23:16];
      mem_b3[acc_addr] <= acc_wdata[31:24];
    end
  end

  //----------------------------------
  // ACCEL READ (synchronous)
  //----------------------------------
  always @(posedge clk) begin
    if (acc_re) begin
      acc_rdata <= {
        mem_b3[acc_addr],
        mem_b2[acc_addr],
        mem_b1[acc_addr],
        mem_b0[acc_addr]
      };
    end
  end

endmodule