#include "core/decoder.h"

DecodedInst Decoder:: decode (uuint32_t inst) {
  DecodedInst d;

	d.opcode = inst & 0x7F;
	d.rd     = (inst >> 7)  & 0x1F;
	d.funct3 = (inst >> 12) & 0x7;
	d.rs1    = (inst >> 15) & 0x1F;
	d.rs2    = (inst >> 20) & 0x1F;
	d.funct7 = (inst >> 25) & 0x7F;

	return d;
}