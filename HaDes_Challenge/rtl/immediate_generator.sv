`timescale 1ns/1ps

module immediate_generator (
    input  logic [31:0] instr,
    input  logic [2:0]  imm_type,
    output logic [31:0] imm_out
);

    always_comb begin
        unique case (imm_type)
            3'd0: imm_out = {{20{instr[31]}}, instr[31:20]};                                      // I
            3'd1: imm_out = {{20{instr[31]}}, instr[31:25], instr[11:7]};                          // S
            3'd2: imm_out = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}; // B
            3'd3: imm_out = {instr[31:12], 12'b0};                                                  // U
            3'd4: imm_out = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0}; // J
            default: imm_out = 32'd0;
        endcase
    end

endmodule