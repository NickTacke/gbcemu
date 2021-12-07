#include "JNZ.h"

JNZ::JNZ() {}
JNZ::JNZ(CPU* Cpu) { this->cpu = Cpu; }

void JNZ::INS_JNZ_H(u32& Cycles, Memory& memory)
{
	if (!cpu->Z)
	{
		cpu->PC += (s8)cpu->FetchByte(Cycles, memory);
	}
	Cycles--;
}
