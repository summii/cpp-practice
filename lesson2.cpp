#include<iostream>
#include<string> // Library for string

using namespace std;

int main()
{
	// A string is another datatype in C++. A string is a sequence of characters. Even "423" is a string, if we write inside double quotation marks
	string a = "I am learning c++.";
	cout << a << endl;

	// Strings can be strung together
	string name = "Sumeet";
	cout << "Hi there " + name << endl;
	cout << name.length() << endl;

	int x = 304243;
	cout << to_string(x).length() << endl; // to_string() function to convert integer to string and then used the .length()
	// stoi() function to convert a string to an int
	// stof() function to convert a string to a float
	return 0;
}