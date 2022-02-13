#include <iostream>
#include "ufo_functions.hpp"
using namespace std;
int main() {
 greet();
string codeword = "codecademy";
string answer = "__________";
int misses = 0;
bool guess = false;
vector <char> incorrect ;
char letter ;
while (answer != codeword && misses < 7){
  
  display_misses(misses);
  display_status(incorrect , answer);
  cout <<"Enter your guess" <<"\n";
  cin >> letter;
  for(int i=0 ;i<codeword.length();i++){
    if (letter == codeword[i]){
      answer[i] = letter;
      guess = false;
    }

  }
  if (guess){
    cout <<"Incorrect! The tractor beam pulls the person in further." <<"\n";
  }else{
    cout <<"Incorrect! The tractor beam pulls the person in further."<<"\n";

     incorrect.push_back(letter);
    misses++;
  }
}

end_game(answer,codeword);
display_misses(misses);
}
