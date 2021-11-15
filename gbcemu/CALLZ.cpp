#include "CALLZ.h"

CALLZ::CALLZ() {}
CALLZ::CALLZ(CPU* Cpu) { this->cpu = Cpu; }

void CALLZ::INS_CALLZ_H(u32& Cycles, Memory& memory)
{
if (cpu->Z)
	{
		Word Ret = cpu->PC + 2;
		memory.WriteWord(Ret, cpu->SP, Cycles);
		cpu->SP++;
		cpu->PC = cpu->FetchWord(Cycles, memory);
		Cycles--;
	}

}
