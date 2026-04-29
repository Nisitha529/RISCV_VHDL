#include "memory/dmem.h"

DMem::DMem(size_t size) : mem(size, 0) {}

uint32_t DMem::load(uint32_t addr, uint8_t width) const {

  switch (width) {

    case 8: // byte
      return mem[addr];

    case 16: // half
      return mem[addr] | (mem[addr + 1] << 8);

    case 32: // word
      return mem[addr] | (mem[addr + 1] << 8) | (mem[addr + 2] << 16) | (mem[addr + 3] << 24);

    default:
      return 0;
  }
}

void DMem::store(uint32_t addr, uint32_t data, uint8_t width) {

  switch (width) {

    case 8:
      mem[addr]     = data & 0xFF;
    break;

    case 16:
      mem[addr]     = data & 0xFF;
      mem[addr + 1] = (data >> 8) & 0xFF;
    break;

    case 32:
      mem[addr]     = data & 0xFF;
      mem[addr + 1] = (data >> 8) & 0xFF;
      mem[addr + 2] = (data >> 16) & 0xFF;
      mem[addr + 3] = (data >> 24) & 0xFF;
    break;
  }
}