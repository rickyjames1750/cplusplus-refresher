/*
Why care about style? 

Style refers to the conventions that govern how we write code. 
A clean style keeps complex C++ code manageable and readable. 
To demonstrate the difference that style can make, 
look at the following two blocks of C++ code: 
*/

#include <iostream>
#include <string>

using namespace std;

// This program prints out the famous "Hello World!"; 
int main() {
    string message = "Hello World!\n";
    cout << message;
    return 0;
}

// This code below follows a bad style 

using namespace std; 
#include M= "Hellow World!\n";
int main() { // Does some stuff 
    cout << M;; return (3);}


/*
Style is very much a subjective matter. 
For the sake of consistency, I will use Google's C++ Style Guide. 
*/