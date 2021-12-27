#include "CALLNZ.h"

CALLNZ::CALLNZ() {}
CALLNZ::CALLNZ(CPU* Cpu) { this->cpu = Cpu; }

void CALLNZ::INS_CALLNZ_H(u32& Cycles, Memory& memory)
{
if (!cpu->Z)
	{
		Word Ret = cpu->PC + 2;
		memory.WriteWord(Ret, cpu->SP, Cycles);
		cpu->SP++;
		cpu->PC = cpu->FetchWord(Cycles, memory);
		Cycles--;
	}

}
