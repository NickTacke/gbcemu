#include "BIT.h"

BIT::BIT() {}
BIT::BIT(CPU* Cpu) { this->cpu = Cpu; }

void BIT::INS_BIT_H(u32& Cycles, Memory& memory)
{
	Byte Reg = cpu->A;
	/* bit %s on operand */
	(void)Reg;
	Cycles--;
}
