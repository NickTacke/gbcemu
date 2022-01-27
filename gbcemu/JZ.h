#pragma once
#include "6502.h"

class JZ
{
public:
	CPU* cpu = new CPU();
	JZ();
	JZ(CPU* Cpu);
	void INS_JZ_H(u32& Cycles, Memory& memory);
};
