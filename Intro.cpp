// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    
    double hours, rate, pay;
    
    // Get the number of hours worked 
    cout << "How many hours did you work? ";
    cin >> hours; 
    
    // Get the hourly pay rate 
    cout << "How much do you get paid per hour? ";
    cin >> rate; 
    
    // Calculate the pay 
    pay = hours * rate;
    
    // Display the pay 
    cout << "You have earned $" << pay << endl; 
    return 0;
}