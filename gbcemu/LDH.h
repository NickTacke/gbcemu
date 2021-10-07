#pragma once
#include "6502.h"

class LDH
{
public:
	CPU* cpu = new CPU();
	LDH();
	LDH(CPU* Cpu);
	void INS_LDH_H(u32& Cycles, Memory& memory);
};
