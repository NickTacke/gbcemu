#pragma once
#include "6502.h"

class RR
{
public:
	CPU* cpu = new CPU();
	RR();
	RR(CPU* Cpu);
	void INS_RR_H(u32& Cycles, Memory& memory);
};
