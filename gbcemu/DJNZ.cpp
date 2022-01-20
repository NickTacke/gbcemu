#include "DJNZ.h"

DJNZ::DJNZ() {}
DJNZ::DJNZ(CPU* Cpu) { this->cpu = Cpu; }

void DJNZ::INS_DJNZ_H(u32& Cycles, Memory& memory)
{
	Byte Off = (s8)cpu->FetchByte(Cycles, memory);
	if (cpu->A)
	{
		cpu->PC += Off;
	}
	Cycles--;
}
