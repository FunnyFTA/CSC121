//csc121 alexander jakopin week 5 classwork function5.cpp
#include <iostream>
using namespace std;
//calue function with two parameters. function returns an integer value which is the product of the two number passed
//This is a pass by value function //advantage is that the original value is protected  
int Product(int, int);

int main()
{
	int Num1, Num2;//local variables
	cout << "Please enter the first number: ";
	cin >> Num1;
	cout << "Please enter the second number: ";
	cin >> Num2;
	cout << Num1 << "\t" << Num2 << endl;//before call

	//in the following function call, Num1 and Num2 are ACTUAL parameters passed as variables using PASS BY VALUE method
	cout << "The product is " << Product(Num1, Num2) << endl;

	cout << Num1 << "\t" << Num2 << endl;//after call

	return 0;
}

int Product(int N1, int N2)//N1 and N2 are formal parameters as well as local variables
{
	N1 = N1 * 2;
	N2 = N2 * 2;
	return (N1 * N2);
}