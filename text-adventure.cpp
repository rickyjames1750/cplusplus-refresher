#include <iostream>

int main() {
  
//Intro Story   
  std::cout << "It's been a strange day indeed. You've fallen down a golden mine hole, happened across a strange taco party, and had many other absurd adventures.\n";
  std::cout << "But now, you are called to a trial of some sort, ushered in by a Golden Bear.\n";
  std::cout << "The King (Don Ricardo) and Queen (Calafia) of California are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.\n";
  std::cout << "The Golden Robot is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";

// Little animation 
  std::cout << "\n";
  std::cout << "     \\\\\n";
  std::cout << "      \\\\_\n";
  std::cout << "      ( _\\Dn==(\n";
  std::cout << "      / \\__|\n";
  std::cout << "     / _/`\"`\n";
  std::cout << "    {\\  )_\n";
  std::cout << "     `\"\"\"`\n";

// Finishes the intro story 
  std::cout << "\n";
  std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
  std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
  std::cout << "*      *      *\n";
  std::cout << "What do you do?\n";


  char choice1;

  for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {


    std::cout << "Enter A if you ask the Golden Bear next to you what the jurors are doing\n";
    std::cout << "Enter B if you sneak a tart.\n";
    std::cout << "Enter C if you sit and wait for the trial to begin.\n";
    std::cin >> choice1;
    
  }


}