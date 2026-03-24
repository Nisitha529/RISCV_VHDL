`include "cpu_defines.vh"
`include "memory_defines.vh"

module regfile (
  input  wire                      clk,
  input  wire                      resetn,

  input  wire                      regwrite,

  input  wire [4 : 0]              rs1_addr,
  input  wire [4 : 0]              rs2_addr,

  input  wire [4 : 0]              rd_addr,
  input  wire [`WORD_SIZE - 1 : 0] rd_data,

  output wire [`WORD_SIZE - 1 : 0] rs1_data,
  output wire [`WORD_SIZE - 1 : 0] rs2_data,
  output reg  [`WORD_SIZE - 1 : 0] regs [0 : 31]   // Only for debugging purposes
);

// Register array (initialised to 0)
reg [`WORD_SIZE - 1 : 0] regs [0 : 31];

integer i;

always @(posedge clk) begin
  if (!resetn) begin
    for (i = 0; i < 32; i = i + 1) begin
      regs[i]       <= 32'd0;
		end
  end else begin
    if (regwrite && (rd_addr != 5'd0)) begin
      regs[rd_addr] <= rd_data;
		end
  end
end

assign rs1_data      = (rs1_addr == 5'd0) ? 32'd0 : regs[rs1_addr];
assign rs2_data      = (rs2_addr == 5'd0) ? 32'd0 : regs[rs2_addr];

endmodule