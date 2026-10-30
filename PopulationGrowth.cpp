#include <iostream>

using namespace std;

int main() {

	double numberOrganisms = 0;
	double percentIncrease = 0;
	double numberDays = 0;


	cin >> numberOrganisms >> percentIncrease >> numberDays;
	double percent = percentIncrease / 100;

	cout << numberOrganisms << endl << percent << endl << numberDays;




	return 0;
}