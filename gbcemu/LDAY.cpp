#include "LDAY.h"

LDAY::LDAY() {}
LDAY::LDAY(CPU* Cpu) { this->cpu = Cpu; }

void LDAY::INS_LDAY_H(u32& Cycles, Memory& memory)
{
	Byte Value = memory[cpu->FetchWord(Cycles, memory)];
	cpu->Y = Value;
	cpu->Z = (cpu->Y == 0);
	cpu->N = (cpu->Y & 0x80) > 0;
	Cycles--;
}
