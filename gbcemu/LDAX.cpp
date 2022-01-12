#include "LDAX.h"

LDAX::LDAX() {}
LDAX::LDAX(CPU* Cpu) { this->cpu = Cpu; }

void LDAX::INS_LDAX_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->X = Value;
	cpu->Z = (cpu->X == 0);
	cpu->N = (cpu->X & 0x80) > 0;
	Cycles--;
}
