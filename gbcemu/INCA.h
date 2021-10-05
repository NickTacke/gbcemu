#pragma once
#include "6502.h"

class INCA
{
public:
	CPU* cpu = new CPU();
	INCA();
	INCA(CPU* Cpu);
	void INS_INCA_H(u32& Cycles, Memory& memory);
};
