#pragma once
#include "6502.h"

class STA
{
public:
	CPU* cpu = new CPU();
	STA();
	STA(CPU* Cpu);
	void INS_STA_H(u32& Cycles, Memory& memory);
};
