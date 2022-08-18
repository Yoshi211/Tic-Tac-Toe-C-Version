# TicTacToe C++

## Build
`g++ -o tictactoe tictactoe.cpp`

## Run
`./tictactoe`

## Instructions
* Two human players play against eachother
* Graphics: Use the command line to print out a numbered tic tac toe grid
* Each player presses a number, and the grid is updated with an X or an O
* Once one player wins or the game is tied, the program shows who won or tied.
* Make your program robust. I will try and break it. For example, if your code is waiting on the user to input a number, I might try and type a letter.
* Commit your code frequently, as long as it compiles and runs.
* Add documentation and comments to your code

## Goals
* An introduction to software development
* Setting up a development environment for compilation and execution
* Using Git
* Documentation and Commenting
* Input sanitization
* Introduction to C++
* Writing efficient code
* Cycles of Improvement

## Steps
1. Make a proof of concept. It will be inefficient and messy, but it works
2. Revisit your code, see what you can clean up, change, make better, etc.
3. Sogi reviews and suggests improvements.
4. Implement improvements
5. Polish the project
6. Video Document of Code + Demo
7. (undecided) Human vs Computer game

## Progress
### 8/8/2022
* Made the grid with numbers in each section
* Started to code the interactive aspect

### 9/8/2022
* Finetuned the grid
* Made it so players can enter their own names and it displays them
* Made it so players can enter a number on their turn 

### 12/8/2022
* Made it so a new grid is printed when a number is entered
* The new grid is updated with a X or O on the correct spot
* Cleaned up the code by combining the 2 for loops

### 18/8/2022
* Made function winCondition to check when someone has won the game
* 

## Errors to Fix
1. Make it so letters can't be inputed
2. Make it so you cannot enter a number that has already been entered

## Ideas
1. Make players enter their names before they start playing and display them
2. Show the winning persons name when they win
