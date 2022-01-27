#pragma once
#include "6502.h"

class ORX
{
public:
	CPU* cpu = new CPU();
	ORX();
	ORX(CPU* Cpu);
	void INS_ORX_H(u32& Cycles, Memory& memory);
};
