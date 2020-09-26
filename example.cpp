#include <iostream>

using namespace std;
int main()
  
{
  bool stillplaying = true;
  srand(time(NULL));
  while(stillplaying){
    int rand1 = rand()%100;
    cout << "welcome to guessing game please start guessing the random number!" << endl;
    int guesses = 0;
    int guess = -1;
    while(!(rand1 == guess)){
      cin >> guess;
      guesses++;
      if (rand1 > guess){
	cout << "higher"<<endl;
      }
      else if (rand1 < guess){
	cout << "lower"<<endl;
      }
      else{
	cout << "you got the number in " << guesses << " guesses"<<endl;
      }
    }
    cout << "would you like to play again? y or n"<<endl;
      char ans = 'y';
    bool lookingforans = true;
    while (lookingforans){
    cin >> ans;
    if (ans == 'y'){
      stillplaying = true;
      lookingforans = false;
    }
    else if (ans == 'n'){
      stillplaying = false;
      lookingforans = false;
      cout << "Thanks for playing!"<<endl;
    }
    else {
      cout << "please enter a y or n"<<endl;
	lookingforans = true;
    }
    }
  }
  return 0;
}
