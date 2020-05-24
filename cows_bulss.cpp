#include <iostream>
#include <string>
#include <stdlib>
#include <time.h>

using namespace std;

string generate_secret_number() {
	srand(time(0));
	int secret_number = rand() % 9000 + 1000;


	return to_string(secret_number);
}

string get_user_input() {

	int guess = 0;

	cin >> guess;

	while (guess < 1000 || guess > 9999) {
		cout << "Invalid input!" << endl;
		cin >> guess;
	}

	return to_string(guess);
}

int count_bulls(string secret_number, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
	int count = 0;

	for (int i=0; i< 4; i++) {
		if (secret_number[i] == guess_string[i]) {
			count++;

			secret_digit_used[i] = true;
			guess_digit_used[i] = true;
		}
	}
	return count;
}

int count_cows(string secret_number, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
	int count = 0;

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			if (secret_digit_used[i] || guess_digit_used[j]){
				continue;
			}
			if (secret_number[i] == guess_string[j]){
				count++;
				secret_digit_used[i] = true;
				guess_digit_used[j] = true;
			}
		}
	}
	return count;
}


int main()
{
	string secret_number = generate_secret_number();

	//cout << secret_number << endl;

	cout << "Secret number chosed between (1000 & 9999): " << endl;
	cout << "Start guessing....." << endl;

    int nturns = 0;
	while (true) {

		string guess_string = get_user_input();
		nturns++;

		bool secret_digit_used[4] = {false, false, false, false};
		bool guess_digit_used[4] = {false, false, false, false};

		int bulls = count_bulls(secret_number, guess_string, secret_digit_used, guess_digit_used);

		if (bulls == 4) {
			cout << "Congratulations, You did it!" << endl;
			cout << "You took " << nturns << " to guess the number" << endl;
			break;

		}

		int cows = count_cows(secret_number, guess_string, secret_digit_used, guess_digit_used);

		cout << "Turn " << nturns << ": Your guess " << guess_string << " has " << bulls << " bulls and " << cows << " cows" << endl;

	} 

	cout << "Secret number is " << secret_number << endl;

	return 0;
}