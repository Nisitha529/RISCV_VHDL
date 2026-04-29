#include "core/alu.h"
#include <stdexcept>

ALUOutput ALU::execute (const ALUInput& in) {
  ALUOutput alu_output {};

	switch (in.op) {
    case ALUOp:: ADD :
		  alu_output.result = in.A + in.B;
			break;
		
    case ALUOp:: SUB : 
		  alu_output.result = in.A - in.B;
			break;

    case ALUOp:: AND :
		  alu_output.result = in.A & in.B;
			break;

    case ALUOp:: OR :
		  alu_output.result = in.A | in.B;
			break;

    case ALUOp:: XOR :
		  alu_output.result = in.A ^ in.B;
			break;

    case ALUOp:: SLL :
		  alu_output.result = in.A << (in.B & 0x1F);
			break;
			
    case ALUOp:: SRL :
		  alu_output.result = in.A >> (in.B & 0x1F);
			break;	

    case ALUOp:: SRA :
		  alu_output.result = (int32_t) in.A >> (in.B & 0x1F);
			break;
			
    case ALUOp:: SLT :
		  alu_output.result = ((int32_t)in.A < (int32_t)in.B) ? 1 : 0;
			break;	

    case ALUOp:: SLTU :
		  alu_output.result = (in.A < in.B) ? 1 : 0;
			break;
			
		default : 
		  throw std::runtime_error ("Invalid ALU Operation");
	}

	alu_output.zero = (alu_output.result == 0);

	return alu_output;

}