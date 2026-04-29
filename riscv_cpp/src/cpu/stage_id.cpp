#include "cpu/stage_id.h"

void StageID::run(uint32_t instr, uint32_t pc, const RegFile& regfile, ID_EX& next_id_ex) {

  // Decode instruction
  auto decoded = Decoder::decode(instr);

  // Generate control
  auto ctrl = Control::generate(decoded.opcode, decoded.funct3, decoded.funct7);

  // Read register file
  uint32_t A = regfile.read(decoded.rs1);
  uint32_t B = regfile.read(decoded.rs2);

  // Immediate generation
  int32_t imm = Immediate::generate(instr, ctrl.imm_type);

  // Fill pipeline register
  next_id_ex.pc    = pc;

  next_id_ex.A     = A;
  next_id_ex.B     = B;

  next_id_ex.imm   = imm;

  next_id_ex.rs1   = decoded.rs1;
  next_id_ex.rs2   = decoded.rs2;
  next_id_ex.rd    = decoded.rd;

  next_id_ex.ctrl  = ctrl;

  next_id_ex.valid = true;
}