#pragma once
#include "6502.h"

class JRA
{
public:
	CPU* cpu = new CPU();
	JRA();
	JRA(CPU* Cpu);
	void INS_JRA_H(u32& Cycles, Memory& memory);
};
