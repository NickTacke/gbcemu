#include "JRA.h"

JRA::JRA() {}
JRA::JRA(CPU* Cpu) { this->cpu = Cpu; }

void JRA::INS_JRA_H(u32& Cycles, Memory& memory)
{
	cpu->PC = cpu->FetchWord(Cycles, memory);
	Cycles--;
}
