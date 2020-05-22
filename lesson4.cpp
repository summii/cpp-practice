#include<iostream>

using namespace std;

int main()
{
	if (3>2) {
		cout << "It works!" << endl;
	}
	else {
		cout << "It didn't" << endl;
	}

	string name = "Sumeet";
	if (name == "random") {
		cout << "Hey random!" << endl;
	}
	else if (name == "Sumeet") {
		cout << "Hey Sumeet! " << endl;
	}
	else {
		cout << "Hey anonymous!" << endl;
	}

	int volume = 100;

	// change volume if its too quiet or too loud.
	if (volume < 20 or volume > 80) {
		volume = 50;
		cout << "It is better!" << endl;
	}
	return 0;
}