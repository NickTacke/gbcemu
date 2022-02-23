#include "RRCA.h"

RRCA::RRCA() {}
RRCA::RRCA(CPU* Cpu) { this->cpu = Cpu; }

void RRCA::INS_RRCA_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
