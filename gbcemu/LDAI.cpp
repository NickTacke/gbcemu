#include "LDAI.h"

LDAI::LDAI() {}
LDAI::LDAI(CPU* Cpu) { this->cpu = Cpu; }

void LDAI::INS_LDAI_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->A = Value;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
