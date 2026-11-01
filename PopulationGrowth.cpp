#include <iostream>

using namespace std;

//This program..

int main() {

	//vars/consts
	double startingPopulation = 0;
	double percentIncrease = 0;
	double numberDays = 0;

	cin >> startingPopulation >> percentIncrease >> numberDays;
	double percent = percentIncrease / 100;

	cout << startingPopulation << endl << percent << endl << numberDays << endl;

	//Validations
	if (startingPopulation < 2) {
		cout << "Invalid starting population. Exiting...";
	}
	if (percentIncrease < 0) {
		cout << "Invalid percent increase.Exiting...";
	}
	if (numberDays <= 1) {
		cout << "Invalid number of days. Exiting...";
	}

	for (int i=0; i < numberDays; i++) {
		cout << "Day " << i+1 << endl;
	}

	return 0;
}