#include "RR.h"

RR::RR() {}
RR::RR(CPU* Cpu) { this->cpu = Cpu; }

void RR::INS_RR_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
