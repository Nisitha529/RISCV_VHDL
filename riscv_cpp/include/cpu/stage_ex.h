#pragma once
#include "cpu/pipeline.h"
#include "cpu/forwarding_unit.h"
#include "core/alu.h"

class StageEX {
  public:
    static void run(const ID_EX& id_ex, const EX_MEM& ex_mem, const MEM_WB& mem_wb, EX_MEM& next_ex_mem);
};