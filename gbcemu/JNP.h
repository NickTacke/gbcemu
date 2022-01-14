#pragma once
#include "6502.h"

class JNP
{
public:
	CPU* cpu = new CPU();
	JNP();
	JNP(CPU* Cpu);
	void INS_JNP_H(u32& Cycles, Memory& memory);
};
