#pragma once
#include "6502.h"

class HALT
{
public:
	CPU* cpu = new CPU();
	HALT();
	HALT(CPU* Cpu);
	void INS_HALT_H(u32& Cycles, Memory& memory);
};
