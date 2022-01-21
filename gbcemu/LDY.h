#pragma once
#include "6502.h"

class LDY
{
public:
	CPU* cpu = new CPU();
	LDY();
	LDY(CPU* Cpu);
	void INS_LDY_H(u32& Cycles, Memory& memory);
};
