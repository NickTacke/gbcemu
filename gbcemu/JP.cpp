#include "JP.h"

JP::JP() {}
JP::JP(CPU* Cpu) { this->cpu = Cpu; }

void JP::INS_JP_H(u32& Cycles, Memory& memory)
{
	if (cpu->B)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
