#pragma once
#include "6502.h"

class SWAP
{
public:
	CPU* cpu = new CPU();
	SWAP();
	SWAP(CPU* Cpu);
	void INS_SWAP_H(u32& Cycles, Memory& memory);
};
