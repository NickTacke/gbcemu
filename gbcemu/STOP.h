#pragma once
#include "6502.h"

class STOP
{
public:
	CPU* cpu = new CPU();
	STOP();
	STOP(CPU* Cpu);
	void INS_STOP_H(u32& Cycles, Memory& memory);
};
