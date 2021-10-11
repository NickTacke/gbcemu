#pragma once
#include "6502.h"

class ADDA
{
public:
	CPU* cpu = new CPU();
	ADDA();
	ADDA(CPU* Cpu);
	void INS_ADDA_H(u32& Cycles, Memory& memory);
};
