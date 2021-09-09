#include "RRA.h"

RRA::RRA() {}
RRA::RRA(CPU* Cpu) { this->cpu = Cpu; }

void RRA::INS_RRA_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
