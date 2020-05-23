#include<iostream>

using namespace std;


//The program chooses a secret number at random between 1 and 100, and the user is asked to guess it.
//If the guess is too low, the program should output "You are too cold!". If the guess is too high, it outputs "You are too hot!".
//This repeats till the user guesses the secret number.
//When this happens, the program outputs, "Hurray,You have guessed it right!" and exits.
int main ()
{
	srand(time(0));

	int secret_numer = (rand() % 100)+1;

	//cout << secret_numer << endl;

	int guess;

	cout << "Start guessing....." << endl;

	while (true) {
		cin >> guess;

		if (guess == secret_numer) {
			cout << "Hurray,You have guessed it right!" << endl;
			break;
		}

		else if (guess < secret_numer) {
			cout << "You are too cold!" << endl;
		}
		else {
			cout << "You are too hot!" << endl;
		}
	}

	cout << "Secret number is " << secret_numer << endl;
	return 0;
}