#pragma once
#include "6502.h"

class SET
{
public:
	CPU* cpu = new CPU();
	SET();
	SET(CPU* Cpu);
	void INS_SET_H(u32& Cycles, Memory& memory);
};
