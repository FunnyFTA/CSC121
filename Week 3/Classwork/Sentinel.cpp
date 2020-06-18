//CSC 121 Alexander Jakopin week 3 classwork Sentinel
#include <iostream>
using namespace std;

int main()
{
	/*
	int num = 1;
	char again;
	cout << "Please enter Y to continue this program ";//prime read
	cin >> again;//#1
	while ((again == 'Y') || (again == 'y'))//#2
	{
		cout << "The value of number is " << num << endl;
		num++;
		cout << "Do you want to print another number? ";//change in CV #3
		cin >> again;
	}
	cout << endl;
	*/
	/*
	char gain = 'Y';
	int no = 1;
	//cout << num << "checking" << endl
	do
	{
		cout << "The number is : " << no << endl;
		no--;
		cout << "Do you want to print another number? ";
		cin >> gain;
	} while (gain == 'Y');
	*/
	/*
	int smallest = 100, largest = 0, howmany, num, total = 0;
	float average;
	cout << "How many numbers would you like to average? ";
	cin >> howmany;
	for (int i = 0; i < howmany; i++)
	{
		cout << "Please enter the number: ";
		cin >> num;
		total = total + num;//accumulator
		if (num < smallest)
		{
			smallest = num;
		}
		if (num > largest)
		{
			largest = num;
		}
	}
	cout << "The smallest value is: " << smallest << endl;
	cout << "The largest value is: " << largest << endl;
	average = float(total) / float(howmany);
	cout << "The average of the " << howmany << " numbers you entered is: " << average << endl;
	*/

	int smallest = INT_MAX;//init to largest value
	int largest = INT_MIN;//init to smallest value
	int i = 0, num, total = 0;
	char more;//control variable
	do
	{
		cout << "Please enter the number: ";
		cin >> num;
		i++;
		total = total + num;//accumulator
		if (num < smallest)
		{
			smallest = num;
		}
		if (num > largest)
		{
			largest = num;
		}
		cout << "Do you have another number? ";
		cin >> more;
	} while ((more == 'Y') || (more == 'y'));
	cout << "\n\nAverage of the numbers is: " << float(total) / float(i) << endl;
	cout << "Largest of the numbers is: " << largest << endl;
	cout << "Smallest of the numbers is: " << smallest << endl;

	return 0;
}