#include "LDA.h"

LDA::LDA() {}
LDA::LDA(CPU* Cpu) { this->cpu = Cpu; }

void LDA::SetStatus()
{
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0b10000000) > 0;
}

void LDA::INS_LDA_IM_H(u32& Cycles, Memory& memory)
{
	Byte Value = cpu->FetchByte(Cycles, memory);

	cpu->A = Value;
	SetStatus();
}