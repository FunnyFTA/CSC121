//week 4 csc 121 alexander jakopin functions1.cpp
//no communication, just action. function will do something
#include <iostream>
using namespace std;

void Header();//prototype function/ function signature

int main()
{
	Header();//void function can be called on a line by itslef. call/invocation

	return 0;
}

void Header()//function header must match the prototype
{
	cout << "\nFunction that does something \n" << endl;
}