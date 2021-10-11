#include "JR.h"

JR::JR() {}
JR::JR(CPU* Cpu) { this->cpu = Cpu; }

void JR::INS_JR_H(u32& Cycles, Memory& memory)
{
	cpu->PC = (cpu->PC + (s8)cpu->FetchByte(Cycles, memory));
	Cycles--;
}
