#include "DECX.h"

DECX::DECX() {}
DECX::DECX(CPU* Cpu) { this->cpu = Cpu; }

void DECX::INS_DECX_H(u32& Cycles, Memory& memory)
{
	cpu->A--;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
