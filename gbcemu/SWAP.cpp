#include "SWAP.h"

SWAP::SWAP() {}
SWAP::SWAP(CPU* Cpu) { this->cpu = Cpu; }

void SWAP::INS_SWAP_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
