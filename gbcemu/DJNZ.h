#pragma once
#include "6502.h"

class DJNZ
{
public:
	CPU* cpu = new CPU();
	DJNZ();
	DJNZ(CPU* Cpu);
	void INS_DJNZ_H(u32& Cycles, Memory& memory);
};
