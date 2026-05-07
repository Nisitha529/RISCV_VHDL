module immediate_generator (
  input  logic [31 : 0] instr,
  input  logic [2 : 0]  imm_type,

  output logic [31 : 0] imm_out
);

  logic [31 : 0] imm_i;
  logic [31 : 0] imm_s;
  logic [31 : 0] imm_b;
  logic [31 : 0] imm_u;
  logic [31 : 0] imm_j;

  // Immediate extraction
  always_comb begin : imm_extract
    // I-type
    imm_i = {{20{instr[31]}}, instr[31 : 20]};

    // S-type
    imm_s = {{20{instr[31]}}, instr[31 : 25], instr[11 : 7]};

    // B-type
    imm_b = {{19{instr[31]}}, instr[31], instr[7], instr[30 : 25], instr[11 : 8], 1'b0};

    // U-type
    imm_u = {instr[31 : 12], 12'b0};

    // J-type
    imm_j = {{11{instr[31]}}, instr[31], instr[19 : 12], instr[20], instr[30 : 21], 1'b0};

  end

  // Immediate selection
  always_comb begin : imm_select
    case (imm_type)
      // I-type
      3'd0    : imm_out = imm_i;

      // S-type
      3'd1    : imm_out = imm_s;

      // B-type
      3'd2    : imm_out = imm_b;

      // U-type
      3'd3    : imm_out = imm_u;

      // J-type
      3'd4    : imm_out = imm_j;

      default : imm_out = 32'd0;

    endcase
  end

endmodule