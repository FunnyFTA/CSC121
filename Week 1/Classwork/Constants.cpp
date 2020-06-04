//CSC121 Alexander Jakopin Classwork Constants
//Learn arithmetic operators, assignment operator, reading input 
#include <iostream>
#include <iomanip>
using namespace std;
														//variables are written with lowercase and constants use uppercase
const float ROI = 3.5;									//constant declaration and initialization

int main()
{
	float amount, interest, endOfYrBal;
	cout << "Please enter the amount of CD: ";			//prompt the user to enter amount
	cin >> amount;										//get value from user, >> is called stream extraction operator
	interest = amount * (ROI / 100);					//arithmetic expression, * and / are operators, amount and ROI and 100 are operands, operands are variables and data and constants
	endOfYrBal = amount + interest;

	cout << fixed << showpoint << setprecision(2);		//formatting for currency

	cout << "At the end of one year the new balance is: " << endOfYrBal << endl << endl;
	return 0;
}