//Assignment 1, Exercise 1
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	float weeklySales, grossPay, totalDeductions, takeHomePay, totalSales, fedTaxPaid, socialSecPaid, retireContrib;
	cout << "Please enter your weekly sales:\t ";
	cin >> weeklySales;
	grossPay = weeklySales * .08;
	fedTaxPaid = grossPay * .16;
	socialSecPaid = grossPay * .06;
	retireContrib = grossPay * .08;
	totalDeductions = fedTaxPaid + socialSecPaid + retireContrib;
	takeHomePay = grossPay - totalDeductions;
	
	cout << fixed << setprecision(2);
	
	cout << endl << "Total Sales Amount:\t\t$" << setw(8) << weeklySales << endl << endl;
	cout << "Gross Pay (.08):\t\t$" << setw(8) << grossPay << endl;
	cout << "Federal Tax paid (.16):\t\t$" << setw(8) << fedTaxPaid << endl;
	cout << "Social Security paid (.06)\t$" << setw(8) << socialSecPaid << endl;
	cout << "Retirement Contribution (.08):\t$" << setw(8) << retireContrib << endl << endl;
	cout << "Total Deductions:\t\t$" << setw(8) << totalDeductions << endl << endl;
	cout << "Take Home Pay:\t\t\t$" << setw(8) << takeHomePay << endl <<endl;

	

	return 0;
}