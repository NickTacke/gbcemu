#include "VCF.h"

VCF::VCF() {}
VCF::VCF(CPU* Cpu) { this->cpu = Cpu; }

void VCF::INS_VCF_H(u32& Cycles, Memory& memory)
{
	if (cpu->V)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
