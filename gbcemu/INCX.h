#pragma once
#include "6502.h"

class INCX
{
public:
	CPU* cpu = new CPU();
	INCX();
	INCX(CPU* Cpu);
	void INS_INCX_H(u32& Cycles, Memory& memory);
};
