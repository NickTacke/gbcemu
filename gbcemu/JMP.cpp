#include "JMP.h"

JMP::JMP() {}
JMP::JMP(CPU* Cpu) { this->cpu = Cpu; }

void JMP::INS_JMP_H(u32& Cycles, Memory& memory)
{
	cpu->PC = cpu->FetchWord(Cycles, memory);
	Cycles--;
}
