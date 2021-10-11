#include "ADDA.h"

ADDA::ADDA() {}
ADDA::ADDA(CPU* Cpu) { this->cpu = Cpu; }

void ADDA::INS_ADDA_H(u32& Cycles, Memory& memory)
{
	Byte Op = cpu->FetchByte(Cycles, memory);
	cpu->A = cpu->A + Op;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
