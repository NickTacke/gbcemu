#include "NOP.h"

NOP::NOP() {}
NOP::NOP(CPU* Cpu) { this->cpu = Cpu; }

void NOP::INS_NOP_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
