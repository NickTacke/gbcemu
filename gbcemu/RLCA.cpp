#include "RLCA.h"

RLCA::RLCA() {}
RLCA::RLCA(CPU* Cpu) { this->cpu = Cpu; }

void RLCA::INS_RLCA_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
