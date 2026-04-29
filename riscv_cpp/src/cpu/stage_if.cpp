#include "cpu/stage_if.h"

void StageIF::run(uint32_t& pc, const IMem& imem, bool redirect, uint32_t redirect_pc, IF_ID& next_if_id) {

  // PC selection (branch / jump)
  uint32_t current_pc = redirect ? redirect_pc : pc;

  // Fetch instruction
  uint32_t instr   = imem.read(current_pc);

  // Fill IF/ID pipeline register
  next_if_id.pc    = current_pc;
  next_if_id.instr = instr;
  next_if_id.valid = true;

  // Next PC calculation
  if (redirect) {
    pc = redirect_pc;
  } else {
    pc = pc + 4;
  }
}