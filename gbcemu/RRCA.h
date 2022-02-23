#pragma once
#include "6502.h"

class RRCA
{
public:
	CPU* cpu = new CPU();
	RRCA();
	RRCA(CPU* Cpu);
	void INS_RRCA_H(u32& Cycles, Memory& memory);
};
