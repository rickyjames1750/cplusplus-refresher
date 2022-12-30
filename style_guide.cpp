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

/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */

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

/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */

/*
Naming Conventions 

Generally speaking, the best names are those that can be immediately understood by a new reader.
Names should capture their context in the program without being too long. 

Regardless of the type, a name in C++ can never start with a digit. 
You should also avoid using the name of a predefined c++ keyword for your own variable or class.

User-defined class names and function names use pascal case, which starts with a capital letter 
and has a captial letter for each new word, with no underscores.
*/

// Example 
// LinkedList or BubbleSort()

// Variables names are all lowercase, with underscores between words
// student_id or result 



/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */

/*
Punctuation Marks

Brackets {}: The open bracket should be on the same line as the statement. 
The closing bracket should be placed under the last line of code in the scope.

Parentheses (): There should be no space between parentheses and the code inside. When parentheses are used in a statement, there should be a space
before ( and a space after ). When parentheses are used as part of a class or function, only a space after ) is sufficient. 

Commas ,:There should always be a blank space after each comma. 

*/

// Example below 

int GetLargerNumber(int num_one, int num_two) {
    if (num_one > num_two) {
        return num_one;
    }
    else {
        return num_two;
    }
}


/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */

/*
Formatting 
Spacing 

Types, variables, operators, and literal values should be seperated by one space
horizontally like so: 
*/

string message = "Hello World!"; 

// Classes, functions, global variables declarations, and preproccesor directives 
//(eg. include) should be seperated by one space vertically:

#include <iostream> // preprocessor directive 

float pi = 3.1415; // global variable 

class MyClass {    // class 
    public:
        myClass() {
    }
}; // notice the ; for a class 

int main() {   // function 
    return 0;

} 

/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------------------------------------------------------- */
