#include "cpu/cpu.h"
#include <iostream>

// Constructor
CPU::CPU (size_t imem_size, size_t dmem_size)
  : imem (imem_size),
    dmem (dmem_size),
    regfile (),
    pipeline (imem, dmem, regfile) 
  {}

// Load program into instruction memory
void CPU::load_program(const std::string& filename) {
  imem.load_hex(filename);
}

// Run simulation
void CPU::run(uint32_t cycles) {

  for (uint32_t i = 0; i < cycles; ++i) {
    std::cout << "Cycle: " << i << std::endl;
    pipeline.tick();
  }

  std::cout << "\nFinal Register State:\n";
  regfile.dump();
}