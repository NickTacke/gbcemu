#include "STD.h"

STD::STD() {}
STD::STD(CPU* Cpu) { this->cpu = Cpu; }

void STD::INS_STD_H(u32& Cycles, Memory& memory)
{
	Word Addr = cpu->FetchWord(Cycles, memory);
	memory[Addr] = cpu->D;
	Cycles--;
}
