#include "STL.h"

STL::STL() {}
STL::STL(CPU* Cpu) { this->cpu = Cpu; }

void STL::INS_STL_H(u32& Cycles, Memory& memory)
{
	Word Addr = cpu->FetchWord(Cycles, memory);
	memory[Addr] = cpu->A;
	Cycles--;
}
