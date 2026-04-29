#pragma once
#include <cstdint>
#include <vector>
#include <string>

class IMem {
  public:
    IMem(size_t size);

  // Load program (hex file)
  void load_hex(const std::string& filename);

  // Instruction fetch
  uint32_t read(uint32_t addr) const;

  private:
    std::vector<uint32_t> mem;
};