//csc121 harper college alexander jakopin week 8 selection sort / linear sort
#include <iostream>
using namespace std;

void selectionSort(int[], int);

int main()
{
	int i, list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
	//int i, list[] = {1, 2, 3, 4, 5, 6, 11, 10, 9, 8};

	cout << "Before sorting, the array elements are:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;

	selectionSort(list, 10);

	cout << "\nAfter SELECTION sorting, the array elements are:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;

	return 0;
}

void selectionSort(int list[], int length)//algorithm
{
	int index, smallestIndex, minIndex, temp, count = 0;//ascending order starts with lowest

	for (index = 0; index < length - 1; index++)//pass --> 9
	{
		//step a
		smallestIndex = index;//saying first value is smallest

		for (minIndex = index + 1; minIndex < length; minIndex++)
		{
			if (list[minIndex] < list[smallestIndex])
			{
				smallestIndex = minIndex;
			}
			cout << "Inner" << endl;
		}

		//step b //swap //1 swap statement = 3 assignment statements
		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;
		count++;//count the swaps
			
		
		cout << "Outer" << endl;
	}//2, 56, 34, 25, 73, 46, 89, 10, 5, 16
	cout << "\nTotal number of swaps: " << count << endl;
}