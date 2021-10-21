#include "LDHL.h"

LDHL::LDHL() {}
LDHL::LDHL(CPU* Cpu) { this->cpu = Cpu; }

void LDHL::INS_LDHL_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->A = Value;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
