#pragma once
#include <cstdint>
#include <array>

class RegFile {
public:
  RegFile();

  // Read ports 
  uint32_t read(uint32_t addr) const;

  // Write port 
  void write(uint32_t addr, uint32_t data, bool enable);

  // Debug helper
  void dump() const;

private:
  std::array<uint32_t, 32> regs;
};