//CSC 121 week 3 classwork Alexander Jakopin Factorial.cpp
#include <iostream>
using namespace std;

int main()
{
	int num, fact = 1;
	cout << "Please enter the number for the factorial: ";
	cin >> num;
	/*
	for (int i = 1; i <= num; i++)
	{
		fact = fact * i;
	}
	*/
	for (int i = num; i > 1; i--)
	{
		fact *= i;
	}
	cout << "The factorial of " << num << " is " << fact << endl;

	return 0;
}