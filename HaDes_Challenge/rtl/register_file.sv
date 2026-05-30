module register_file #(
  parameter DATA_WIDTH = 32,
	parameter ADDR_WIDTH = 5	
)(
  input  logic                      clk,
	input  logic                      rst,

	input  logic [ADDR_WIDTH - 1 : 0] read_address1,
	input  logic [ADDR_WIDTH - 1 : 0] read_address2,

	input  logic                      write_enable,

	input  logic [ADDR_WIDTH - 1 : 0] write_address,
	input  logic [DATA_WIDTH - 1 : 0] write_data,

	output logic [DATA_WIDTH - 1 : 0] read_data1,
  output logic [DATA_WIDTH - 1 : 0] read_data2
);

  logic [DATA_WIDTH - 1 : 0] regs  [0 : 31];

	integer i;

	always_ff @(posedge clk) begin : write_comb
    if (rst) begin
			for (i = 0; i < 32; i = i + 1) begin
        regs [i] <= '0;
			end
		end else begin
			if (write_enable && (write_address != 0)) begin
				regs [write_address] <= write_data;
			end
		end
	end

	assign read_data1 = (read_address1 == 0) ? '0 : regs [read_address1];
	assign read_data2 = (read_address2 == 0) ? '0 : regs [read_address2];
    
endmodule