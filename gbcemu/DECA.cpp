#include "DECA.h"

DECA::DECA() {}
DECA::DECA(CPU* Cpu) { this->cpu = Cpu; }

void DECA::INS_DECA_H(u32& Cycles, Memory& memory)
{
	cpu->A--;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
