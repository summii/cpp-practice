#include<iostream>

using namespace std;

//Swapping values using pass by reference
void swap(int &a, int &b ) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int x =1, y=2, z = 3;

	swap(x,y);

	cout << x << ' ' << y << ' ' << z << endl; // Output 2 1 3

	swap(y,z);
	cout << x << ' ' << y << ' ' << z << endl; // Output 2 3 1

	swap(z,x);
	cout << x << ' ' << y << ' ' << z << endl; // Output 1 3 2

	return 0;
}