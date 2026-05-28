module register_file #(
  parameter DATA_WIDTH = 32,
	parameter ADDR_WIDTH = 5	
)(
  input  logic                      clk,
	input  logic                      rst,

	input  logic [ADDR_WIDTH - 1 : 0] rs1_addr,
	input  logic [ADDR_WIDTH - 1 : 0] rs2_addr,

	input  logic                      write_enable,

	input  logic [ADDR_WIDTH - 1 : 0] rd_addr,
	input  logic [DATA_WIDTH - 1 : 0] rd_data,

	output logic [DATA_WIDTH - 1 : 0] rs1_data,
  output logic [DATA_WIDTH - 1 : 0] rs2_data
);

  logic [DATA_WIDTH - 1 : 0] regs  [0 : 31];

	integer i;

	always_ff @(posedge clk) begin : write_comb
    if (rst) begin
			for (i = 0; i < 32; i = i + 1) begin
        regs [i] <= '0;
			end
		end else begin
			if (write_enable && (rd_addr != 0)) begin
				regs [rd_addr] <= rd_data;
			end
		end
	end

	assign rs1_data = (rs1_addr == 0) ? '0 : regs [rs1_addr];
	assign rs2_data = (rs2_addr == 0) ? '0 : regs [rs2_addr];
    
endmodule