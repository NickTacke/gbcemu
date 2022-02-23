#include "SR.h"

SR::SR() {}
SR::SR(CPU* Cpu) { this->cpu = Cpu; }

void SR::INS_SR_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
