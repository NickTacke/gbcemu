#pragma once
#include "6502.h"

class RET
{
public:
	CPU* cpu = new CPU();
	RET();
	RET(CPU* Cpu);
	void INS_RET_H(u32& Cycles, Memory& memory);
};
