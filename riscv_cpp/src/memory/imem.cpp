#include "memory/imem.h"
#include <fstream>
#include <sstream>
#include <iostream>

IMem::IMem(size_t size) : mem(size / 4, 0) {}

void IMem::load_hex(const std::string& filename) {
  std::ifstream file(filename);
  std::string line;

  uint32_t addr = 0;

  while (std::getline(file, line)) {
    std::stringstream ss;
    ss << std::hex << line;
    ss >> mem[addr++];
  }
}

uint32_t IMem::read(uint32_t addr) const {
  return mem[addr >> 2];  // word aligned
}