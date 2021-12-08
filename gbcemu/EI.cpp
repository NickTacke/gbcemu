#include "EI.h"

EI::EI() {}
EI::EI(CPU* Cpu) { this->cpu = Cpu; }

void EI::INS_EI_H(u32& Cycles, Memory& memory)
{
	/* %s: interrupt control */
	Cycles--;
}
