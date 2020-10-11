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
	roundrunning = false;

      }
    gamerunning = false;

    } 




  }

