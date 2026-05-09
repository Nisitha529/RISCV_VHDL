module dmem #(
  parameter DATA_WIDTH = 32,
  parameter MEM_DEPTH  = 4096
)(
  input  logic                      clk,

  input  logic                      mem_access,
  input  logic                      write_enable,

  input  logic [5 : 0]              mem_width,

  input  logic [DATA_WIDTH - 1 : 0] addr,

  input  logic [DATA_WIDTH - 1 : 0] write_data,

  output logic [DATA_WIDTH - 1 : 0] read_data
);

  localparam MEM_BYTE = 6'd8;
  localparam MEM_HALF = 6'd16;
  localparam MEM_WORD = 6'd32;

  // Byte-addressable memory
  logic [7 : 0] mem [0 : MEM_DEPTH - 1];

  // Combinational LOAD
  always_comb begin : load_comb
    read_data = 32'd0;

    if (mem_access && !write_enable) begin 
      case (mem_width)
        // BYTE
        MEM_BYTE : begin
          read_data = {24'd0, mem[addr]};
        end

        // HALF WORD
        MEM_HALF : begin
          read_data = {16'd0, mem[addr + 1], mem[addr]};
        end

        // WORD
        MEM_WORD : begin
          read_data = {mem[addr + 3], mem[addr + 2], mem[addr + 1], mem[addr]};
        end

        default : begin
          read_data = 32'd0;
        end

      endcase
    end
  end

  // Sequential STORE
  always_ff @(posedge clk) begin : store_ff

    if (mem_access && write_enable) begin
      case (mem_width)

        // BYTE
        MEM_BYTE : begin
          mem[addr]     <= write_data[7 : 0];
        end

        // HALF WORD
        MEM_HALF : begin
          mem[addr]     <= write_data[7  : 0];
          mem[addr + 1] <= write_data[15 : 8];
        end

        // WORD
        MEM_WORD : begin
          mem[addr]     <= write_data[7  : 0];
          mem[addr + 1] <= write_data[15 : 8];
          mem[addr + 2] <= write_data[23 : 16];
          mem[addr + 3] <= write_data[31 : 24];
        end

      endcase
    end
  end

endmodule