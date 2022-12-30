/*
Vamos! Why care about style? 

Style refers to the conventions that govern how we write code. 
A clean style keeps complex C++ code manageable and readable. 
To demonstrate the difference that style can make, 
look at the following two blocks of C++ code: 
*/

#include <iostream>
#include <string>

using namespace std;

// This program prints out the famous "Hello World!" with a twist; 
int main() {
    string message = "Hello California!\n";
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



/*
Include Statements

#include statements give us access to functionalities from header file libraries. 
As a rule of thumb, include statememnts are mostly written at the beginning of any C++ program.
Thus, Include headers should be listed in the following order:

1. C system headers 
2. C++ standard library headers 
3. User defined libraries' headers
*/

// Example below 

// C system headers
#include <stdlib.h>

// C++ standard library headers 
#include <iostream>

// User-defined headers 
#include "foo/server/bar.h"

// The rest of one's code goes here... 