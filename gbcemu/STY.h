#pragma once
#include "6502.h"

class STY
{
public:
	CPU* cpu = new CPU();
	STY();
	STY(CPU* Cpu);
	void INS_STY_H(u32& Cycles, Memory& memory);
};
