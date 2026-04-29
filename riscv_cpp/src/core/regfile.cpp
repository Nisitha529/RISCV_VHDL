#include "core/regfile.h"
#include <iostream>

RegFile::RegFile() {
  regs.fill(0);
}

// Read 
uint32_t RegFile::read(uint32_t addr) const {
	if (addr == 0)
		return 0;  // x0 always zero

	return regs[addr];
}

// Write 
void RegFile::write(uint32_t addr, uint32_t data, bool enable) {
	if (!enable)
		return;

	if (addr == 0)
		return; // x0 is read-only

	regs[addr] = data;
}

// Debug dump
void RegFile::dump() const {
	for (int i = 0; i < 32; i++) {
		std::cout << "x" << i << " = " << regs[i] << std::endl;
	}
}