//csc121 harper college alexander jakopin week 8 bubble sort
#include <iostream>
using namespace std;

void bubbleSort(int[], int);

int main()
{
	//int i, list[] = { 2, 56, 34, 25, 73, 46, 89, 10, 5, 16 };
	int i, list[] = {1, 2, 3, 4, 5, 6, 11, 10, 9, 8};

	cout << "Before BUBBLE sorting, the array elements are:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;

	bubbleSort(list, 10);

	cout << "\nAfter Bubble sorting, the array elements are:" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;

	return 0;
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
				cout << "swap" << endl;
			}
			cout << "inner " << index<< endl;
		}
		cout << "outer " << iteration<< endl;
	}
	cout << "\nTotal number of swaps: " << count << endl;
}