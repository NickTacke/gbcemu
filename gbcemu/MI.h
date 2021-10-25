#pragma once
#include "6502.h"

class MI
{
public:
	CPU* cpu = new CPU();
	MI();
	MI(CPU* Cpu);
	void INS_MI_H(u32& Cycles, Memory& memory);
};
