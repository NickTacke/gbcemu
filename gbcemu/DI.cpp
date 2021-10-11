#include "DI.h"

DI::DI() {}
DI::DI(CPU* Cpu) { this->cpu = Cpu; }

void DI::INS_DI_H(u32& Cycles, Memory& memory)
{
	/* %s: interrupt control */
	Cycles--;
}
