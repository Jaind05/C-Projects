#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int board[3][3];
  int xwins = 0;
  int ywins = 0;
  bool gamerunning = true;
  while(gamerunning){
    for(int row = 0; row < 3; row++){
      for(int column = 0; column < 3; column++){
	board[row][column] = 0;
      }
  }	
    bool xmove = true;
    bool roundrunning = true;
    while (roundrunning){
	cout << "   1  2  3" << endl;
	for(int row = 0; row < 3; row++){
	  char temp = 'A'+row;
	  cout << temp << "  "; 
	  for(int column = 0; column < 3; column++){
	    if(board[row][column] == 0){
	      cout << "   ";
	    }
	    else if(board[row][column] == 1){
	      cout << "X  ";
	    }
	    else{
		cout << "O  ";
	    }
	  }
	  cout << endl;
	}
	if(xmove == true){
	  char char_row = 'A';
	  bool stillreading = true;
	  while(stillreading == true){
	    cout << "Player 1: please enter the charectar of the row that you would like to place your piece in." << endl;
	    cin >> char_row;
	    if(char_row == 'A'||char_row == 'B'||char_row == 'C'){
	      cout << "Player 1: please enter the number of the column that you would like to place your piece in." << endl;
	      int char_column = 1;
	      cin >> char_column;
	      if(char_column == 1|| char_column == 2|| char_column ==3){
		int ezrow = char_row - 65;
		int ezcolumn = char_column -1;
		if(board[ezrow][ezcolumn] == 0){
		  board[ezrow][ezcolumn] = 1;
		  stillreading = false;
		  xmove = false;
		}else{
		  cout << "This space is already full" << endl;
		}
	      }else{
		cout << "That was not a number: 1, 2, or 3" << endl;
	      }
	    }else{
	      cout << "That was not a charectar: A, B, or C" << endl;
	    }

	  }

	}
	else{
          char char_row = 'A';
          bool stillreading = true;
          while(stillreading == true){
	    cout << "Player 2: please enter the charectar of the row that you would like to place your piece in." << endl;
            cin >> char_row;
            if(char_row == 'A'||char_row == 'B'||char_row == 'C'){
              cout << "Player 2: please enter the number of the column that you would like to place your piece in." << endl;
              int char_column = 1;
              cin >> char_column;
              if(char_column == 1|| char_column == 2|| char_column ==3){
                int ezrow = char_row - 65;
                int ezcolumn = char_column -1;
                if(board[ezrow][ezcolumn] == 0){
                  board[ezrow][ezcolumn] = 2;
                  stillreading = false;
                  xmove = true;
                }else{
                  cout << "This space is already full" << endl;
                }
              }else{
                cout << "That was not a number: 1, 2, or 3" << endl;
              }
            }else{
              cout << "That was not a charectar: A, B, or C" << endl;
            }

          }


	}

      }
    gamerunning = false;

    } 




  }

