#include "STOP.h"

STOP::STOP() {}
STOP::STOP(CPU* Cpu) { this->cpu = Cpu; }

void STOP::INS_STOP_H(u32& Cycles, Memory& memory)
{
	/* %s: interrupt control */
	Cycles--;
}
