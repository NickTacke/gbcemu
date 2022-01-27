#include "JZ.h"

JZ::JZ() {}
JZ::JZ(CPU* Cpu) { this->cpu = Cpu; }

void JZ::INS_JZ_H(u32& Cycles, Memory& memory)
{
	if (cpu->Z)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
