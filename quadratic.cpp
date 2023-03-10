#include <iostream>
#include <cmath>

int main() {

  // double allows these variables to hold decimal values 
  double a, b, c;
  double root1, root2;


  // The following code will allow the output a prompt for the user
  std::cout << "Enter a: ";
  std::cin >> a; 

  std::cout << "Enter b: ";
  std::cin >> b; 

  std::cout << "Enter c: ";
  std::cin >> c; 

  // Declared two variables to store the roots 
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  // The std::cout will output these values
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";


  return 0; 
  
}