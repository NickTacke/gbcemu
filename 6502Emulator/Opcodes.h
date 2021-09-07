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
	INS_CALL = 0x04;
