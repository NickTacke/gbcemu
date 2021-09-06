#pragma once
#include "6502.h"

class JRN
{
public:
	CPU* cpu = new CPU();
	JRN();
	JRN(CPU* Cpu);
	void INS_JRN_H(u32& Cycles, Memory& memory);
};
