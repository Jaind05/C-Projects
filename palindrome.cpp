// Dhruv Jain
// Palindrome
// 10/4/20
// Checks if a given input is a palindrome


#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str1[80]; //creates first array of chars: used for keeping user input
  char str2[80]; //creates second array of chars: Used for keeping user input without punctuation or spaces
  char str3[80]; //creates third array of chars: used for keeping second array backwards
  cin.get(str1, 80);
  cin.get();
  int filler = 0;
  for (int i = 0; i <80; i++){ //for loop to clear all punctuation, spaces, and capitilization
    if(ispunct(str1[i])){ //if is a punctuation do nothing
      
    }
    else if (str1[i] == ' '){ // if is a space do nothing

    }
    else if(str1[i] >= 'A' && str1[i] <= 'Z'){ //if is capital make lower case
      str2[filler] = str1[i]+32;
      filler++;
    }
    else{ //else is normal add to second array
      str2[filler] = str1[i];
      filler++;
    }
  }
  int a = 0;
  for (int i = (strlen(str2)-1); i >= 0; i--){ // for loop to flip second array and make third
    str3[a] = str2[i];
    a++;
  }
  if (strcmp(str2, str3) == 0){ //if second and third array are the same print palindrome
    cout << "Palindrome." << endl;
  }
  else{ //other wise print Not a palindrome.
    cout << "Not a palindrome" << endl; 
  }


}
