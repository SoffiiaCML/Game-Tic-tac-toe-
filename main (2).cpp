#include <iostream>
using namespace std;

int main() {
    char board[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '-';  
        }
    }
    int column, row;
    int p = 0;
    char player = 'X'; 
int d = 0;
bool gameOver = false;
    while (!gameOver) {
        if(p % 2 == 0){
            player = 'X';
        }
        else{
            player = 'O';
        }
        cout << "Enter row and column (0-2) for your move: ";
        cin >> column >> row;
        if (board[column][row] != '-') {
            cout << "This cell is taken, try again.\n";
        } else {
            board[column][row] = player;  
            p = p + 1;
        }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
            if(j == 2){
                cout<<endl;
            }
        }
}
{
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-')  {
        cout << "Player " << board[0][0] << " won!" << endl;
        gameOver = true;
    }
    for(int i = 0;i < 3;i ++){
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-') {
        cout << "Player " << board[i][0] << " won!" << endl;
        gameOver = true;
    }
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '-') {
        cout << "Player " << board[0][i] << " won!" << endl;
        gameOver = true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-') {
    cout << "Player " << board[0][2] << " won!" << endl;
    gameOver = true;
}
}
}
int a = 9;
 for(int i = 0;i < 3;i ++){
      for(int j = 0;j < 3;j ++){
          if(board[i][j] != '-'){
             a = a-1;
          }
          if(a == 0 && gameOver == false){
              cout<<"Draw!\n";
              gameOver = true;
          } 
    }
}
}
}
