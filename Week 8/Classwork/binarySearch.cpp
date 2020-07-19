//csc121 harper college alexander jakopin week 8 binary search / is a search for a sorted list of data. sort first then search
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;
int binarySearch(const int[], int, int);
void bubbleSort(int[], int);

int main()
{
	int index, number, intList[ARRAY_SIZE];
	cout << "Enter " << ARRAY_SIZE << " integers." << endl;
	for (index = 0; index < ARRAY_SIZE; index++)
	{
		cin >> intList[index];
	}
	cout << endl;
	
	bubbleSort(intList, ARRAY_SIZE);
	cout << "\nAfter Bubble sorting, the array elements are:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << intList[i] << " ";
	}
	cout << endl << endl;

	cout << "Enter the number to be " << "searched: ";
	cin >> number;
	cout << endl << endl;

	index = binarySearch(intList, ARRAY_SIZE, number);

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

int binarySearch(const int list[], int listLength, int searchItem)
{
	int mid, first = 0;
	int last = listLength - 1;
	bool found = false;

	while (first <= last && !found)//2 56 34 25 73 46 89 10 5 16
	{
		mid = (first + last) / 2;
		
		if (list[mid] == searchItem)
		{
			found = true;
		}
		else
		{
			if (list[mid] > searchItem)
			{
				last = mid - 1;
			}
			else
			{
				first = mid + 1;
			}
		}
	}

	if (found)
	{
		return mid;
	}
	else
	{
		return -1;
	}
}

void bubbleSort(int list[], int length)
{
	int temp, iteration, index, count = 0;

	for (iteration = 1; iteration < length; iteration++)
	{
		for (index = 0; index < length - iteration; index++)
		{
			if (list[index] > list[index + 1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
				count++;
				//cout << "swap" << endl;
			}
			//cout << "inner " << index<< endl;
		}
		//cout << "outer " << iteration<< endl;
	}
	//cout << "\nTotal number of swaps: " << count << endl;
}