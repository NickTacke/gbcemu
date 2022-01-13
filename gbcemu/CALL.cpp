#include "CALL.h"

CALL::CALL() {}
CALL::CALL(CPU* Cpu) { this->cpu = Cpu; }

void CALL::INS_CALL_H(u32& Cycles, Memory& memory)
{
		Word Ret = cpu->PC + 2;
		memory.WriteWord(Ret, cpu->SP, Cycles);
		cpu->SP++;
		cpu->PC = cpu->FetchWord(Cycles, memory);
		Cycles--;

}
