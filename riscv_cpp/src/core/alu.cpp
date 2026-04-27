#include "core/alu.h"
#include <stdexcept>

ALUOutput ALU::execute (const ALUInput& in) {
  ALUOutput out {};

	switch (in.op) {
    case ALUOp:: ADD :
		  out.result = in.A + in.B;
			break;
		
    case ALUOp:: SUB : 
		  out.result = in.A - in.B;
			break;

    case ALUOp:: AND :
		  out.result = in.A & in.B;
			break;

    case ALUOp:: OR :
		  out.result = in.A | in.B;
			break;

    case ALUOp:: XOR :
		  out.result = in.A ^ in.B;
			break;

    case ALUOp:: SLL :
		  out.result = in.A << (in.B & 0x1F);
			break;
			
    case ALUOp:: SRL :
		  out.result = in.A >> (in.B & 0x1F);
			break;	

    case ALUOp:: SRA :
		  out.result = (int32_t) in.A >> (in.B & 0x1F);
			break;
			
    case ALUOp:: SLT :
		  out.result = ((int32_t)in.A < (int32_t)in.B) ? 1 : 0;
			break;	

    case ALUOp:: SLTU :
		  out.result = (in.A < in.B) ? 1 : 0;
			break;
			
		default : 
		  throw std::runtime_error ("Invalid ALU Operation");
	}

	out.zero = (out.result == 0);

	return out;

}