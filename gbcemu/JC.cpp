#include "JC.h"

JC::JC() {}
JC::JC(CPU* Cpu) { this->cpu = Cpu; }

void JC::INS_JC_H(u32& Cycles, Memory& memory)
{
	if (cpu->C)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
