#pragma once
#include "6502.h"

class RLA
{
public:
	CPU* cpu = new CPU();
	RLA();
	RLA(CPU* Cpu);
	void INS_RLA_H(u32& Cycles, Memory& memory);
};
