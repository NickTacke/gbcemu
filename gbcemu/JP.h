#pragma once
#include "6502.h"

class JP
{
public:
	CPU* cpu = new CPU();
	JP();
	JP(CPU* Cpu);
	void INS_JP_H(u32& Cycles, Memory& memory);
};
