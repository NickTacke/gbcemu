#pragma once
#include "6502.h"

class JSR
{
public:
	CPU* cpu = new CPU();

	JSR();
	JSR(CPU* Cpu);

	void INS_JSR_ABS_H(u32& Cycles, Memory& memory);
};