Documenting c++ progress here

Below are the few things to know before we move to lession 1:

// denotes a comment


//#include <iostream> tells C++ to include library named iostream (stands for input output stream).
int main(): This line is used to declare a function named main. The execution of every C++ program begins from the main function, no matter where the function is located in the program.  Moreover, the main function is required to return an integer data type. Hence, it begins as int main, and ends with return 0

//{ and }: The opening and closing braces indicate the beginning and end of the function body.

//cout << "Hello World" << endl; line tells the compiler to display the message "Hello World" on the screen

//cout stands for console output.
//We use the << operator to tell what needs to be outputted.

//Strings must be enclosed in double quotations (")

//The cout line is a statement in C++. Every statement is meant to perform some task. Each statement must end with a semicolon (;)

//return 0; is also a statement (hence it ends with a semicolon)

//The value returned by the main function is used to determine if everything went smoothly

"""
// This is the "boilerplate" code for C++. 

// All the C++ code you write in this course will have this layout.

 

#include <iostream> // We will always need the iostream library for input-output

// More #include statements here for adding any other libraries we need 

using namespace std; // We will always need namespace std since cout is inside the std namespace

 

// main function - where the execution of program begins

int main()

{

    // actual code here 

    // ... 

        

    return 0; // main always end with "return 0;"

}
"""


