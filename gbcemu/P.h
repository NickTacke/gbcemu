#pragma once
#include "6502.h"

class P
{
public:
	CPU* cpu = new CPU();
	P();
	P(CPU* Cpu);
	void INS_P_H(u32& Cycles, Memory& memory);
};
