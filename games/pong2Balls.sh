#!/bin/bash
rm pong2Balls/pong2Balls.bin &> /dev/null
rm pong2Balls/pong2Balls.asm &> /dev/null
cd ../compiler
make &> /dev/null
cd ..
make &> /dev/null
./compiler/compiler -f games/pong2Balls/pong2Balls.vapor &> /dev/null
./assembler -f games/pong2Balls/pong2Balls.asm &> /dev/null
./main -f games/pong2Balls/pong2Balls.bin -s 2 &> /dev/null

