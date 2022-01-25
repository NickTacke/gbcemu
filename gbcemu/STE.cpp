#include "STE.h"

STE::STE() {}
STE::STE(CPU* Cpu) { this->cpu = Cpu; }

void STE::INS_STE_H(u32& Cycles, Memory& memory)
{
	Word Addr = cpu->FetchWord(Cycles, memory);
	memory[Addr] = cpu->E;
	Cycles--;
}
