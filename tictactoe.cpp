#include <iostream>
using namespace std;

int main() {

  //Declaring varibles for both players
  string playerX = "Player 1 (X)";
  string playerO = "Player 2 (O)";

  //Displaying the players
  cout << "\n" << playerX << " | " << playerO << "\n";

  //Creating the grid
  for (int i = 0; i < 9; i++) {

      //Printing the vertical lines with the numbers
      if (i == 1 || i == 4 || i == 7){
        cout << "\n    " << i << "   |   " << i + 1 << "   |   " << i + 2;
      } else {
        cout << "\n        |       |";
      }

      //Printing the horizontal lines
      if (i == 2 || i == 5){
        cout << "\n -----------------------";
      }      
  }

  string playerTurn = "Yash";
  int playerNum;

  cout << "\n " << playerTurn << " pick a number 1 - 9: ";
  cin >> playerNum;

  cout << "Your number " << playerNum;

  return 0;
}