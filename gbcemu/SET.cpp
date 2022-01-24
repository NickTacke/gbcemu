#include "SET.h"

SET::SET() {}
SET::SET(CPU* Cpu) { this->cpu = Cpu; }

void SET::INS_SET_H(u32& Cycles, Memory& memory)
{
	Byte Reg = cpu->A;
	/* bit %s on operand */
	(void)Reg;
	Cycles--;
}
