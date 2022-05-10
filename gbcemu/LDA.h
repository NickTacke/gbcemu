#pragma once
#include "6502.h"

class LDA
{
public:
	CPU* cpu = new CPU();

	LDA();
	LDA(CPU* Cpu);

	void SetStatus();

	void INS_LDA_IM_H(u32& Cycles, Memory& memory);
};