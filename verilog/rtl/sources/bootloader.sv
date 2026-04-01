module bootloader #(
  parameter int MEM_BYTES = 256,
  parameter int ADDR_W    = (MEM_BYTES <= 1) ? 1 : $clog2(MEM_BYTES),
  parameter int COUNT_W   = ADDR_W + 1
)(
  input  logic                   clk,
  input  logic                   rst_n,
  
  input  logic                   uart_rx_valid,
  input  logic [7 : 0]           uart_rx_data,

  output logic                   load_valid,
  output logic [31:0]            load_addr,
  output logic [31:0]            load_data,

  output logic                   bootload_busy,
  output logic                   bootload_done,
  output logic                   bootload_error,

  output logic [COUNT_W - 1 : 0] bytes_loaded
);

  // Protocol
  // 
  // Byte 0 received after reset = number of program bytes to load.
  // Then exactly that many bytes are written into program_mem[0 .. count-1].
  //
  // Example for MEM_DEPTH = 8:
  //   RX: 08 AA BB CC DD 11 22 33 44
  //   addr 0x00000000 <- 0xDDCCBBAA
  //   addr 0x00000004 <- 0x44332211
  //
  // Error conditions:
  //   - length byte is 0
  //   - length byte > MEM_BYTES
  //   - any unexpected behavior after error

//  localparam int ADDR_W    = (MEM_BYTES <= 1) ? 1 : $clog2(MEM_BYTES);
//  localparam int COUNT_W   = ADDR_W + 1;

  typedef enum logic [1 : 0] {
    BL_WAIT_LEN,
    BL_LOAD_DATA,
    BL_DONE,
    BL_ERROR
  } bl_state_t;

  bl_state_t state;

//  logic [7:0] program_mem [0:MEM_DEPTH-1];

  logic [COUNT_W - 1 : 0] expected_bytes;
  logic [COUNT_W - 1 : 0] received_bytes;
//  logic [COUNT_W-1:0] write_ptr;
   
  logic [1 : 0]           byte_in_word;
  logic [31 : 0]          assembled_word;
  logic [31 : 0]          next_word_addr;

  integer i;

//  // Flatten unpacked memory array to packed output bus
//  genvar g;
//  generate
//    for (g = 0; g < MEM_DEPTH; g++) begin : gen_flatten
//      assign program_mem_flat[g*8 +: 8] = program_mem[g];
//    end
//  endgenerate


  always_comb begin
    bootload_busy  = (state == BL_LOAD_DATA);
    bootload_done  = (state == BL_DONE);
    bootload_error = (state == BL_ERROR);
    
    bytes_loaded   = received_bytes;          // write_ptr;
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      state          <= BL_WAIT_LEN;
      expected_bytes <= '0;
      received_bytes <= '0;
      byte_in_word   <= 2'd0;
      assembled_word <= 32'h00000000;
      next_word_addr <= 32'h00000000;

      load_valid     <= 1'b0;
      load_addr      <= 32'h00000000;
      load_data      <= 32'h00000000;
    end else begin
      // default: pulse load_valid for one cycle only
      load_valid <= 1'b0;

      case (state)
      
        BL_WAIT_LEN: begin
          if (uart_rx_valid) begin
            if (uart_rx_data == 8'd0) begin
              state <= BL_ERROR;
              
            end else if (uart_rx_data > MEM_BYTES[7:0]) begin
              state <= BL_ERROR;
              
            end else if (uart_rx_data[1:0] != 2'b00) begin
              // must be a whole number of 32-bit instructions
              state <= BL_ERROR;
            end else begin
              expected_bytes <= COUNT_W'(uart_rx_data);
              received_bytes <= '0;
              byte_in_word   <= 2'd0;
              assembled_word <= 32'h00000000;
              next_word_addr <= 32'h00000000;
              state          <= BL_LOAD_DATA;
            end
          end
        end

        // Receive program bytes and emit 32-bit writes
        BL_LOAD_DATA: begin
          if (uart_rx_valid) begin
            case (byte_in_word)
              2'd0: assembled_word[7:0]   <= uart_rx_data;
              2'd1: assembled_word[15:8]  <= uart_rx_data;
              2'd2: assembled_word[23:16] <= uart_rx_data;
              2'd3: assembled_word[31:24] <= uart_rx_data;
            endcase

            received_bytes                <= received_bytes + 1'b1;

            if (byte_in_word == 2'd3) begin
              // complete 32-bit word ready this cycle
              load_valid                  <= 1'b1;
              load_addr                   <= next_word_addr;
              load_data                   <= {uart_rx_data, assembled_word[23:0]};

              next_word_addr              <= next_word_addr + 32'd4;
              byte_in_word                <= 2'd0;

              if ((received_bytes + 1'b1) == expected_bytes) begin
                state                     <= BL_DONE;
              end
            end
            else begin
              byte_in_word                <= byte_in_word + 1'b1;
            end
          end
        end

        // Done: hold until reset
        BL_DONE: begin
          state <= BL_DONE;
        end

        // Error: hold until reset
        BL_ERROR: begin
          state <= BL_ERROR;
        end

        default: begin
          state <= BL_ERROR;
        end
      endcase
    end
  end

//  always_ff @(posedge clk) begin
//    if (!rst_n) begin
//      state            <= BL_WAIT_LEN;
//      expected_bytes   <= '0;
//      write_ptr        <= '0;

//      for (i = 0; i < MEM_DEPTH; i++) begin
//        program_mem[i] <= 8'h00;
//      end
//    end else begin
//      case (state)
//        BL_WAIT_LEN: begin

//          if (uart_rx_valid) begin
//            // First byte = payload length
//            if (uart_rx_data == 8'd0) begin
//              state          <= BL_ERROR;
//            end else if (uart_rx_data > MEM_DEPTH) begin
//              state          <= BL_ERROR;
//            end else begin
//              expected_bytes <= COUNT_W'(uart_rx_data);
//              write_ptr      <= '0;
//              state          <= BL_LOAD_DATA;
//            end
//          end

//        end

//        BL_LOAD_DATA: begin
//          if (uart_rx_valid) begin
//            if (write_ptr < expected_bytes) begin
//              program_mem[write_ptr[ADDR_W-1:0]] <= uart_rx_data;
//              write_ptr <= write_ptr + 1'b1;

//              if ((write_ptr + 1'b1) == expected_bytes) begin
//                state <= BL_DONE;
//              end

//            end else begin
//              state <= BL_ERROR;
//            end
//          end
//        end

//        BL_DONE: begin
//          // Hold done until reset.
//          // Could be extended later with a restart command.
//          state <= BL_DONE;
//        end

//        BL_ERROR: begin
//          // Hold error until reset.
//          state <= BL_ERROR;
//        end

//        default: begin
//          state <= BL_ERROR;
//        end
//      endcase
//    end
//  end

endmodule