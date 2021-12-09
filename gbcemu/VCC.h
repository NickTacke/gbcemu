#pragma once
#include "6502.h"

class VCC
{
public:
	CPU* cpu = new CPU();
	VCC();
	VCC(CPU* Cpu);
	void INS_VCC_H(u32& Cycles, Memory& memory);
};
