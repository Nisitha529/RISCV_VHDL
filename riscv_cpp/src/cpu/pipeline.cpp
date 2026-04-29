#include "cpu/pipeline.h"

#include "cpu/stage_if.h"
#include "cpu/stage_id.h"
#include "cpu/stage_ex.h"
#include "cpu/stage_mem.h"
#include "cpu/stage_wb.h"

#include "cpu/hazard_unit.h"

// Constructor
Pipeline::Pipeline (IMem& imem_ref, DMem& dmem_ref, RegFile& regfile_ref)
  : imem(imem_ref), dmem(dmem_ref), regfile(regfile_ref) {

  pc = 0;
}

// One pipeline cycle
void Pipeline::tick() {

  // Next pipeline registers
  IF_ID  next_if_id {};
  ID_EX  next_id_ex {};
  EX_MEM next_ex_mem {};
  MEM_WB next_mem_wb {};

  // WB stage
  StageWB::run (mem_wb, regfile);

  // MEM stage
  StageMEM::run (ex_mem, dmem, next_mem_wb);

  // EX stage
  StageEX::run(id_ex, ex_mem, mem_wb, next_ex_mem);

  // Hazard detection
  auto hazard = HazardUnit::detect(if_id, id_ex, ex_mem);

  // Branch / jump redirect
  bool redirect = false;
  uint32_t redirect_pc = 0;

  if (ex_mem.valid && (ex_mem.take_branch || ex_mem.ctrl.jump)) {
    redirect = true;
    redirect_pc = ex_mem.branch_target;
  }

  // ID stage
  if (!hazard.stall) {
    StageID::run(if_id.instr, if_id.pc, regfile, next_id_ex);
  } else {
    // Insert bubble
    next_id_ex.valid = false;
  }

  // IF stage
  if (!hazard.stall) {
    StageIF::run(pc, imem, redirect, redirect_pc, next_if_id);
  } else {
    // Freeze IF
    next_if_id = if_id;
  }

  // Flush (control hazard)
  if (hazard.flush) {
    next_if_id.valid = false;
    next_id_ex.valid = false;
  }

  // Commit (clock edge)
  mem_wb = next_mem_wb;
  ex_mem = next_ex_mem;
  id_ex  = next_id_ex;
  if_id  = next_if_id;
}