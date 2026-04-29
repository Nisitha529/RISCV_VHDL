#pragma once
#include "cpu/pipeline.h"
#include "core/regfile.h"

class StageWB {
  public:
    static void run(const MEM_WB& mem_wb, RegFile& regfile);
};