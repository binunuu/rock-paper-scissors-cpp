# Rock Paper Scissors Game

## Description
This is a simple console-based Rock, Paper, Scissors game written in C++. The player competes against the computer, which randomly selects its moves. The game follows the traditional rules:
- Rock crushes Scissors
- Scissors cuts Paper
- Paper covers Rock

## Features
- ASCII art representation for each move.
- User-friendly interface with clear instructions.
- Randomized computer moves using `rand()` function.
- Ability to replay rounds until the player chooses to exit.

## How to Play
1. Run the program.
2. Enter `0` for Rock, `1` for Paper, or `2` for Scissors.
3. The computer will randomly choose its move.
4. The winner is determined based on the game rules.
5. Choose whether to play again or exit.

## Requirements
- A C++ compiler (G++ or MSVC recommended).

## Compilation and Execution
To compile and run the program, use the following commands:
```sh
 g++ -o rps_game rps_game.cpp
 ./rps_game
