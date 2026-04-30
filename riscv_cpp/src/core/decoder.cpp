#include "core/decoder.h"

DecodedInst Decoder::decode (uint32_t inst) {
  DecodedInst decoder_inst;

	decoder_inst.opcode = inst & 0x7F;
	decoder_inst.rd     = (inst >> 7)  & 0x1F;
	decoder_inst.funct3 = (inst >> 12) & 0x7;
	decoder_inst.rs1    = (inst >> 15) & 0x1F;
	decoder_inst.rs2    = (inst >> 20) & 0x1F;
	decoder_inst.funct7 = (inst >> 25) & 0x7F;

	return decoder_inst;
}