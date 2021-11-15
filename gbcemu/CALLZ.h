#pragma once
#include "6502.h"

class CALLZ
{
public:
	CPU* cpu = new CPU();
	CALLZ();
	CALLZ(CPU* Cpu);
	void INS_CALLZ_H(u32& Cycles, Memory& memory);
};
