#pragma once
#include "6502.h"

class LDAI
{
public:
	CPU* cpu = new CPU();
	LDAI();
	LDAI(CPU* Cpu);
	void INS_LDAI_H(u32& Cycles, Memory& memory);
};
