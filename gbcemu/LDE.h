#pragma once
#include "6502.h"

class LDE
{
public:
	CPU* cpu = new CPU();
	LDE();
	LDE(CPU* Cpu);
	void INS_LDE_H(u32& Cycles, Memory& memory);
};
