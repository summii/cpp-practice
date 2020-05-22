#include<iostream>

using namespace std;

int main ()
{
	// initialize an array during declaration
	int lottery[] = {3, 42, 12, 19, 30, 59};

	cout << lottery[0] << endl; //printout first element

	cout << lottery[3] << endl;

	lottery[4] = 17; // update the value at 4

	cout << lottery[4] << endl;

	cin >> lottery[2]; // take the input from user and insert it at index 3(third element)

	//multi-dimensional arrays

	int x[2][3] = {{2,3,4},{8,9,10}};
	cout << x[0][2] << endl;

	// loops

	for (int a=1; a<=10; a++) {
		cout << a << endl;
	}

	// Iterating over array elements
	string name[] = {"sumeet", "sumeet2", "sumeet3", "sumeet4"};

	for (int i=0; i <3; i++ ) {
		cout << "Hi " + name[i] + "!" << endl;
		cout << "Next person" << endl;
	}

	int numbers[5];

	// store elements in an array

	for(int j=0; j<5; j++) {
		cin >> numbers[j];
	}

	int sum =0;

	for (int z=0; z<5; z++) {
		sum = numbers[z];
	}

	cout << "Total sum: " << sum <<endl;
    

    // while loop
	int b=1; //variable initialization

	while (b <10) { //condition
		cout << b << endl;
		b += 2;
	}


    // break and continue – break can be used to exit the loop, and continue can be used to skip some parts of the loop body
	int c[] = {1, 5, 3, 2, 4,6};

	for (int d=0; d<6; d++) {
		cout << c[d] << endl;

		if (c[d] == 2) {
			break;   // quit the loop when element == 2
		}
	cout << 10*c[d] << endl; // when element == 2, this line too won't execute


	}

	int f[] = {1,5,3,4,6};

	for (int e=0; e<6; e++) {
		cout << f[e] << endl;

		if (f[e] <= 2) {
			continue; // don't execute the rest if element <= 2
		}
	cout << 10*f[e] << endl; // when element <= 2, this line too won't execute
	}





	return 0;




}