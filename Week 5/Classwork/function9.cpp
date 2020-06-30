//csc121 alexander jakopin week 5 classwork function9.cpp //recursion is when a function calls itself
#include <iostream>
using namespace std;

/*This is an example of recursive function calls. A function calls or invokes itself again and again.
There must be some way to stop or end this. that is called its base case. A point where it can no longer call itself and has to stop, returning a value.
This returning of values continues back until the first function call when the function call is complete with the last value returned*/

int RecurFactor(int);

int main()
{
	cout << RecurFactor(5) << endl;

	return 0;
}

int RecurFactor(int num)
{
	int fact;
	if (num <= 1)//base case
	{
		return 1;
	}
	fact = num * RecurFactor(num - 1);//5 * 24, 4 * 6, 3 * 2, 2 * 1
	return fact;
}