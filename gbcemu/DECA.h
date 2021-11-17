#pragma once
#include "6502.h"

class DECA
{
public:
	CPU* cpu = new CPU();
	DECA();
	DECA(CPU* Cpu);
	void INS_DECA_H(u32& Cycles, Memory& memory);
};
