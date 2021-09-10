#include "DJNZ0.h"

DJNZ0::DJNZ0() {}
DJNZ0::DJNZ0(CPU* Cpu) { this->cpu = Cpu; }

void DJNZ0::INS_DJNZ0_H(u32& Cycles, Memory& memory)
{
	Byte Off = (s8)cpu->FetchByte(Cycles, memory);
	if (cpu->A)
	{
		cpu->PC += Off;
	}
	Cycles--;
}
