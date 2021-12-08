#pragma once
#include "6502.h"

class RETN
{
public:
	CPU* cpu = new CPU();
	RETN();
	RETN(CPU* Cpu);
	void INS_RETN_H(u32& Cycles, Memory& memory);
};
