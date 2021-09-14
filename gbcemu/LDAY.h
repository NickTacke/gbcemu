#pragma once
#include "6502.h"

class LDAY
{
public:
	CPU* cpu = new CPU();
	LDAY();
	LDAY(CPU* Cpu);
	void INS_LDAY_H(u32& Cycles, Memory& memory);
};
