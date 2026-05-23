module control_unit (
  input  logic [6 : 0] opcode,
  input  logic [2 : 0] funct3,
  input  logic [6 : 0] funct7,

  // ALU
  output logic [3 : 0] alu_op,
  output logic         alu_use_imm,

  // Register file
  output logic         write_rd,

  // Memory
  output logic         write_mem,
  output logic         mem_access,
  output logic [5 : 0] mem_width,

  // Control flow
  output logic         jump,
  output logic         is_branch,

  // Writeback
  output logic [2 : 0] rd_data_src,

  // Immediate type
  output logic [2 : 0] imm_type
);

  always_comb begin : control_comb
    // Default values
    alu_op      = 4'd0;
    alu_use_imm = 1'b0;
    write_rd    = 1'b1;
    write_mem   = 1'b0;
    mem_access  = 1'b0;
    mem_width   = 32;
    jump        = 1'b0;
    is_branch   = 1'b0;
    rd_data_src = 3'd0;
    imm_type    = 3'd7;

    // Memory width
    if (opcode == 7'h03 || opcode == 7'h23) begin
      case (funct3)
        // BYTE
        3'b000  : mem_width = 8;

        // HALF
        3'b001  : mem_width = 16;

        // WORD
        3'b010  : mem_width = 32;

        // LBU
        3'b100  : mem_width = 8;

        // LHU
        3'b101  : mem_width = 16;

        default : mem_width = 32;

      endcase
    end

    // Jump
    if (opcode == 7'h6F || opcode == 7'h67)
      jump      = 1'b1;

    // Branch
    if (opcode == 7'h63)
      is_branch = 1'b1;

    // ALU OPERATION
    // SUB
    if (opcode == 7'h33 && funct3 == 3'b000 && funct7 == 7'h20)
      alu_op    = 4'd2;

    // SLT
    else if ((opcode == 7'h13 && funct3 == 3'b010) || (opcode == 7'h33 && funct3 == 3'b010))
      alu_op    = 4'd9;

    // SLTU
    else if ((opcode == 7'h13 && funct3 == 3'b011) || (opcode == 7'h33 && funct3 == 3'b011))
      alu_op    = 4'd10;

    // AND
    else if ((opcode == 7'h13 && funct3 == 3'b111) || (opcode == 7'h33 && funct3 == 3'b111))
      alu_op    = 4'd3;

    // OR
    else if ((opcode == 7'h13 && funct3 == 3'b110) || (opcode == 7'h33 && funct3 == 3'b110))
      alu_op    = 4'd4;

    // XOR
    else if ((opcode == 7'h13 && funct3 == 3'b100) || (opcode == 7'h33 && funct3 == 3'b100))
      alu_op    = 4'd5;

    // SLL
    else if ((opcode == 7'h13 && funct3 == 3'b001) || (opcode == 7'h33 && funct3 == 3'b001))
      alu_op    = 4'd6;

    // SRL / SRA
    else if ((opcode == 7'h13 && funct3 == 3'b101) || (opcode == 7'h33 && funct3 == 3'b101))
      alu_op    = (funct7 == 7'h20) ? 4'd8 : 4'd7;

    // ALU source selection
    alu_use_imm = (opcode == 7'h13) || // OP-IMM
                  (opcode == 7'h03) || // LOAD
                  (opcode == 7'h23) || // STORE
                  (opcode == 7'h67);   // JALR

    // Register write
    if (opcode == 7'h63 || opcode == 7'h23)
      write_rd  = 1'b0;

    // Memory control
    write_mem   = (opcode == 7'h23);

    mem_access  = (opcode == 7'h03 || opcode == 7'h23);

    // Writeback source
    // 0 -> ALU result
    // 1 -> AUIPC
    // 2 -> PC+4
    // 3 -> LUI immediate
    // 4 -> LOAD data
    if (opcode == 7'h17)
      rd_data_src = 3'd1;
    else if (opcode == 7'h6F || opcode == 7'h67)
      rd_data_src = 3'd2;
    else if (opcode == 7'h37)
      rd_data_src = 3'd3;
    else if (opcode == 7'h03)
      rd_data_src = 3'd4;

    // Immediate type
    // 0 -> I
    // 1 -> S
    // 2 -> B
    // 3 -> U
    // 4 -> J
    if (opcode == 7'h37 || opcode == 7'h17)
      imm_type = 3'd3;
    else if (opcode == 7'h6F)
      imm_type = 3'd4;
    else if (opcode == 7'h63)
      imm_type = 3'd2;
    else if (opcode == 7'h23)
      imm_type = 3'd1;
    else if (opcode == 7'h13 || opcode == 7'h03 || opcode == 7'h67)
      imm_type = 3'd0;

  end

endmodule