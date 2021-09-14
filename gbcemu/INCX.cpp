#include "INCX.h"

INCX::INCX() {}
INCX::INCX(CPU* Cpu) { this->cpu = Cpu; }

void INCX::INS_INCX_H(u32& Cycles, Memory& memory)
{
	cpu->A++;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
