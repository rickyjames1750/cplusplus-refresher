#include <iostream>
 
int main() {
  // The magic starts here
  // Declared four variables that initializes each at zero 
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0; 

  // Declared additional four variables
  int answer1, answer2, answer3, answer4;

  std::cout << "===============\n";
  std::cout << "The Sorting Hat\n";
  std::cout << "===============\n\n";

  // The first question 

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

  std::cout << " 1) The Good\n";
  std::cout << " 2) The Great\n";
  std::cout << " 3) The Wise\n";
  std::cout << " 4) The Bold\n";

  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer1;

  if(answer1 == 1)
    hufflepuff++;
  else if (answer1 == 2)
    slytherin++;
  else if (answer1 == 3)
    ravenclaw++;
  else if (answer1 == 4)
    gryffindor++; 





  // Question 2 
    std::cout << "\nQ2) Dawn or Dusk?\n\n";

    std::cout << " 1) Dawn\n";
    std::cout << " 2) Dusk\n\n";

    std::cout << "Enter your answer (1-2): ";
    std::cin >> answer2;

    if (answer2 == 1)
    {
      gryffindor++;
      ravenclaw++;

    }
    else if (answer2 == 2)
    {
      hufflepuff++;
      slytherin++;
    }
    else 
    {

      std::cout << "Invalid input\n";
    }




 
}