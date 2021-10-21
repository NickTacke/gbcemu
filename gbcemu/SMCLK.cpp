#include "SMCLK.h"

SMCLK::SMCLK() {}
SMCLK::SMCLK(CPU* Cpu) { this->cpu = Cpu; }

void SMCLK::INS_SMCLK_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
