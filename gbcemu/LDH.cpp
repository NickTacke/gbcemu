#include "LDH.h"

LDH::LDH() {}
LDH::LDH(CPU* Cpu) { this->cpu = Cpu; }

void LDH::INS_LDH_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->A = Value;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
