using Byte = unsigned char;
using Word = unsigned short;

using u32 = unsigned int;
using s32 = signed int;

/* All opcodes */
static constexpr Byte

	INS_JSR_ABS = 0x20,
	INS_LDA_IM = 0xA9,
	INS_ADDA = 0x08,
	INS_ADDA_IM = 0x08,
	INS_ANDA = 0x29,
	INS_CALL = 0x04,
	INS_CCA = 0x98,
	INS_CCA_IM = 0x99,
	INS_CPA = 0x78,
	INS_CPA_IM = 0x79,
	INS_DECA = 0x38,
	INS_DECX = 0x38,
	INS_DJNZ = 0x10,
	INS_HALT = 0x77,
	INS_INCA = 0x18,
	INS_INCX = 0x18,
	INS_JMP = 0x4C,
	INS_JRN = 0xC4,
	INS_JRP = 0xD4,
	INS_LDD = 0xC0,
	INS_LDE = 0xC8,
	INS_LDH = 0xF0,
	INS_LDHL = 0xF0,
	INS_LDX = 0xA0,
	INS_LDY = 0xA8,
	INS_NOP = 0x00;
