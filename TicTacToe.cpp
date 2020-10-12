//Dhruv Jain
//Tic Tac Toe
//10/11/20
//Plays Tic Tac Toe with the user
//

#include <iostream>
#include <cstring>

using namespace std;

int main(){ //Main method
  int board[3][3]; // Tic Tac Toe Board
  int xwins = 0; // counts x wins
  int Owins = 0; // counts o wins
  bool gamerunning = true; // bool to see if the user wants to continue to play
  while(gamerunning){ // game loop
    for(int row = 0; row < 3; row++){ // two for loops to reset the board to blans
      for(int column = 0; column < 3; column++){
	board[row][column] = 0;
      }
  }	
    bool xmove = true; //bool to track whos turn it is
    bool roundrunning = true; // bool to track if the round ifs over or not
    while (roundrunning){ //round loop
      cout << "   1  2  3" << endl; // group of conditions to print current game board
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
	//What to do when it is X's move
	if(xmove == true){
	  char char_row = 'A';//char to hold user input for row
	  bool stillreading = true;
	  while(stillreading == true){
	    cout << "Player 1: please enter the charectar of the row that you would like to place your piece in." << endl;
	    cin >> char_row;
	    if(char_row == 'A'||char_row == 'B'||char_row == 'C'){ //row input is valid
	      cout << "Player 1: please enter the number of the column that you would like to place your piece in." << endl;
	      int char_column = 1; // char to hold user input for column
	      cin >> char_column;
	      if(char_column == 1|| char_column == 2|| char_column ==3){ //if row column is valid
		int ezrow = char_row - 65; // int for row value
		int ezcolumn = char_column -1; // int for column value
		if(board[ezrow][ezcolumn] == 0){ // if desired spot is empty
		  board[ezrow][ezcolumn] = 1; //make desired space an xmove 
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
	else{ //same as above except for Omoves
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


        }// check all win conditions for both X and O
	if(board [0][0] == 1 && board [0][1] == 1 && board [0][2] == 1) {
	  cout << "Player 1 wins!"<<endl;
	    xwins++;
	  roundrunning = false;
	}
	else if(board [0][0] == 1 && board [1][1] == 1 && board [2][2] == 1) {
	  cout << "Player 1 wins!"<<endl;
	    xwins++;
	  roundrunning = false;
	}
	else if(board [0][0] == 1 && board [1][0] == 1 && board [2][0] == 1) {
          cout << "Player 1 wins!"<<endl;

            xwins++;
	  roundrunning = false;
	}
	else if(board [1][0] == 1 && board [1][1] == 1 && board [1][2] == 1) {
          cout << "Player 1 wins!"<<endl;

            xwins++;
	  roundrunning = false;
	}
	else if(board [2][0] == 1 && board [2][1] == 1 && board [2][2] == 1) {
          cout << "Player 1 wins!"<<endl;

            xwins++;
	  roundrunning = false;
	}
	else if(board [0][1] == 1 && board [1][1] == 1 && board [2][1] == 1) {
          cout << "Player 1 wins!"<<endl;

            xwins++;
	  roundrunning = false;
	}
	else if(board [0][2] == 1 && board [1][2] == 1 && board [2][2] == 1) {
          cout << "Player 1 wins!"<<endl;

            xwins++;
	  roundrunning = false;
	}
	else if(board [0][2] == 1 && board [1][1] == 1 && board [2][0] == 1) {
          cout << "Player 1 wins!"<<endl;

            xwins++;
	  roundrunning = false;
	}else{ // check to see if the board is full and a tie

         bool istie = true;

         for (int row = 0; row < 3; row++){
           for(int column = 0; column < 3; column++){
             if(board[row][column] == 0){
               istie = false;
             }
           }
         }

         if(istie == true){
           cout << "It's a tie!" << endl;
             roundrunning = false;
         }
        }


	 if(board [0][0] == 2 && board [0][1] == 2 && board [0][2] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }
        else if(board [0][0] == 2 && board [1][1] == 2 && board [2][2] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }
        else if(board [0][0] == 2 && board [1][0] == 2 && board [2][0] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }
        else if(board [1][0] == 2 && board [1][1] == 2 && board [1][2] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }
        else if(board [2][0] == 2 && board [2][1] == 2 && board [2][2] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }
        else if(board [0][1] == 2 && board [1][1] == 2 && board [2][1] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }
        else if(board [0][2] == 2 && board [1][2] == 2 && board [2][2] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }
        else if(board [0][2] == 2 && board [1][1] == 2 && board [2][0] == 2) {
          cout << "Player 2 wins!"<<endl;

            Owins++;
          roundrunning = false;
        }else{

	 bool istie = true;
	 
	 for (int row = 0; row < 3; row++){
	   for(int column = 0; column < 3; column++){
	     if(board[row][column] == 0){
	       istie = false;
	     }
	   }
	 }

	 if(istie == true){
	   cout << "It's a tie!" << endl;
	     roundrunning = false;
	 }
	}
      }
    cout << "Player 1 has " << xwins << " wins" <<endl; //prints x's wins
    cout << "Player 2 has " << Owins << " wins" <<endl; //prints o's wins

    bool waiting = true;
    while(waiting){ // while loop to check if the user wants to play again.
      cout << "Do you want to play again?(y or n)" << endl;
    char ans = ' ';
    cin >> ans;
    if (ans == 'n'){
      gamerunning = false;
      waiting = false;
    }
    else if(ans == 'y'){
      waiting = false;
    }
    else{
      cout << "Please enter y or n"; 
    }
    }
  }
}

