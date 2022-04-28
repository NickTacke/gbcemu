# gbcemu

A small Game Boy Color CPU emulator, written in C++.

This is a study project around the W65C, the 8-bit CPU inside the Game Boy
Color. The point is to build a readable instruction pipeline and check it
against known behaviour, one instruction at a time. It is deliberately not
trying to be mGBA or Gambatte: no cartridge loading, no save states, no
rendering yet. If you actually want to play games, use one of those. This is
the smaller, closer-to-the-metal cousin. Just the CPU, its memory model, and
a regression harness.

## Where it stands

It's a work in progress and it shows. Roughly:

- the fetch/decode/execute pipeline works, with a good chunk of the
  instruction set implemented across loads, stores, ALU ops, branches,
  calls/returns, bit tricks and interrupt control;
- the memory model has banking for the RAM, VRAM and WRAM regions;
- the memory-mapped I/O registers (pads, timers, interrupt control) are
  mapped;
- interrupts and the timers are wired up at the register level;
- the display (PPU) registers exist, but scanline rendering is still TODO;
- every implemented instruction has a regression vector under `tests/`.

The honest summary: a fair amount of the CPU is there, some instructions are
only half done, and the display side is mostly scaffolding. `NOTES.md` tracks
the per-instruction status.

## How it's laid out

- `gbcemu/6502.h` and `gbcemu/6502.cpp` are the CPU core: the registers
  (A, X, Y, SP, PC), the status flags, and the fetch/decode/execute loop with
  the opcode dispatch.
- `gbcemu/Opcodes.h` holds the opcode constants.
- Each implemented instruction lives in its own pair, `gbcemu/<MN>.h` and
  `gbcemu/<MN>.cpp`, with a handler that does the operation against the CPU
  and the memory. That split keeps the decode loop readable.
- `tests/<MN>.cpp` is one regression vector per instruction.
- `NOTES.md` is where the architecture and coverage notes live.

## Building

It's a Visual Studio project. Open `gbcemu.sln` and build `gbcemu`. The
solution pins the toolset, and the build notes in `NOTES.md` cover the rest.

## Running the tests

Each instruction's vector sets up known operands, runs the instruction, and
checks the resulting A/X/flags/PC plus the cycle count. Build the test config
and run the harness to see how current behaviour lines up with the expected
vectors.

## Where it sits relative to the rest

For reference points: **mGBA** and **Gambatte** are full system emulators,
accurate and playable. **MednBE** and **VICE** are the classic Game Boy and
Game Boy Color emulators. gbcemu is none of those. It's closer to the small
hobby CPU emulators that exist just to understand the chip, and it borrows the
same mental model: implement the instruction set carefully and validate it one
instruction at a time. The W65C datasheet is the ground truth this aims at.

## License

MIT, see `LICENSE`.
