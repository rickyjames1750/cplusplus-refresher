#include <iostream>
#include <vector>
#include <string>

int main() {
  // Hola, Whale, whale, whale. 
  // What have we got here? 

  // Input string for program to translate 
  std::string input = "Turpentine and Turtles.";


  // Created Char vector named vowels
  std::vector<char> vowels;

  // we can use push_back to add to vector
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  // Whales don't consider y as a vowel so we skip it 

  std::vector<char> whale_talk;

  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; i < vowels.size(); j++) {
      
    }
  } 
}