#pragma once
#include "6502.h"

class EI
{
public:
	CPU* cpu = new CPU();
	EI();
	EI(CPU* Cpu);
	void INS_EI_H(u32& Cycles, Memory& memory);
};
