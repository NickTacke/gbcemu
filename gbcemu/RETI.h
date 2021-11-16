#pragma once
#include "6502.h"

class RETI
{
public:
	CPU* cpu = new CPU();
	RETI();
	RETI(CPU* Cpu);
	void INS_RETI_H(u32& Cycles, Memory& memory);
};
