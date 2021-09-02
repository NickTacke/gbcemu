#include "STX.h"

STX::STX() {}
STX::STX(CPU* Cpu) { this->cpu = Cpu; }

void STX::INS_STX_H(u32& Cycles, Memory& memory)
{
	Word Addr = cpu->FetchWord(Cycles, memory);
	memory[Addr] = cpu->X;
	Cycles--;
}
