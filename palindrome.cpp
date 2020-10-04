#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str1[80];
  char str2[80];
  char str3[80];
  cin.get(str1, 80);
  cin.get();
  int filler = 0;
  for (int i = 0; i <80; i++){
    if(ispunct(str1[i])){
      
    }
    else if (str1[i] == ' '){

    }
    else if(str1[i] >= 'A' && str1[i] <= 'Z'){
      str2[filler] = str1[i]+32;
      filler++;
    }
    else{
      str2[filler] = str1[i];
      filler++;
    }
  }
  cout << str2 << endl;
  int a = 0;
  for (int i = (strlen(str2)-1); i >= 0; i--){
    str3[a] = str2[i];
    a++;
  }
  cout << str3 << endl;
  if (strcmp(str2, str3) == 0){
    cout << "Palindrome." << endl;
  }
  else{
    cout << "Not a palindrome" << endl; 
  }


}
