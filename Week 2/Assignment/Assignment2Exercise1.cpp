#include <iostream>
using namespace std;

int main()
{
	int firstNumber;
	int secondNumber;

	cout << "Please enter a numeric value: ";
	cin >> firstNumber;
	cout << endl << "Please enter a numeric value: ";
	cin >> secondNumber;

	if (firstNumber > secondNumber) {
		cout << endl << endl << "The smallest value is " << secondNumber << endl << endl;
	}
	else if (firstNumber < secondNumber) {
		cout << endl << endl << "The smallest value is " << firstNumber << endl << endl;
	}
	else {
		cout << endl << endl << "They are equal" << endl << endl;
	}

	return 0;
}