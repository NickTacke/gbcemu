#include "JSR.h"

JSR::JSR() {}
JSR::JSR(CPU* Cpu) { this->cpu = Cpu; }

void JSR::INS_JSR_ABS_H(u32& Cycles, Memory& memory)
{
	Word SubAddr = cpu->FetchWord(Cycles, memory);

	memory.WriteWord(cpu->PC - 1, cpu->SP, Cycles);
	cpu->SP++;
	
	cpu->PC = SubAddr;
	Cycles--;
}