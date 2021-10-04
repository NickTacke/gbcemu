#include "RET.h"

RET::RET() {}
RET::RET(CPU* Cpu) { this->cpu = Cpu; }

void RET::INS_RET_H(u32& Cycles, Memory& memory)
{
	Word Ret = memory[cpu->SP];
	memory[cpu->SP + 1] = (Word)0;
	cpu->PC = Ret;
	Cycles--;
}
