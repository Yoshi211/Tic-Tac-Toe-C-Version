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

  char gridValues[9] = {'1','2','3','4','5','6','7','8','9'};
  bool playerXTurn = true;
  int playerNum;


  for (int i = 0; i < 9; i++) {

      cout << "\n----------------------------------\n\n   " << playerX << " (X) | " << playerO << " (O)" << "\n";

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

      if (playerXTurn == true){
        cout << "\n\n" << playerX << " pick a number and click enter: ";
        cin >> playerNum;
            
        gridValues[playerNum-1] = 'X';
        playerXTurn = false;
      } else {
        cout << "\n\n" << playerO << " pick a number and click enter: ";
        cin >> playerNum;

        gridValues[playerNum-1] = 'O'; 
        playerXTurn = true;
      }
  }


  return 0;
}