#include "RLA.h"

RLA::RLA() {}
RLA::RLA(CPU* Cpu) { this->cpu = Cpu; }

void RLA::INS_RLA_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
