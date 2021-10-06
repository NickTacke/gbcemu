#pragma once
#include "6502.h"

class LDX
{
public:
	CPU* cpu = new CPU();
	LDX();
	LDX(CPU* Cpu);
	void INS_LDX_H(u32& Cycles, Memory& memory);
};
