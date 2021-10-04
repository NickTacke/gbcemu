#pragma once
#include "6502.h"

class STD
{
public:
	CPU* cpu = new CPU();
	STD();
	STD(CPU* Cpu);
	void INS_STD_H(u32& Cycles, Memory& memory);
};
