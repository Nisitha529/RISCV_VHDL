#pragma once

#include "memory/imem.h"
#include "memory/dmem.h"
#include "core/regfile.h"

#include "cpu/pipeline_structs.h"  

class Pipeline {
  public:
    Pipeline(IMem& imem, DMem& dmem, RegFile& regfile);

    void tick();

  private:
    uint32_t pc;

    IMem& imem;
    DMem& dmem;
    RegFile& regfile;

    // Pipeline registers
    IF_ID  if_id{};
    ID_EX  id_ex{};
    EX_MEM ex_mem{};
    MEM_WB mem_wb{};
};