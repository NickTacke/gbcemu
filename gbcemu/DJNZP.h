#pragma once
#include "6502.h"

class DJNZP
{
public:
	CPU* cpu = new CPU();
	DJNZP();
	DJNZP(CPU* Cpu);
	void INS_DJNZP_H(u32& Cycles, Memory& memory);
};
