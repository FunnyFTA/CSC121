//CSC 121 Week 3 Assignment Exercise 2 Alexander Jakopin
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int input, next, copy;
	string roman = "";
	cout << "Enter a whole number less than 4,000 you wish to convert: ";
	cin >> input;
	copy = input;
	if ((input >= 4000) || (input < 0))
	{
		cout << "That number is not valid";
	}

	if (input >= 1000)
	{
		next = (input / 1000);
		for (int i = 0; i < next; i++)
		{
			roman = roman + "M";
		}
		input = input % 1000;
	}

	if (input >= 100)
	{
		next = (input / 100);
		if (next == 9)
		{
			roman = roman + "CM";
		}
		else if (next >= 5)
		{
			roman = roman + "D";
			for (int i = 5; i < next; i++)
			{
				roman = roman + "C";
			}
		}
		else if (next == 4)
		{
			roman = roman + "CD";
		}
		else if (next >= 1)
		{
			for (int i = 0; i < next; i++)
			{
				roman = roman + "C";
			}
		}
		input = input % 100;
	}

	if (input >= 10)
	{
		next = input / 10;
		if (next == 9)
		{
			roman += "XC";
		}
		else if (next >= 5)
		{
			roman += "L";
			for (int i = 5; i < next; i++)
			{
				roman += "X";
			}
		}
		else if (next == 4)
		{
			roman += "XL";
		}
		else if (next >= 1)
		{
			for (int i = 0; i < next; i++)
			{
				roman += "X";
			}
		}
		input %= 10;
	}

	if (input == 9)
	{
		roman += "IX";
	}
	else if (input >= 5)
	{
		roman += "V";
		for (int i = 5; i < input; i++)
		{
			roman += "I";
		}
	}
	else if (input == 4)
	{
		roman += "IV";
	}
	else if (input >= 1)
	{
		for (int i = 0; i < input; i++)
		{
			roman += "I";
		}
	}

	cout << "The Roman numeral of " << copy << " is " << roman << endl;

	return 0;
}