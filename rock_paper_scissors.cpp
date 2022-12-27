/*
This program will allow you to play Rock Paper Scissors against the computer. 
*/

#include <iostream>
#include <stdlib.h>

int main() {
  // Live long and prosper
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "==============\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "==============\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! "; 
  
}