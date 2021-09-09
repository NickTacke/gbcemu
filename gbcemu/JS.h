#pragma once
#include "6502.h"

class JS
{
public:
	CPU* cpu = new CPU();
	JS();
	JS(CPU* Cpu);
	void INS_JS_H(u32& Cycles, Memory& memory);
};
