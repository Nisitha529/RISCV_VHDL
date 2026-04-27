#include "core/immediate.h"

int32_t Immediate::generate(uint32_t instr, ImmType type) {
  
	switch (type) {
    case ImmType::U :
		  return (int32_t)(instr & 0xFFFFF000);

    case ImmType::J :
		  return (int32_t)( ((instr >> 31) << 20) | (((instr >> 12) & 0xFF) << 12) | (((instr >> 20) & 0x1) << 11) | (((instr >> 21) & 0x3FF) << 1) );

		case ImmType::I :
		  return (int32_t) instr >> 20;

		case ImmType::B :
		  return (int32_t)( ((instr >> 31) << 12) | (((instr >> 7) & 0x1) << 11) | (((instr >> 25) & 0x3F) << 5) | (((instr >> 8) & 0xF) << 1));

    case ImmType::S: 
		  return (int32_t)( ((instr >> 25) << 5) | ((instr >> 7) & 0x1F));

    default:
      return 0;
	}
}