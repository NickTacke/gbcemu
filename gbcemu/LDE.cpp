#include "LDE.h"

LDE::LDE() {}
LDE::LDE(CPU* Cpu) { this->cpu = Cpu; }

void LDE::INS_LDE_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->E = Value;
	cpu->Z = (cpu->E == 0);
	cpu->N = (cpu->E & 0x80) > 0;
	Cycles--;
}
