#include "DAA.h"

DAA::DAA() {}
DAA::DAA(CPU* Cpu) { this->cpu = Cpu; }

void DAA::INS_DAA_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
