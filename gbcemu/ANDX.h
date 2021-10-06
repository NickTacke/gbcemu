#pragma once
#include "6502.h"

class ANDX
{
public:
	CPU* cpu = new CPU();
	ANDX();
	ANDX(CPU* Cpu);
	void INS_ANDX_H(u32& Cycles, Memory& memory);
};
