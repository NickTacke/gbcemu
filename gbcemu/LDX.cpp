#include "LDX.h"

LDX::LDX() {}
LDX::LDX(CPU* Cpu) { this->cpu = Cpu; }

void LDX::INS_LDX_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->X = Value;
	cpu->Z = (cpu->X == 0);
	cpu->N = (cpu->X & 0x80) > 0;
	Cycles--;
}
