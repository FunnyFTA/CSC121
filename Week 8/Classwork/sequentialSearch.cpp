//csc121 harper college alexander jakopin week 8 sequential search / linear search unsorted
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;
int seqSearch(const int[], int, int);
int main()
{
	int index, number, intList[ARRAY_SIZE];
	cout << "Enter " << ARRAY_SIZE << " integers." << endl;
	for (index = 0; index < ARRAY_SIZE; index++)
	{
		cin >> intList[index];
	}
	cout << endl;
	cout << "Enter the number to be " << "searched: ";
	cin >> number;
	cout << endl;

	index = seqSearch(intList, ARRAY_SIZE, number);

	if (index != -1)
	{
		cout << "The #" << number << " is in position " << index + 1 << " in the list" << endl;
	}
	else
	{
		cout << "The #" << number << " is not in the list." << endl;
	}

	return 0;
}

int seqSearch(const int list[], int listLength, int searchItem)
{
	int loc;
	bool found = false;

	for (loc = 0; loc < listLength; loc++)
	{
		if (list[loc] == searchItem)
		{
			found = true;
			break;
		}
	}

	if (found)
	{
		return loc;
	}
	else
	{
		return -1;
	}
}
