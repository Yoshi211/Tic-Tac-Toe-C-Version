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
* Made it so the game can check when the players tied
* Made it so the game says the name of the player who won or if they tied

### 20/8/2022
* Fixed the error where you can input a number that has already been entered
* Added comments to help understand the code

### 26/8/2022 - 30/8/2022
* Worked on fixing and fixed error where you can input a letter
* Made it so letters that are not on the grid cannot be input
* Working on system so muliple numbers/letters cannot be input

### 31/8/2022
* Made it so muiltple numbers or letters cannot be input
* Brushed up some of the code

### 1/9/2022
* Sogi adds comments for improvement

## Errors to Fix
1. ~~Make it so letters can't be inputed~~
2. ~~Make it so you cannot enter a number that has already been entered~~
3. ~~Make it so mulitple numbers can't be inputed at once~~

4. 

## Ideas
- [x] Make players enter their names before they start playing and display them
- [x] Show the winning persons name when they win
