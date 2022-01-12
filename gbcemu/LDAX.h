#pragma once
#include "6502.h"

class LDAX
{
public:
	CPU* cpu = new CPU();
	LDAX();
	LDAX(CPU* Cpu);
	void INS_LDAX_H(u32& Cycles, Memory& memory);
};
