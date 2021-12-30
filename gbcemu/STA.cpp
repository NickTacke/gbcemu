#include "STA.h"

STA::STA() {}
STA::STA(CPU* Cpu) { this->cpu = Cpu; }

void STA::INS_STA_H(u32& Cycles, Memory& memory)
{
	Word Addr = cpu->FetchWord(Cycles, memory);
	memory[Addr] = cpu->A;
	Cycles--;
}
