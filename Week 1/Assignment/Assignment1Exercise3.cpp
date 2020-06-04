//Assignment1Exercise3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int firstTime, secondTime, hoursRemaining, minutesRemaining;
	cout << "Please enter the first time: ";
	cin >> firstTime;
	cout << endl << "Please enter the second time: ";
	cin >> secondTime;
	
	if (secondTime >= firstTime) {
		minutesRemaining = (secondTime % 100) - (firstTime % 100);
		hoursRemaining = (secondTime / 100) - (firstTime / 100);
	}
	else {
		minutesRemaining = (firstTime % 100) - (secondTime % 100);
		hoursRemaining = (firstTime / 100) - (secondTime / 100);
	}
	if (minutesRemaining < 0) {
		minutesRemaining = 60 + minutesRemaining;
		hoursRemaining--;

	}
	cout << endl << endl << hoursRemaining << " hours " << minutesRemaining << " minutes" << endl << endl;
	return 0;
}