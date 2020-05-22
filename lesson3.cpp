#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name = "sumeet"; //variable declare
	cout << name << endl;

	int a = 4;
	cout << a << endl;


	name = "Himani";
	cout << name << endl; //When you store a new value in a variable, the old value gets tossed out. 
	// This means we can't get back to "Commonlounge" again, unless we stored it in some other variable

	// User input example

	int number;
	cout << "Enter a number:";
	cin >> number;
	cout << "The number is " << number;

	// cin can also be chained
	int c, b;
	cin >> c >> b;
	cout << "The number you haver entered is: " << c << "and " << b << endl;

	int test1, test2;

	cout << "Enter a number: ";
	cin >> test1;

	cout << "Enter a another number: ";
	cin >> test2;

	int sum = test1 + test2;
	cout << "The sum is " << sum << endl;

	int x = 1000000000;
	int y = 2000000000;

	cout << "int sum: " << x+y << endl; //the value 3 billion is too large to store in an int. Hence, we get some gibberish as the result. This is called integer overflow

	long long int d = 1000000000LL; //We write 1000000000LL instead of 1000000000, because by default some compilers consider integers written directly in the program to be int. So, we use LL when specifying long long constants
	long long int e = 2000000000LL;

	cout << "long long int sum: " << d + e << endl;

	cout << "size of " << sizeof(float) << " bytes";
	cout << "size of " << sizeof(double) << " bytes";

	return 0;
}