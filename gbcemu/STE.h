#pragma once
#include "6502.h"

class STE
{
public:
	CPU* cpu = new CPU();
	STE();
	STE(CPU* Cpu);
	void INS_STE_H(u32& Cycles, Memory& memory);
};
