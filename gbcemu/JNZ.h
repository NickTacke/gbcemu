#pragma once
#include "6502.h"

class JNZ
{
public:
	CPU* cpu = new CPU();
	JNZ();
	JNZ(CPU* Cpu);
	void INS_JNZ_H(u32& Cycles, Memory& memory);
};
