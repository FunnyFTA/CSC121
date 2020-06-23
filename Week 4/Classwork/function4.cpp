//week 4 csc121 alexander jakopin classwork function4.cpp //two way communication, function takes input and returns an output
#include <iostream>
#include <string>
using namespace std;

int Product(int, int);//value function with two integer parameters. this function returns an integer value which is the product of the two numbers that are passed as parameters

int main()
{
	int n1, n2;
	cout << "Please enter two integers: ";
	cin >> n1 >> n2;
	//n1 and n2 are actual parameters(arguments) values---> constant/variables/expressions/function call
	cout << "The product of " << n1 << " and " << n2 << " is: " << Product(n1, n2) << endl;
	return 0;
}

int Product(int N1, int N2)//n1 and n2 are formal parameters
{
	return (N1 * N2);
}