#include "JNP.h"

JNP::JNP() {}
JNP::JNP(CPU* Cpu) { this->cpu = Cpu; }

void JNP::INS_JNP_H(u32& Cycles, Memory& memory)
{
	if (!cpu->B)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
