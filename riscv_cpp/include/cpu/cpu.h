#pragma once

#include <cstdint>
#include <string>

#include "memory/imem.h"
#include "memory/dmem.h"
#include "core/regfile.h"
#include "cpu/pipeline.h"

class CPU {
  public:
    CPU(size_t imem_size, size_t dmem_size);

    void load_program(const std::string& filename);
    void run(uint32_t cycles);

  private:
    IMem     imem;
    DMem     dmem;
    RegFile  regfile;

    Pipeline pipeline;
};  