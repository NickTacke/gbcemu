#pragma once
#include "6502.h"

class NOP
{
public:
	CPU* cpu = new CPU();
	NOP();
	NOP(CPU* Cpu);
	void INS_NOP_H(u32& Cycles, Memory& memory);
};
