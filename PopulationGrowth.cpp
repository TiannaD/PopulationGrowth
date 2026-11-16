#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//This program calculates the rate of growth in a population over a number of days

int main() {

	//vars/consts
	double startingPopulation = 0;
	double previousPopulation = 0;

	double percentIncrease = 0;
	double numberDays = 0;

	cout << "Enter starting population, rate of increase (percent), and number of days of growth: " << endl;

	cin >> startingPopulation >> percentIncrease >> numberDays;
	double percent = percentIncrease / 100;
	double newPopulation = 0;
	double dailyTotal = (startingPopulation * percent) + startingPopulation;

	//Validations
	if (startingPopulation < 2) {
		cout << "Invalid starting population entered. Exiting...";
	}
	else if (percentIncrease <= 0) {
		cout << "Invalid percent entered.Exiting...";
	}
	else if (numberDays <= 1) {
		cout << "Invalid number of days entered. Exiting...";
	}
	else {
		previousPopulation = startingPopulation;
		cout << left << setw(17) << "Day " << "Population" << endl;
		//Day 1
		cout << left << setw(17) << "Day 1 " << startingPopulation << endl;

		//Day loop
		for (int i = 0; i < numberDays-1; i++) {
			dailyTotal = (previousPopulation * percent);
			newPopulation = dailyTotal + previousPopulation;
			previousPopulation = newPopulation;
			cout << "Day " << i + 2;
			cout << left << setw(12) << " " << newPopulation << endl;
		}

	}

	return 0;
}