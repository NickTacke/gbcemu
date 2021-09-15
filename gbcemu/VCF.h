#pragma once
#include "6502.h"

class VCF
{
public:
	CPU* cpu = new CPU();
	VCF();
	VCF(CPU* Cpu);
	void INS_VCF_H(u32& Cycles, Memory& memory);
};
