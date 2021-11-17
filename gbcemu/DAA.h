#pragma once
#include "6502.h"

class DAA
{
public:
	CPU* cpu = new CPU();
	DAA();
	DAA(CPU* Cpu);
	void INS_DAA_H(u32& Cycles, Memory& memory);
};
