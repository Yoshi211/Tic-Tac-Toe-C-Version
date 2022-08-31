#include <iostream>
using namespace std;

//Stating the winCondition function
void winCondition(char symbol);

//Stating the array that holds the values of each section in the game
char gridValues[9] = {'1','2','3','4','5','6','7','8','9'};

int i;
int a;

//Stating variables to be used in the code
bool playerXTurn = true;
bool playerOTurn = false;
string checkLength;
char checkPlayerNum; 
int playerNum;

bool playerXWin = false; 
bool playerOWin = false;

int check1 = 3;
int check2 = 6;
int winConditionIncrements = 1;


int main() {

  //Declaring varibles for both players
  string playerX = "Yash";
  string playerO = "Isha";

  // //Players enter their names
  // cout << "Enter Player 1's name: ";
  // cin >> playerX;

  // cout << "Enter Player 2's name: ";
  // cin >> playerO;

  for (i = 0; i < 10; i++) {

      //Calling the winCondition function to check if X or O won
      winCondition('X');
      winCondition('O');

      //Displaying which play controls X and which controls O
      cout << "\n----------------------------------\n\n   " << playerX << " (X) | " << playerO << " (O)" << "\n";

      for (int j = 0; j < 9; j++) {

        //Printing the vertical lines for the grid with the numbers and X/O's in the middle
        if (j == 1 || j == 4 || j == 7){
          cout << "\n    " << gridValues[j-1] << "   |   " << gridValues[j] << "   |   " << gridValues[j+1];
        } else {
          cout << "\n        |       |";
        }

        //Printing the horizontal lines for the grid
        if (j == 2 || j == 5){
            cout << "\n -----------------------";
          }
        }

      //Code to check for a tie
      if (i == 9) {
        cout << "\n\n" << playerX << " and " << playerO << " have tied!";
        
        playerOTurn = false;
        playerXTurn = false;
      }

      //Code to run when it is player X's turn
      if (playerXTurn == true){
        cout << "\n\n" << playerX << " pick a number and click enter: ";
        cin >> checkLength;

        for (int l = 0; l < 2; l++) {

          for (int z = 0; z < 2; z++) {
            if (checkLength.length() > 1){
              cout << playerX << " please only enter 1 number: ";
              cin >> checkLength;
              z--;
            } else {
              checkPlayerNum = checkLength[0]; 
              z = 2;
            }
          }

          //Checking to make sure the input is not a letter
          for (a = 1; a < 10; a++) {
            if (checkPlayerNum == a + 48) {
              playerNum = checkPlayerNum - 48; 
              a = 11;
            } else
            if (a == 9) {
              cout << "\n" << playerX << " please enter a number on the grid, not a letter: ";
              cin >> checkLength;
              break;
            }
          }

          if (a == 9) {
            cout << "continuing";
            l--;
            continue;
          }

          //Checking to make sure this number has not already been entered
          if (gridValues[playerNum-1] == 'X' || gridValues[playerNum-1] == 'O') {
            cout << "\n" << playerX << " pick a number that hasn't been chosen and click enter: ";
            cin >> checkPlayerNum;
            l--;

          } else 
          //Checking to make sure the number is between 1 and 9
          if (playerNum > 9 || playerNum < 1){
            cout << "\n" << playerX << " pick a number that is on the grid: ";
            cin >> checkPlayerNum;
            l--; 

          } else {
            //Updating the value for that section
            gridValues[playerNum-1] = 'X';

            //Changing it to player O's turn
            playerXTurn = false;
            playerOTurn = true;

            l = 2;
          }
        }
      } else 
      
      //Code to run when it is player O's turn
      if (playerOTurn == true) {
        cout << "\n\n" << playerO << " pick a number and click enter: ";
        cin >> checkPlayerNum;

        for (int l = 0; l < 2; l++) {
          //Checking to make sure the input is not a letter
          for (a = 1; a < 10; a++) {
            if (checkPlayerNum == a + 48) {
              playerNum = checkPlayerNum - 48; 
              a = 11;
            } else
            if (a == 9) {
              cout << "\n" << playerO << " please enter a number on the grid, not a letter: ";
              cin >> checkPlayerNum;
              a = 0;
            }
          }

          //Checking to make sure this number has not already been entered
          if (gridValues[playerNum-1] == 'X' || gridValues[playerNum-1] == 'O') {
            cout << "\n" << playerO << " pick a number that hasn't been chosen and click enter: ";
            cin >> checkPlayerNum;
            l--;

          } else 
          //Checking to make sure the number is between 1 and 9
          if (playerNum > 9 || playerNum < 1){
            cout << "\n" << playerO << " pick a number that is on the grid: ";
            cin >> checkPlayerNum;
            l--; 
            
          } else {
            //Updating the value for that section
            gridValues[playerNum-1] = 'O';

            //Changing it to player X's turn
            playerXTurn = true;
            playerOTurn = false;

            l = 2;
          }
        }
      }

      //To display when someone has won
      if (playerXWin == true){ 
        cout << "\n\n" << playerX << " win's!";
      } else 
      if (playerOWin == true){ 
        cout << "\n\n" << playerO << " win's!";
      }
  }

  return 0;
}

//Function to check when someone has won
void winCondition(char symbol) {
  for (int k = 0; k < 8; k+=winConditionIncrements) {

      //If statement to check if the symbol in 3 specfic indexs in the gridValues array are the same as that would mean someone won
      if (gridValues[k] == symbol && gridValues[k+check1] == symbol && gridValues[k+check2] == symbol) {

        //To stop the computer from asking for numbers for the players to enter
        playerOTurn = false;
        playerXTurn = false;

        //To stop printing the grid
        i = 10;

        //Changes the variable to which player had won
        if (symbol == 'X') {
          playerXWin = true;
        } else {
          playerOWin = true;
        }
      }

      //Switch the if statment to check if anyone won in the horizontal rows
      if (k == 2 && winConditionIncrements == 1) {
        check1 = 1;
        check2 = 2;
        winConditionIncrements = 3;
        k = -3;
      }

      //Switch the if statment to check if anyone won in the diagonial line from left to right
      if (k == 6) {
        check1 = 4;
        check2 = 8;
        winConditionIncrements = 2;
        k = -2;
      }

      //Switch the if statment to check if anyone won in the diagonial line from right to left
      if (k == 0 && winConditionIncrements == 2) {
        check1 = 2;
        check2 = 4;
      }

      //Switch the if statment back to checking verticallly and ending the loop
      if (k == 2 && winConditionIncrements == 2) {
        check1 = 3;
        check2 = 6; 
        winConditionIncrements = 1;
        k = 10;
      }
  }
}