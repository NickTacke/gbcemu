#pragma once
#include "6502.h"

class SMCLK
{
public:
	CPU* cpu = new CPU();
	SMCLK();
	SMCLK(CPU* Cpu);
	void INS_SMCLK_H(u32& Cycles, Memory& memory);
};
