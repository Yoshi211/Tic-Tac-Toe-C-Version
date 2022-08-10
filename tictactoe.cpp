#include <iostream>
using namespace std;

int main() {

  //Declaring varibles for both players
  string playerX;
  string playerO;

  //Players enter their names
  cout << "Enter Player 1's name: ";
  cin >> playerX;

  cout << "Enter Player 2's name: ";
  cin >> playerO;

  //Displaying the players
  cout << "\n\n   " << playerX << " (X) | " << playerO << " (O)" << "\n";


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

  bool playerXTurn = true;
  int playerNum;

  string xSymbol = "x";
  string oSymbol = "o";


  for (int i = 0; i < 9; i++){

      if (playerXTurn == true){
        cout << "\n " << playerX << " pick a number and click enter: ";
        cin >> playerNum;

        playerXTurn = false;
      } else {
        cout << "\n " << playerO << " pick a number and click enter: ";
        cin >> playerNum;

        playerXTurn = true;
      }
      
    cout << "Your number is: " << playerNum;
  }


  return 0;
}