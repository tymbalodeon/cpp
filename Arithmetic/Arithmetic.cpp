#include <iostream>

using namespace std;

// Take large numbers of seconds and convert it to hours, minutes, seconds
// Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100 iteration (use mod %)

void convertSeconds() {
	cout << "Enter the number of seconds: " << endl;

	int input;
	cin >> input;

	int hours = input / 3600;
	int modMinutes = input % 3600;
	int minutes = modMinutes / 60;
	int seconds = modMinutes % 60;

	cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
}

void makeDots() {
	for (int i = 0; i < 10000; i++) {
		if( i % 100 == 0 ) {
			cout << "*" << flush;
		}
	}

	cout << endl;
}

int main() {

	makeDots();
	convertSeconds();
	
	return 0;
}
