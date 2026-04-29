#pragma once
#include <cstdint>
#include "core/alu.h"
#include "core/immediate.h"

struct ControlSignals {

  // ALU
  ALUOp   alu_op;
  bool    alu_use_imm;

  // Register file
  bool    write_rd;

  // Memory
  bool    write_mem;
  bool    mem_access;
  uint8_t mem_width;

  // Control flow
  bool    jump;
  bool    is_branch;

  // Writeback
  uint8_t rd_data_src;

  // Immediate
  ImmType imm_type;
};

class Control {
  public:
    static ControlSignals generate(uint32_t opcode, uint32_t funct3, uint32_t funct7);
};