#pragma once
#include "6502.h"

class RES
{
public:
	CPU* cpu = new CPU();
	RES();
	RES(CPU* Cpu);
	void INS_RES_H(u32& Cycles, Memory& memory);
};
