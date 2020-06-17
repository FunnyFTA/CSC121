//CSC 121 Alexander Jakopin week 3 classwork loops
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)// fixed, pre-test loop // i is a control variable
	{
		cout << "Value of is is: " << i << endl;
	}
	cout << endl;

	int j = 1;
	while (j <= 10)
	{
		cout << "Value of j is: " << j << endl;
		j++;
	}
	cout << endl;

	int k = 1;
	do
	{
		cout << "Value of k is: " << k << endl;
		k++;
	} while (k <= 10);
	cout << endl;

	return 0;
}