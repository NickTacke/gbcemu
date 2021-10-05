#include "INCA.h"

INCA::INCA() {}
INCA::INCA(CPU* Cpu) { this->cpu = Cpu; }

void INCA::INS_INCA_H(u32& Cycles, Memory& memory)
{
	cpu->A++;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
