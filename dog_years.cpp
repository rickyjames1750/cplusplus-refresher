#include <iostream>

int main() {
  //This declares a variable that stores the dog's age 
  int dog_age = 9; 
  int early_years; 
  int later_years; 
  int human_years; 


  std::cout << "This program can only run for dog older than 2 years old.\n";
  std::cout << "Enter the dog age: ";
  std::cin >> dog_age;


  // This will give the first two years of dog's life count 21 human years
  early_years = 21; 
  // This will add 4 human years on to each dog year
  later_years = (dog_age - 2) * 4;
  human_years = early_years + later_years;
  std::cout << "Your dog is  " << human_years << " years old in human years.\n"; 

  
}