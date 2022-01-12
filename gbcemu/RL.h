#pragma once
#include "6502.h"

class RL
{
public:
	CPU* cpu = new CPU();
	RL();
	RL(CPU* Cpu);
	void INS_RL_H(u32& Cycles, Memory& memory);
};
