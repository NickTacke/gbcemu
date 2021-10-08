#pragma once
#include "6502.h"

class RLCA
{
public:
	CPU* cpu = new CPU();
	RLCA();
	RLCA(CPU* Cpu);
	void INS_RLCA_H(u32& Cycles, Memory& memory);
};
