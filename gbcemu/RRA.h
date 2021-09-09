#pragma once
#include "6502.h"

class RRA
{
public:
	CPU* cpu = new CPU();
	RRA();
	RRA(CPU* Cpu);
	void INS_RRA_H(u32& Cycles, Memory& memory);
};
