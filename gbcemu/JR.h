#pragma once
#include "6502.h"

class JR
{
public:
	CPU* cpu = new CPU();
	JR();
	JR(CPU* Cpu);
	void INS_JR_H(u32& Cycles, Memory& memory);
};
