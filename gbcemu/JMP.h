#pragma once
#include "6502.h"

class JMP
{
public:
	CPU* cpu = new CPU();
	JMP();
	JMP(CPU* Cpu);
	void INS_JMP_H(u32& Cycles, Memory& memory);
};
