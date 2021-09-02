#pragma once
#include "6502.h"

class STX
{
public:
	CPU* cpu = new CPU();
	STX();
	STX(CPU* Cpu);
	void INS_STX_H(u32& Cycles, Memory& memory);
};
