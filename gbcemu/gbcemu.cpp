#include <iostream>

/* CPU Class */
#include "6502.h"

/* Opcodes */
#include "Opcodes.h"

int main()
{
    /* Initialise the cpu component */
    CPU cpu;

    /* Initialise a memory structure */
    Memory memory;

    /* Reset the cpu */
    cpu.Reset(memory);

    /*                          *\
         Begin inline program
    \*                          */

    memory[0xFFFC] = INS_JSR_ABS;
    memory[0xFFFD] = 0x00;
    memory[0xFFFE] = 0x10;
    memory[0x1000] = INS_LDA_IM;
    memory[0x1001] = 0x69;

    /*                          *\
          End inline program
    \*                          */

    /* Execute a bit of code */
    cpu.Execute(9, memory);

    /* Print out registers */
    std::cout << "Registers:" << std::endl;
    std::cout << "A = " << (int)cpu.A << std::hex << std::endl;
    std::cout << "X = " << (int)cpu.X << std::hex << std::endl;
    std::cout << "Y = " << (int)cpu.Y << std::hex << std::endl;

    /* Print out status flags */
    std::cout << "Flags:" << std::endl;
    std::cout << "C = " << (int)cpu.C << std::hex << std::endl;
    std::cout << "Z = " << (int)cpu.Z << std::hex << std::endl;
    std::cout << "I = " << (int)cpu.I << std::hex << std::endl;
    std::cout << "D = " << (int)cpu.D << std::hex << std::endl;
    std::cout << "B = " << (int)cpu.B << std::hex << std::endl;
    std::cout << "V = " << (int)cpu.V << std::hex << std::endl;
    std::cout << "N = " << (int)cpu.N << std::hex << std::endl;

    /* Exit emulator */
    return 1;
}