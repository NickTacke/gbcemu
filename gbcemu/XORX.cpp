#include "XORX.h"

XORX::XORX() {}
XORX::XORX(CPU* Cpu) { this->cpu = Cpu; }

void XORX::INS_XORX_H(u32& Cycles, Memory& memory)
{
	Byte Op = cpu->FetchByte(Cycles, memory);
	cpu->A = cpu->A ^ Op;
	cpu->Z = (cpu->A == 0);
	cpu->N = (cpu->A & 0x80) > 0;
	Cycles--;
}
