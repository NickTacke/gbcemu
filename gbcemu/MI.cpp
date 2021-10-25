#include "MI.h"

MI::MI() {}
MI::MI(CPU* Cpu) { this->cpu = Cpu; }

void MI::INS_MI_H(u32& Cycles, Memory& memory)
{
	if (cpu->N)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
