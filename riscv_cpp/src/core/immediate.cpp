#include "core/immediate.h"

int32_t Immediate::generate(uint32_t instr, ImmType type) {
  
	switch (type) {
    case ImmType::U :
		  return (int32_t)(instr & 0xFFFFF000);

    case ImmType::J : {
		  int32_t imm = (int32_t)( ((instr >> 31) << 20) | (((instr >> 12) & 0xFF) << 12) | (((instr >> 20) & 0x1) << 11) | (((instr >> 21) & 0x3FF) << 1) );

			if (imm & (1 << 20))
			  imm |= 0xFFF00000;

      return imm;

		}

		case ImmType::I :
		  return (int32_t) instr >> 20;

		case ImmType::B : {
		  int32_t imm = (int32_t)( ((instr >> 31) << 12) | (((instr >> 7) & 0x1) << 11) | (((instr >> 25) & 0x3F) << 5) | (((instr >> 8) & 0xF) << 1));
      
			if (imm & (1 << 12))
			  imm |= 0xFFFFE000;

      return imm;

		}

    case ImmType::S: { 
		  int32_t imm = (int32_t)( ((instr >> 25) << 5) | ((instr >> 7) & 0x1F));

			if (imm & (1 < 11))
			  imm |= 0xFFFFF000;

			return imm;
		}

    default:
      return 0;
	}
}