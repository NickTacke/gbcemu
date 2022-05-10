#pragma once

/* Include all opcodes */
#include "Opcodes.h"

struct Memory
{
	static constexpr u32 MAX_MEM = 1024 * 64;
	Byte Data[MAX_MEM];

	void Initialise();

	/* Read 1 byte from memory */
	Byte operator[](u32 Address) const;

	/* Write 1 byte to memory */
	Byte& operator[](u32 Address);

	/* Write 2 bytes to memory */
	void WriteWord(Word Value, u32 Address, u32& Cycles);
};

class CPU
{
public:

	/* Program counter */
	Word PC;
	/*  Stack pointer  */
	Byte SP;

	/* Registers */
	Byte A, X, Y;

	/* Status flags */
	Byte C : 1;
	Byte Z : 1;
	Byte I : 1;
	Byte D : 1;
	Byte B : 1;
	Byte V : 1;
	Byte N : 1;

	/* Function to reset the cpu */
	void Reset(Memory& memory);

	/* Function to fetch an instruction from the memory */
	Byte FetchByte(u32& Cycles, Memory& memory);
	/* Function to read a piece of data from the memory */
	Byte ReadByte(u32& Cycles, Memory& memory);

	/* Function to fetch a 2 byte instruction from memory */
	Word FetchWord(u32& Cycles, Memory& memory);

	/* Function to execute a list of instructions */
	u32 Execute(u32 Cycles, Memory& memory);
};