#pragma once
#include "6502.h"

class LDHL
{
public:
	CPU* cpu = new CPU();
	LDHL();
	LDHL(CPU* Cpu);
	void INS_LDHL_H(u32& Cycles, Memory& memory);
};
