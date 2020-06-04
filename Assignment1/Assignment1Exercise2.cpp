//Assignment1Exercise2
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, entryInteger;
	cout << "Please enter a five digit integer: \t";
	cin >> entryInteger;
	firstDigit = entryInteger % 10;
	secondDigit = (entryInteger / 10) % 10;
	thirdDigit = (entryInteger / 100) % 10;
	fourthDigit = (entryInteger / 1000) % 10;
	fifthDigit = entryInteger / 10000;

	cout << "The digits extracted from the integer " << entryInteger << " are:" << endl;
	cout << fifthDigit << " " << fourthDigit << " " << thirdDigit << " " << secondDigit << " " << firstDigit << endl;

	return 0;
}