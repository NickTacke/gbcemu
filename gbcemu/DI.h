#pragma once
#include "6502.h"

class DI
{
public:
	CPU* cpu = new CPU();
	DI();
	DI(CPU* Cpu);
	void INS_DI_H(u32& Cycles, Memory& memory);
};
