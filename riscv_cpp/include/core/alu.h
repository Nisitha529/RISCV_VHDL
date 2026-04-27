#pragma once
#include <cstdint>

enum class ALUOp {
  ADD,
	SUB,

	AND,
	OR,
	XOR,

	SLL,
	SRL,
	SRA,

	SLT,
	SLTU
};

struct ALUInput {
  uint32_t A;
	uint32_t B;

	ALUOp    op;
};

struct ALUOutput {
  uint32_t result;

	bool     zero;
};

class ALU {
  public :
	  static ALUOutput execute (const ALUInput& in);
};