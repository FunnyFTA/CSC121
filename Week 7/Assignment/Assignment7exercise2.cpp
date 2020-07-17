//csc 121 harper college alexander jakopin 
//week 7 assignment 7 exercise 2 Salesperson Salary Ranges
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void wages(int[]);
void display(const int[]);

void wages(int money[])
{
	double sales, percent = 0.09;

	for (int i = 0; i < 20; i++)
	{
		cout << "Enter gross sales for salesperson #" << i + 1 << ": ";
		cin >> sales;

		double earnings = 200.00 + (sales * percent);
		int x = static_cast<int> (earnings) / 100;
		money[(x<10? x: 10)]++;
	}
	cout << endl;
}

void display(const int dollars[])
{
	cout << "Count of employees in each salary range:" << endl;
	for (int i = 2; i < 10; i++)
	{
		cout << "The number of salespeople earning in range $" << i << "00 - " << i << "99: " << dollars[i] << endl;
	}
	cout << "The number of salespeople earning in range $1000 and over: " << dollars[10] << endl;
}

int main()
{
	int salaries[20] = {0};

	wages(salaries);
	//cout << salaries[];
	display(salaries);

	return 0;
}