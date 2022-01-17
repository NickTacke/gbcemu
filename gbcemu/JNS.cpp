#include "JNS.h"

JNS::JNS() {}
JNS::JNS(CPU* Cpu) { this->cpu = Cpu; }

void JNS::INS_JNS_H(u32& Cycles, Memory& memory)
{
	if (!cpu->N)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
