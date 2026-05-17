module dmem #(
  parameter DATA_WIDTH = 32,
  parameter ADDR_WIDTH = 32,
  parameter MEM_DEPTH  = 4096
)(
  input  logic                      clk,
  input  logic                      rst,

  input  logic                      mem_valid,
  output logic                      mem_ready,

  // input  logic                      mem_access,
  input  logic                      write_enable,

  input  logic [5 : 0]              mem_width,

  input  logic [ADDR_WIDTH - 1 : 0] addr,
  input  logic [DATA_WIDTH - 1 : 0] write_data,

  output logic [DATA_WIDTH - 1 : 0] read_data,
  output logic                      read_valid
);

  localparam MEM_BYTE = 6'd8;
  localparam MEM_HALF = 6'd16;
  localparam MEM_WORD = 6'd32;

  // Byte-addressable memory
  logic [7 : 0]                 mem [0 : MEM_DEPTH - 1];

  logic                         addr_aligned;
  logic                         addr_valid;

  logic [$clog2(MEM_DEPTH)-1:0] byte_addr;

  integer i;

  always_comb begin
    case (mem_width) 
      MEM_BYTE : 
        addr_aligned = 1'b1;

      MEM_HALF : 
        addr_aligned = (byte_addr[0] == 1'b0);

      MEM_WORD : 
        addr_aligned = (byte_addr[1 : 0] == 2'b00);

      default :
        addr_aligned = 1'b0;
    endcase

    case (mem_width)
      MEM_BYTE :
        addr_valid   = (byte_addr < MEM_DEPTH);

      MEM_HALF :
        addr_valid   = (byte_addr + 1 < MEM_DEPTH);

      MEM_WORD :
        addr_valid   = (byte_addr + 3 < MEM_DEPTH);

      default :
        addr_valid   = 1'b0;

    endcase

  end

  assign byte_addr = addr[$clog2(MEM_DEPTH)-1:0];

  assign mem_ready = !rst && addr_aligned && addr_valid;

  always_ff @(posedge clk) begin : mem_ff
    if (rst) begin
      for (i = 0; i < MEM_DEPTH; i = i + 1) begin
        mem[i]            <= 8'd0;
      end
      
      read_valid          <= 1'b0;
      read_data           <= '0;
    end else if (mem_valid && mem_ready )begin
      if (write_enable) begin
        case (mem_width)
          // BYTE
          MEM_BYTE : begin
            mem[byte_addr]     <= write_data[7 : 0];
          end

          // HALF WORD
          MEM_HALF : begin
            mem[byte_addr]     <= write_data[7  : 0];
            mem[byte_addr + 1] <= write_data[15 : 8];
          end

          // WORD
          MEM_WORD : begin
            mem[byte_addr]     <= write_data[7  : 0];
            mem[byte_addr + 1] <= write_data[15 : 8];
            mem[byte_addr + 2] <= write_data[23 : 16];
            mem[byte_addr + 3] <= write_data[31 : 24];
          end

          // default : begin
          //   mem[byte_addr]     <= write_data[7 : 0];
          // end

        endcase

        read_valid        <= 1'b0;
      end else begin
        case (mem_width)
          // BYTE
          MEM_BYTE : begin
            read_data <= {24'd0, mem[byte_addr]};
          end

          // HALF WORD
          MEM_HALF : begin
            read_data <= {16'd0, mem[byte_addr + 1], mem[byte_addr]};
          end

          // WORD
          MEM_WORD : begin
            read_data <= {mem[byte_addr + 3], mem[byte_addr + 2], mem[byte_addr + 1], mem[byte_addr]};
          end

          default : begin
            read_data <= 32'd0;
          end

        endcase

        read_valid    <= 1'b1;
      end
    end else begin
      read_valid      <= 1'b0;
    end
  end

  // // Combinational LOAD
  // always_comb begin : load_comb
  //   read_data = 32'd0;

  //   if (mem_access && !write_enable) begin 
  //     case (mem_width)
  //       // BYTE
  //       MEM_BYTE : begin
  //         read_data = {24'd0, mem[addr]};
  //       end

  //       // HALF WORD
  //       MEM_HALF : begin
  //         read_data = {16'd0, mem[addr + 1], mem[addr]};
  //       end

  //       // WORD
  //       MEM_WORD : begin
  //         read_data = {mem[addr + 3], mem[addr + 2], mem[addr + 1], mem[addr]};
  //       end

  //       default : begin
  //         read_data = 32'd0;
  //       end

  //     endcase
  //   end
  // end

  // // Sequential STORE
  // always_ff @(posedge clk) begin : store_ff

  //   if (mem_access && write_enable) begin
  //     case (mem_width)

  //       // BYTE
  //       MEM_BYTE : begin
  //         mem[addr]     <= write_data[7 : 0];
  //       end

  //       // HALF WORD
  //       MEM_HALF : begin
  //         mem[addr]     <= write_data[7  : 0];
  //         mem[addr + 1] <= write_data[15 : 8];
  //       end

  //       // WORD
  //       MEM_WORD : begin
  //         mem[addr]     <= write_data[7  : 0];
  //         mem[addr + 1] <= write_data[15 : 8];
  //         mem[addr + 2] <= write_data[23 : 16];
  //         mem[addr + 3] <= write_data[31 : 24];
  //       end

  //     endcase
  //   end
  // end

endmodule