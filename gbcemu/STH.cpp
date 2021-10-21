#include "STH.h"

STH::STH() {}
STH::STH(CPU* Cpu) { this->cpu = Cpu; }

void STH::INS_STH_H(u32& Cycles, Memory& memory)
{
	Word Addr = cpu->FetchWord(Cycles, memory);
	memory[Addr] = cpu->A;
	Cycles--;
}
