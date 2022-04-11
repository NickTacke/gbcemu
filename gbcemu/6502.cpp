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
	JNPHandler = JNP(this);
	JPHandler = JP(this);
	JCHandler = JC(this);
	JNCHandler = JNC(this);
	JSHandler = JS(this);
	JNZHandler = JNZ(this);
	JNSHandler = JNS(this);
	JRHandler = JR(this);
	JZHandler = JZ(this);
	JRNHandler = JRN(this);
	JRPHandler = JRP(this);
	JRAHandler = JRA(this);
	JMPHandler = JMP(this);
	XORXHandler = XORX(this);
	ORXHandler = ORX(this);
	ANDXHandler = ANDX(this);
	SUBAHandler = SUBA(this);
	ADDAHandler = ADDA(this);
	DECXHandler = DECX(this);
	INCXHandler = INCX(this);
	DECAHandler = DECA(this);
	INCAHandler = INCA(this);
	STLHandler = STL(this);
	STHHandler = STH(this);
	STEHandler = STE(this);
	STDHandler = STD(this);
	STYHandler = STY(this);
	STXHandler = STX(this);
	STAHandler = STA(this);
	LDAYHandler = LDAY(this);
	LDAXHandler = LDAX(this);
	LDAIHandler = LDAI(this);
	LDHLHandler = LDHL(this);
	LDHHandler = LDH(this);
	LDEHandler = LDE(this);
	LDDHandler = LDD(this);
	LDYHandler = LDY(this);
	LDXHandler = LDX(this);

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

		// LDX
		case INS_LDX:
		{
			LDXHandler.INS_LDX_H(Cycles, memory);
			break;
		}
		
		// LDY
		case INS_LDY:
		{
			LDYHandler.INS_LDY_H(Cycles, memory);
			break;
		}
		
		// LDD
		case INS_LDD:
		{
			LDDHandler.INS_LDD_H(Cycles, memory);
			break;
		}
		
		// LDE
		case INS_LDE:
		{
			LDEHandler.INS_LDE_H(Cycles, memory);
			break;
		}
		
		// LDH
		case INS_LDH:
		{
			LDHHandler.INS_LDH_H(Cycles, memory);
			break;
		}
		
		// LDHL
		case INS_LDHL:
		{
			LDHLHandler.INS_LDHL_H(Cycles, memory);
			break;
		}
		
		// LDAI
		case INS_LDAI:
		{
			LDAIHandler.INS_LDAI_H(Cycles, memory);
			break;
		}
		
		// LDAX
		case INS_LDAX:
		{
			LDAXHandler.INS_LDAX_H(Cycles, memory);
			break;
		}
		
		// LDAY
		case INS_LDAY:
		{
			LDAYHandler.INS_LDAY_H(Cycles, memory);
			break;
		}
		
		// STA
		case INS_STA:
		{
			STAHandler.INS_STA_H(Cycles, memory);
			break;
		}
		
		// STX
		case INS_STX:
		{
			STXHandler.INS_STX_H(Cycles, memory);
			break;
		}
		
		// STY
		case INS_STY:
		{
			STYHandler.INS_STY_H(Cycles, memory);
			break;
		}
		
		// STD
		case INS_STD:
		{
			STDHandler.INS_STD_H(Cycles, memory);
			break;
		}
		
		// STE
		case INS_STE:
		{
			STEHandler.INS_STE_H(Cycles, memory);
			break;
		}
		
		// STH
		case INS_STH:
		{
			STHHandler.INS_STH_H(Cycles, memory);
			break;
		}
		
		// STL
		case INS_STL:
		{
			STLHandler.INS_STL_H(Cycles, memory);
			break;
		}
		
		// INCA
		case INS_INCA:
		{
			INCAHandler.INS_INCA_H(Cycles, memory);
			break;
		}
		
		// DECA
		case INS_DECA:
		{
			DECAHandler.INS_DECA_H(Cycles, memory);
			break;
		}
		
		// INCX
		case INS_INCX:
		{
			INCXHandler.INS_INCX_H(Cycles, memory);
			break;
		}
		
		// DECX
		case INS_DECX:
		{
			DECXHandler.INS_DECX_H(Cycles, memory);
			break;
		}
		
		// ADDA
		case INS_ADDA:
		{
			ADDAHandler.INS_ADDA_H(Cycles, memory);
			break;
		}
		
		// SUBA
		case INS_SUBA:
		{
			SUBAHandler.INS_SUBA_H(Cycles, memory);
			break;
		}
		
		// ANDX
		case INS_ANDX:
		{
			ANDXHandler.INS_ANDX_H(Cycles, memory);
			break;
		}
		
		// ORX
		case INS_ORX:
		{
			ORXHandler.INS_ORX_H(Cycles, memory);
			break;
		}
		
		// XORX
		case INS_XORX:
		{
			XORXHandler.INS_XORX_H(Cycles, memory);
			break;
		}
		
		// JMP
		case INS_JMP:
		{
			JMPHandler.INS_JMP_H(Cycles, memory);
			break;
		}
		
		// JRA
		case INS_JRA:
		{
			JRAHandler.INS_JRA_H(Cycles, memory);
			break;
		}
		
		// JRP
		case INS_JRP:
		{
			JRPHandler.INS_JRP_H(Cycles, memory);
			break;
		}
		
		// JRN
		case INS_JRN:
		{
			JRNHandler.INS_JRN_H(Cycles, memory);
			break;
		}
		
		// JZ
		case INS_JZ:
		{
			JZHandler.INS_JZ_H(Cycles, memory);
			break;
		}
		
		// JR
		case INS_JR:
		{
			JRHandler.INS_JR_H(Cycles, memory);
			break;
		}
		
		// JNS
		case INS_JNS:
		{
			JNSHandler.INS_JNS_H(Cycles, memory);
			break;
		}
		
		// JNZ
		case INS_JNZ:
		{
			JNZHandler.INS_JNZ_H(Cycles, memory);
			break;
		}
		
		// JS
		case INS_JS:
		{
			JSHandler.INS_JS_H(Cycles, memory);
			break;
		}
		
		// JNC
		case INS_JNC:
		{
			JNCHandler.INS_JNC_H(Cycles, memory);
			break;
		}
		
		// JC
		case INS_JC:
		{
			JCHandler.INS_JC_H(Cycles, memory);
			break;
		}
		
		// JP
		case INS_JP:
		{
			JPHandler.INS_JP_H(Cycles, memory);
			break;
		}
		
		// JNP
		case INS_JNP:
		{
			JNPHandler.INS_JNP_H(Cycles, memory);
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
// cpu: annotate the fetch/execute boundary
// cpu: factor flag-dependent behaviour into helpers
// cpu: clarify flag-update semantics after ALU ops
// cpu: factor repeat-loop handling out of the dispatch
