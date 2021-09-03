#pragma once
#include "6502.h"

class JNC
{
public:
	CPU* cpu = new CPU();
	JNC();
	JNC(CPU* Cpu);
	void INS_JNC_H(u32& Cycles, Memory& memory);
};
