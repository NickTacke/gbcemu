#pragma once
#include "6502.h"

class BIT
{
public:
	CPU* cpu = new CPU();
	BIT();
	BIT(CPU* Cpu);
	void INS_BIT_H(u32& Cycles, Memory& memory);
};
