#pragma once
#include "6502.h"

class CALL
{
public:
	CPU* cpu = new CPU();
	CALL();
	CALL(CPU* Cpu);
	void INS_CALL_H(u32& Cycles, Memory& memory);
};
