#pragma once
#include <cstdint>
#include <vector>

class DMem {
  public:
    DMem(size_t size);

  // Load
  uint32_t load(uint32_t addr, uint8_t width) const;

  // Store
  void store(uint32_t addr, uint32_t data, uint8_t width);

  private:
    std::vector<uint8_t> mem;
};