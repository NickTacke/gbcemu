#include "JRN.h"

JRN::JRN() {}
JRN::JRN(CPU* Cpu) { this->cpu = Cpu; }

void JRN::INS_JRN_H(u32& Cycles, Memory& memory)
{
	cpu->PC = cpu->FetchWord(Cycles, memory);
	Cycles--;
}
