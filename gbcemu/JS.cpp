#include "JS.h"

JS::JS() {}
JS::JS(CPU* Cpu) { this->cpu = Cpu; }

void JS::INS_JS_H(u32& Cycles, Memory& memory)
{
	if (cpu->N)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
