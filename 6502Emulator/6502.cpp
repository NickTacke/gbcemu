#include <iostream>

#include "6502.h"

#include "JSR.h"

#include "LDA.h"

/*
	Set up handlers
*/
JSR JSRHandler;

LDA LDAHandler;

void Memory::Initialise()
{
	for (u32 i = 0; i < MAX_MEM; i++)
	{
		Data[i] = 0;
	}
}

/* Read 1 byte from memory */
Byte Memory::operator[](u32 Address) const
{
	// TODO : Add assert statement to prevent reading invalid memory location.

	return Data[Address];
}

/* Write 1 byte to memory */
Byte& Memory::operator[](u32 Address)
{
	// TODO : Add assert statement to prevent writing to invalid memory location.

	return Data[Address];
}

/* Write 2 bytes to memory */
void Memory::WriteWord(Word Value, u32 Address, u32& Cycles)
{
	Data[Address] = Value & 0xFF;
	Data[Address + 1] = (Value >> 8);
	Cycles -= 2;
}

/* Function to reset the cpu */
void CPU::Reset(Memory& memory)
{
	/* Set up handlers */
	JSRHandler = JSR(this);

	LDAHandler = LDA(this);

	/* Rest the program counter and stack pointer */
	PC = 0xFFFC;
	SP = 0x01;

	/* Reset all flags */
	A = X = Y = 0;
	C = Z = I = D = B = V = N = 0;

	/* Initialise memory- */
	memory.Initialise();
}

/* Function to fetch an instruction from the memory */
Byte CPU::FetchByte(u32& Cycles, Memory& memory)
{
	Byte Data = memory[PC];
	PC++;
	Cycles--;
	return Data;
}

/* Function to read a piece of data from the memory */
Byte CPU::ReadByte(u32& Cycles, Memory& memory)
{
	Byte Data = memory[PC];
	Cycles--;
	return Data;
}

/* Function to fetch a 2 byte instruction from memory */
Word CPU::FetchWord(u32& Cycles, Memory& memory)
{
	// The 6502 CPU is a little endian system

	Word Data = memory[PC];
	PC++;
	
	Data |= (memory[PC] << 8);
	PC++;

	Cycles -= 2;

	return Data;
}

/* Function to execute a list of instructions */
u32 CPU::Execute(u32 Cycles, Memory& memory)
{
	u32 CyclesCopy = Cycles;

	while (Cycles > 0)
	{
		Byte Instruction = FetchByte(Cycles, memory);

		switch (Instruction)
		{
		/* Begin of switch statement*/

		// JSR
		case INS_JSR_ABS:
		{
			JSRHandler.INS_JSR_ABS_H(Cycles, memory);
			break;
		}

		// LDA 
		case INS_LDA_IM:
		{
			LDAHandler.INS_LDA_IM_H(Cycles, memory);
			break;
		}

		// INSTRUCTION NOT FOUND
		default:
		{
			std::cout << "[ERROR] Could not run instruction: " << (int)Instruction << std::hex << std::endl;
			break;
		}

		/* End of switch statement */
		}
	}

	return (CyclesCopy - Cycles);
}
// cpu: clarify branch-target resolution
// cpu: normalize operand-size handling for immediate forms
// cpu: bound the program-counter wraparound
// cpu: factor the decode dispatch into a data-driven table
// cpu: annotate the exception/undefined-opcode path
// cpu: tidy immediate-operand extraction
// cpu: centralize status-flag updates
// cpu: annotate register-alias resolution
// cpu: clarify cycle accounting for multi-cycle ops
// cpu: guard out-of-range memory accesses
// cpu: tidy the decode switch and drop dead branches
