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

  int rock = 1; 
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cin >> user;

  /*
  rock > scissors 
  scissors > paper
  paper > rock 
  lizard > spock
  spock > scissors
  scissors > lizard 
  lizard > paper 
  paper > spock
  spock > rock
  rock > lizard 
  */

 std::cout << "computer: " << computer << "\n\n";

  if (user == rock && computer == scissors) {
    std::cout << "You Win!\n";

  } else if (user == scissors && computer == peper) {
    std::cout << "You Win!\n";

  } else if (user == paper && computer == rock) {
    std::cout << "You Win!\n";

  } else if (user == lizard && computer == spock) { 
    std::cout << "You Win!\n";

  } else if () {

  } else if () {

  } else if () {

  } else if () {

  } else if () {

  } else if () {
     
  } else if () {

  } else {
    std::cout << "You Lose!\n";
  }
  
}