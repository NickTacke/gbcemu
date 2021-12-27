#pragma once
#include "6502.h"

class CALLNZ
{
public:
	CPU* cpu = new CPU();
	CALLNZ();
	CALLNZ(CPU* Cpu);
	void INS_CALLNZ_H(u32& Cycles, Memory& memory);
};
