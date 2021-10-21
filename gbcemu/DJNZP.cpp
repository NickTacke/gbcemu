#include "DJNZP.h"

DJNZP::DJNZP() {}
DJNZP::DJNZP(CPU* Cpu) { this->cpu = Cpu; }

void DJNZP::INS_DJNZP_H(u32& Cycles, Memory& memory)
{
	Byte Off = (s8)cpu->FetchByte(Cycles, memory);
	if (cpu->A)
	{
		cpu->PC += Off;
	}
	Cycles--;
}
