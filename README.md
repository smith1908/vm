# Vapor Spec
A virtual machine with no physical hardware spec.

#### The vm has:
- A 16 bit instruction size
- 16 different general purpose registers
- 65536 bytes (64K) of addressable memory
- An 8-bit color depth screen for a palette of 256 colors
- Support for 256 concurrent sprites
- Support for sprites with 4 colors or 3 colors + alpha
- A screen resolution of 256 x 192 and a refresh rate of 60 Hz (16 ms)
- An included compiler and assembler to accompany it
- A maximum of 65536 instructions per program
- A speed of 500,000 instructions per second (0.5 MIPS)

### Included Programs:
Three programs are included to demonstrate the capabilities of the vm. "Mars" is a simple scene showing colored sprites that the player can move around in. "Pong" is a clone of the classic Atari game for 2 players. Pong2 is pong written in vaporlang, a language created specifically for this platform. Tetris is a much larger game written in vaporlang. Paint is a multi color character editor.

![demo](https://github.com/minkcv/vm/blob/master/etc/mars.png)
![pong](https://github.com/minkcv/vm/blob/master/etc/pong.png)
![tetris](https://github.com/minkcv/vm/blob/master/etc/tetris.png)
![paint](https://github.com/minkcv/vm/blob/master/etc/paint.png)

### Why did you make this? Who is it for?
This is a hobby project to allow myself and others to write games for a very simple architecture without some of the annoyances that physical architectures impose.

This project can be viewed as a challenge to people like  [demoscene](https://en.wikipedia.org/wiki/Demoscene) members. Please let me know if you make a program.

### How do I build and run it?
#### Linux:
Install SDL2 and libpng if you don't already have them. Systems with apt should try:

    sudo apt install libsdl2-dev libpng-dev

To build and test the vm on linux, run one of the included programs:

    cd games
    ./mars.sh
    ./pong.sh
    ./pong2.sh
    ./tetris.sh

#### Windows (x86):
See the releases section on github for a pre-built exe and pre-assembled games.
I haven't built the assembler, sprite converter, or compiler for windows.
If you want to build for Windows then you will need the SDL2 dev files and the Platform Toolset v120 (from Visual Studio 2013).

### How do I make a program/game?
1. Have some low level programming knowledge.
2. Check out the `/docs` folder.

