#include "RETI.h"

RETI::RETI() {}
RETI::RETI(CPU* Cpu) { this->cpu = Cpu; }

void RETI::INS_RETI_H(u32& Cycles, Memory& memory)
{
	Word Ret = memory[cpu->SP];
	memory[cpu->SP + 1] = (Word)0;
	cpu->PC = Ret;
	cpu->I = 0;
	Cycles--;
}
