#pragma once
#include "6502.h"

class DJNZ0
{
public:
	CPU* cpu = new CPU();
	DJNZ0();
	DJNZ0(CPU* Cpu);
	void INS_DJNZ0_H(u32& Cycles, Memory& memory);
};
