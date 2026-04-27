#pragma once
#include <cstdint>

struct DecodedInst {
  uint32_t opcode;
	uint32_t rd;
	uint32_t funct3;
	uint32_t rs1;
	uint32_t rs2;
	uint32_t funct7;
};

class Decoder {
  public :
	  static DecodedInst decode (uint32_t inst);
};