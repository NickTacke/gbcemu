#pragma once
#include "6502.h"

class LDD
{
public:
	CPU* cpu = new CPU();
	LDD();
	LDD(CPU* Cpu);
	void INS_LDD_H(u32& Cycles, Memory& memory);
};
