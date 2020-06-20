//CSC 121 Week 3 Assignment Exercise 1 Alexander Jakopin
#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Please enter a year: ";
	cin >> year;
	if (year % 400 == 0)
	{
		cout << year << " was a leap year" << endl;
	}
	else if (year % 100 == 0)
	{
		cout << year << " was not a leap year" << endl;
	}
	else if (year % 4 == 0)
	{
		cout << year << " was a leap year" << endl;
	}
	else
	{
		cout << year << " was not a leap year" << endl;
	}
	cout << "Press any key to continue . . . " << endl;

	return 0;
}