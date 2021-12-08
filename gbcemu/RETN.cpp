#include "RETN.h"

RETN::RETN() {}
RETN::RETN(CPU* Cpu) { this->cpu = Cpu; }

void RETN::INS_RETN_H(u32& Cycles, Memory& memory)
{
	Word Ret = memory[cpu->SP];
	memory[cpu->SP + 1] = (Word)0;
	cpu->PC = Ret;
	Cycles--;
}
