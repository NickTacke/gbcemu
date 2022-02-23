#include "JRP.h"

JRP::JRP() {}
JRP::JRP(CPU* Cpu) { this->cpu = Cpu; }

void JRP::INS_JRP_H(u32& Cycles, Memory& memory)
{
	cpu->PC = cpu->FetchWord(Cycles, memory);
	Cycles--;
}
