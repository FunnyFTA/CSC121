//csc 121 harper college alexander jakopin 
//week 7 assignment 7 exercise 1 Duplicate elimination with vectors
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect1;
	

	for (int i = 0; i < 20;)
	{
		int input;

		do {
			cout << "Enter an integer: ";
			cin >> input;
		} while (input < 10 || input > 100);

		bool duplicate = false;

		for (int n = 0; n < vect1.size(); ++n)
		{
			if (input == vect1[n])
			{
				duplicate = true;
				break;
			}
		}

		if (!duplicate)
		{
			vect1.push_back(input);
			i++;
		}
	}

	cout << "Unique values in the vector are: " << endl;
	for (int i = 0; i < vect1.size(); i++)
	{
		cout << vect1[i] << ", ";
	}

	return 0;
}