#include <iostream>
#include <cstdlib>

int main() {
  //
  std::cout << "MAGIC 🎱 SAYS: \n\n";

  srand(time(NULL));

  int choice = std::rand() % 10;

  switch(choice) {
    case 0:
    std::cout << "No. Not really.\n";
    break;
    case 1:
    std::cout << "Val!\n";
    break;
    case 2:
    std::cout << "You are an adult.\n";
    break;
    case 3:
    std::cout << "Four R's, my friend: Reduce, reuse, recycle, Rihanna.\n";
    break;
    case 4: 
    std::cout << "Nomo FOMO.\n";
    break;
    }
}