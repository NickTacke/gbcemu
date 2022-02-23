#pragma once
#include "6502.h"

class SR
{
public:
	CPU* cpu = new CPU();
	SR();
	SR(CPU* Cpu);
	void INS_SR_H(u32& Cycles, Memory& memory);
};
