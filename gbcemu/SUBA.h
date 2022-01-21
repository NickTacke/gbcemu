#pragma once
#include "6502.h"

class SUBA
{
public:
	CPU* cpu = new CPU();
	SUBA();
	SUBA(CPU* Cpu);
	void INS_SUBA_H(u32& Cycles, Memory& memory);
};
