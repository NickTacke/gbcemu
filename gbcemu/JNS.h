#pragma once
#include "6502.h"

class JNS
{
public:
	CPU* cpu = new CPU();
	JNS();
	JNS(CPU* Cpu);
	void INS_JNS_H(u32& Cycles, Memory& memory);
};
