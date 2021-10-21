#pragma once
#include "6502.h"

class STH
{
public:
	CPU* cpu = new CPU();
	STH();
	STH(CPU* Cpu);
	void INS_STH_H(u32& Cycles, Memory& memory);
};
