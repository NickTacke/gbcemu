#include "P.h"

P::P() {}
P::P(CPU* Cpu) { this->cpu = Cpu; }

void P::INS_P_H(u32& Cycles, Memory& memory)
{
	if (!cpu->B)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
