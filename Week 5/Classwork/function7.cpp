//csc121 alexander jakopin week 5 classwork function7.cpp //overloaded functions //pass by reference
#include <iostream>
using namespace std;
/*Void function with two integer parameters. parameters are passed by reference so they go in with one value and possibly come back with a different value.
Two numbers will go in, and when the function is called the first parameter will comeback with the sum of the two numbers and
the second parameter will come back with the difference of the two numbers*/

void Calc(int&, int&);//int& means address of an int-->reference. rather than copy the value of the number, it takes the location of the data and uses that instead. any datatype can be passed by reference

/*Over loaded functions are two or more functions with the same name and different parameters, meaning different prototype or signatures*/
//this function will multiply the number with itself and return the product

void Calc(int&);//this is an overloaded function

int main()
{
	int Num1, Num2;//local variables
	cout << "Please enter the first number: ";
	cin >> Num1;
	cout << "Please enter the second number: ";
	cin >> Num2;
	cout << Num1 << "\t" << Num2 << endl;//before call

	Calc(Num1, Num2);// see: no & //& is only in prototype and header, not in the call

	cout << "Here is the sum of the Numbers in Num1: " << Num1 << endl;
	cout << "Here is the difference of the Numbers in Num2: " << Num2 << endl;
	Num2 = 6;
	Calc(Num2);
	cout << "Here is the number multiplied by itself: " << Num2 << endl;

	return 0;
}

void Calc(int& N1, int& N2)//we must have int& along with the formal parameter name
{
	int sum, diff;//temporary local variables
	sum = N1 + N2;
	diff = N1 - N2;
	N1 = sum;//reference parameters changed inside of function
	N2 = diff;
}

void Calc(int& p)//overloaded Calc function, invoked based on context because it only takes one parameter
{
	p = p * p;//multiplying value by itself
}