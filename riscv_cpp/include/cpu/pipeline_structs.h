#pragma once
#include <cstdint>
#include "core/control.h"

struct IF_ID {
  uint32_t pc;
  uint32_t instr;

  bool     valid = false;
};

struct ID_EX {
  uint32_t pc;

  // Register operands
  uint32_t A;
  uint32_t B;

  // Immediate
  int32_t  imm;

  // Register indices
  uint32_t rs1;
  uint32_t rs2;
  uint32_t rd;

  // Control signals
  ControlSignals ctrl;

  bool valid = false;
};

struct EX_MEM {
  uint32_t pc;

  uint32_t alu_result;
  uint32_t B;              // store data

  uint32_t rd;

  // Control signals
  ControlSignals ctrl;

  // Branch
  bool take_branch;
  uint32_t branch_target;

  bool valid = false;
};

struct MEM_WB {
  uint32_t alu_result;
  uint32_t mem_data;

  uint32_t rd;

  ControlSignals ctrl;

  bool valid = false;
};