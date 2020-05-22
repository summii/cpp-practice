// This is boilerplate code for c++
// All the c++ code you write in future will have this boilerplate

#include<iostream> // library for input-output

using namespace std; // We will always need namespace std since cout is inside the std namespace

// main function - where the execution of program begins
int main()
{
	// The integer data-type holds integer values such as 5, 42, -17, etc
	int a = 42;

	// Above, a is a variable of type int (for integer)
	cout << a << endl; 

	// floating point type variable can hold a real numbers such as 420.0, -3.33, 0.03325, etc.
	float b = 4.21;
	cout << b << endl;

	// Basic math
	int x = 40 + 60;
	cout << x << endl;

	cout << 40-60 << endl;
	cout << 4*4 << endl;
	cout << 2/2 <<endl;

	int y = 25 % 7;
	cout << y << endl;

	//Converting between float and int
	float f = 4.2;
	cout << (int) f << endl; // This is called type-casting

	// Character is a data type that holds one character such as 'A', '4', or '#'
	char test = 'S';
	cout << test << endl;

	// Boolean variables only have two possible values: true and false

	bool online = false;
	cout << online << endl;

	return 0; // main function always end with "return 0";
}