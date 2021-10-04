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
	INS_DECX = 0x38;
