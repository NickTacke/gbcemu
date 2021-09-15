#pragma once
#include "6502.h"

class DECX
{
public:
	CPU* cpu = new CPU();
	DECX();
	DECX(CPU* Cpu);
	void INS_DECX_H(u32& Cycles, Memory& memory);
};
