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

{
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
}

//Wonder why sometimes you call functions with a . at the end of the value (like name.length()) and sometimes you first call a function and place the value in parentheses (like to_string(304023))?

//Well, in some cases, functions belong to objects, like .length(), which can only be performed on strings.

//Other times, functions don't belong to anything specific and can be used on different types of objects, just like to_string(). That's why we're giving 304023 as a parameter to the to_string() function.

//Can only contain alphanumeric characters and underscores (A-Z, 0-9, and _). For example, name, name2, my_name and myName are all allowed.
//Must start with a letter or the underscore character. (it cannot start with a number). For example, var and var3 are allowed, but 2var is not.
//Is case-sensitive. For example, age and AGE are two different variables
// In general, people usually use snake case (examples - var, my_age, favorite_number) or camel case (examples - var, myAge, favoriteNumber) when naming variables

// *Modifiers for int*
// short w;       // 2 bytes.  

//int x;         // 4 bytes.

//long y;        // 4 bytes. (this modifier exists for historical reasons)

//long long z;   // 8 bytes.

//Postfix first uses the value, and then increases it by 1.
//Prefix first increased the value by 1, and then uses the value.
//cout << boolalpha; // program will print "true" and "false" from now


