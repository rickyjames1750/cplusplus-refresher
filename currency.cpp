#include <iostream>

int main() {
  // p = pesos, r = reais, s = soles
  double p;
  double r;
  double s;
  
  // Stores the amount we have in dollars
  double dollars;

  // Takes input from the user of their currencies
  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> p;
  std::cout << "Enter the number of Reais: ";
  std::cin >> r;
  std::cout << "Enter the number of Soles: ";
  std::cin >> s; 

  // Conversion from curriences to USD
  dollars = 0.049 * p + 0.1305 * r + 0.1144 * s;

  std::cout << "Total USD = $" << dollars << "\n";
  
}