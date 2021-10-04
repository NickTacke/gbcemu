#pragma once
#include "6502.h"

class JC
{
public:
	CPU* cpu = new CPU();
	JC();
	JC(CPU* Cpu);
	void INS_JC_H(u32& Cycles, Memory& memory);
};
