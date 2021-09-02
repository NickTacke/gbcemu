#include "LDD.h"

LDD::LDD() {}
LDD::LDD(CPU* Cpu) { this->cpu = Cpu; }

void LDD::INS_LDD_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->D = Value;
	cpu->Z = (cpu->D == 0);
	cpu->N = (cpu->D & 0x80) > 0;
	Cycles--;
}
