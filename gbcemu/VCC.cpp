#include "VCC.h"

VCC::VCC() {}
VCC::VCC(CPU* Cpu) { this->cpu = Cpu; }

void VCC::INS_VCC_H(u32& Cycles, Memory& memory)
{
	if (!cpu->V)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
