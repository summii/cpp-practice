#include<iostream>

using namespace std;


// creating functions
void greet() {
	cout << "Hi there!" << endl;
}

// functions with parameters

void greet2(string name) {
	cout << "Hi " + name << endl;

}

// Multiple parameters and return values

int subtract(int x , int y) {
	int z = x-y;
	return z;
}

string joinString(string x, string y) {
	return x+y;
}

int maximum(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

// pass by value - In pass by value (normal way), when you pass a variable to a function,
// it does not use the original variable for performing the task. It makes a copy of your original variable. 
// Hence any modification on parameters inside the function will not reflect in the actual variable

void fillCup(int height) {
	height = height + 5;

	cout << height << endl;
}

// In pass by reference, instead of passing the value of the variable, we pass its address. This allows us to modify the original variable
// function accepts *REFERENCE* to the variable

void fillCup2(int &height) {
	height = height +5;

	cout << height << endl;
}

int main()
{
	greet();
	greet2("Sumeet");

	int result = subtract(5,4);
	cout << result << endl;

	cout << joinString("Hello", "World") << endl;

	cout << maximum(2,5) << endl;

	cout << maximum(40,60) << endl;

	cout << maximum(70, 30) << endl;

	int ht =0;

	fillCup(ht); // Output - 5 (the copy inside the function changed)

	cout << ht << endl; // Output - 0 (original value unchanged)

	fillCup2(ht); // Output - 5

	cout << ht << endl; // Output - 5 (original value modified)

	return 0;

}