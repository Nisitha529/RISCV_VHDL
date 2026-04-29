#pragma once
#include "cpu/pipeline.h"
#include "memory/dmem.h"

class StageMEM {
  public:
    static void run(const EX_MEM& ex_mem, DMem& dmem, MEM_WB& next_mem_wb);
};