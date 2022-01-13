#include "RES.h"

RES::RES() {}
RES::RES(CPU* Cpu) { this->cpu = Cpu; }

void RES::INS_RES_H(u32& Cycles, Memory& memory)
{
	Byte Reg = cpu->A;
	/* bit %s on operand */
	(void)Reg;
	Cycles--;
}
