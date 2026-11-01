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
	double finalPopulation = startingPopulation * pow((1 + percent), numberDays) - startingPopulation;
	double newPopulation = 0;
	double dailyTotal = (startingPopulation * percent) + startingPopulation;

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

	//Day 1
	cout << "Day 1: " << "Starting population: " << startingPopulation << endl << endl;
	previousPopulation = startingPopulation;

	//Day loop
	for (int i = 0; i < numberDays - 1; i++) {
		dailyTotal = (previousPopulation * percent);
		newPopulation = dailyTotal + previousPopulation;
		previousPopulation = newPopulation;
		cout << "Day " << i +2 << " : " << newPopulation << endl << endl;
	}

	return 0;
}