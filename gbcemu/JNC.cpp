#include "JNC.h"

JNC::JNC() {}
JNC::JNC(CPU* Cpu) { this->cpu = Cpu; }

void JNC::INS_JNC_H(u32& Cycles, Memory& memory)
{
	if (!cpu->C)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
