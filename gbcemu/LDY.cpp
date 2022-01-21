#include "LDY.h"

LDY::LDY() {}
LDY::LDY(CPU* Cpu) { this->cpu = Cpu; }

void LDY::INS_LDY_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->Y = Value;
	cpu->Z = (cpu->Y == 0);
	cpu->N = (cpu->Y & 0x80) > 0;
	Cycles--;
}
