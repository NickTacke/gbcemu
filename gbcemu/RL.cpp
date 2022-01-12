#include "RL.h"

RL::RL() {}
RL::RL(CPU* Cpu) { this->cpu = Cpu; }

void RL::INS_RL_H(u32& Cycles, Memory& memory)
{
	/* %s: rotate/adjust A */
	(void)0;
	Cycles--;
}
