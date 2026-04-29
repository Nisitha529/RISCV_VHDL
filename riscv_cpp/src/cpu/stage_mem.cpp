#include "cpu/stage_mem.h"

void StageMEM::run(const EX_MEM& ex_mem, DMem& dmem, MEM_WB& next_mem_wb) {

  if (!ex_mem.valid) {
    next_mem_wb.valid = false;
    return;
  }

  uint32_t mem_data = 0;

  // Memory Access
  if (ex_mem.ctrl.mem_access) {
    if (ex_mem.ctrl.write_mem) {
      // STORE
      dmem.store(ex_mem.alu_result, ex_mem.B, ex_mem.ctrl.mem_width);
    } else {
      // LOAD
      mem_data = dmem.load(ex_mem.alu_result, ex_mem.ctrl.mem_width);
    }
  }

  // Fill MEM/WB register
  next_mem_wb.alu_result = ex_mem.alu_result;
  next_mem_wb.mem_data   = mem_data;

  next_mem_wb.rd         = ex_mem.rd;
  next_mem_wb.ctrl       = ex_mem.ctrl;

  next_mem_wb.valid      = true;
}