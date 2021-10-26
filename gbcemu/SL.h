#pragma once
#include "6502.h"

class SL
{
public:
	CPU* cpu = new CPU();
	SL();
	SL(CPU* Cpu);
	void INS_SL_H(u32& Cycles, Memory& memory);
};
