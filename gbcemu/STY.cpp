#include "STY.h"

STY::STY() {}
STY::STY(CPU* Cpu) { this->cpu = Cpu; }

void STY::INS_STY_H(u32& Cycles, Memory& memory)
{
	Word Addr = cpu->FetchWord(Cycles, memory);
	memory[Addr] = cpu->Y;
	Cycles--;
}
