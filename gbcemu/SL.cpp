#include "SL.h"

SL::SL() {}
SL::SL(CPU* Cpu) { this->cpu = Cpu; }

void SL::INS_SL_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
