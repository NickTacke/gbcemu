#include "HALT.h"

HALT::HALT() {}
HALT::HALT(CPU* Cpu) { this->cpu = Cpu; }

void HALT::INS_HALT_H(u32& Cycles, Memory& memory)
{
	/* %s: interrupt control */
	Cycles--;
}
