#include <iostream>
#include <cmath>

using namespace std;

//This program..

int main() {

	//vars/consts
	double startingPopulation = 0;
	double previousPopulation = 0;

	double percentIncrease = 0;
	double numberDays = 0;

	cin >> startingPopulation >> percentIncrease >> numberDays;
	double percent = percentIncrease / 100;
	double dailyIncrease = startingPopulation * pow((1 + percent), numberDays) - startingPopulation;
	double newPopulation = 0;
	double dailyTotal = dailyIncrease + previousPopulation;

	//Debug line
	cout << startingPopulation << endl << percent << endl << numberDays << endl << dailyIncrease;

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

	newPopulation = startingPopulation + dailyIncrease;
	previousPopulation = newPopulation;




	//for (int i=0; i < numberDays; i++) {
		//cout << "Day " << i+1 << ": " << endl;
		//for (int in = 0; i < numberDays; i++) {

		//}
	//}

	return 0;
}