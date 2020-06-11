//Assignment 2 Exercise 2 Alexander Jakopin
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float purchase;
	cout << "Enter a purchase amount to find out your shipping charges." << endl << endl;
	cout << "Please input the amount of your purchase: \t$";
	cin >> purchase;

	cout << fixed << setprecision(2);

	if (purchase <= 250) {
		cout << "The shipping charge on a purchase of $" << purchase << " is $5.00" << endl;
	}
	else if (purchase <= 500) {
		cout << "The shipping charge on a purchase of $" << purchase << " is $8.00" << endl;
	}
	else if (purchase <= 1000) {
		cout << "The shipping charge on a purchase of $" << purchase << " is $10.00" << endl;
	}
	else if (purchase <= 5000) {
		cout << "The shipping charge on a purchase of $" << purchase << " is $15.00" << endl;
	}
	else {
		cout << "The shipping charge on a purchase of $" << purchase << " is $20.00" << endl;
	}

	return 0;
}