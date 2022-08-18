#include <iostream>
using namespace std;

void winCondition(char symbol);

char gridValues[9] = {'1','2','3','4','5','6','7','8','9'};

int i;

bool playerXTurn = true;
bool playerOTurn = false;
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

      winCondition('X');
      winCondition('O');

      cout << "\n----------------------------------\n\n   " << playerX << " (X) | " << playerO << " (O)" << "\n";
      cout << i;

      for (int j = 0; j < 9; j++) {
          
        //Printing the vertical lines with the numbers and X/O's
        if (j == 1 || j == 4 || j == 7){
          cout << "\n    " << gridValues[j-1] << "   |   " << gridValues[j] << "   |   " << gridValues[j+1];
        } else {
          cout << "\n        |       |";
        }

         //Printing the horizontal lines
        if (j == 2 || j == 5){
            cout << "\n -----------------------";
          }
        }


      if (i == 9) {
        cout << playerX << " and " << playerO << " have tied!";
      }


      if (playerXTurn == true){
        cout << "\n\n" << playerX << " pick a number and click enter: ";
        cin >> playerNum;
              
        gridValues[playerNum-1] = 'X';

        playerXTurn = false;
        playerOTurn = true;
          
      } else 
      if (playerOTurn == true) {
        cout << "\n\n" << playerO << " pick a number and click enter: ";
        cin >> playerNum;

        gridValues[playerNum-1] = 'O'; 

        playerOTurn = false;
        playerXTurn = true;
      }


      if (playerXWin == true){ 
        cout << "\n\n" << playerX << " win's!";
      } else 
      if (playerOWin == true){ 
        cout << "\n\n" << playerO << " win's!";
      }
  }

  return 0;
}


void winCondition(char symbol) {
  for (int k = 0; k < 8; k+=winConditionIncrements) {

      //cout << "\n\n" << symbol << "\n k: " << k << "\n wci: " << winConditionIncrements << "\n c1: " << check1 << "\n c2: " << check2;

      if (gridValues[k] == symbol && gridValues[k+check1] == symbol && gridValues[k+check2] == symbol) {
        playerOTurn = false;
        playerXTurn = false;
        i = 10;

        if (symbol == 'X') {
          playerXWin = true;
        } else {
          playerOWin = true;
        }
      }

      if (k == 2 && winConditionIncrements == 1) {
        check1 = 1;
        check2 = 2;
        winConditionIncrements = 3;
        k = -3;
      }

      if (k == 6) {
        check1 = 4;
        check2 = 8;
        winConditionIncrements = 2;
        k = -2;
      }

      if (k == 0 && winConditionIncrements == 2) {
        check1 = 2;
        check2 = 4;
      }

      if (k == 2 && winConditionIncrements == 2) {
        check1 = 3;
        check2 = 6; 
        winConditionIncrements = 1;
        k = 10;
      }
  }
}