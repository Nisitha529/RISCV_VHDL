#pragma once
#include <cstdint>

enum class ImmType {
  I,
	S,
	B,
	U,
	J,
	NONE
};

class Immediate {
  public : 
	  static int32_t generate (uint32_t instr, ImmType type);
};