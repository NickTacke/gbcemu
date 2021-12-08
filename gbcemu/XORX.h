#pragma once
#include "6502.h"

class XORX
{
public:
	CPU* cpu = new CPU();
	XORX();
	XORX(CPU* Cpu);
	void INS_XORX_H(u32& Cycles, Memory& memory);
};
