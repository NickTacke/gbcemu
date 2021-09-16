#pragma once
#include "6502.h"

class STL
{
public:
	CPU* cpu = new CPU();
	STL();
	STL(CPU* Cpu);
	void INS_STL_H(u32& Cycles, Memory& memory);
};
