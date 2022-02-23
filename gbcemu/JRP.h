#pragma once
#include "6502.h"

class JRP
{
public:
	CPU* cpu = new CPU();
	JRP();
	JRP(CPU* Cpu);
	void INS_JRP_H(u32& Cycles, Memory& memory);
};
