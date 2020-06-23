//week 4 csc121 alexander jakopin function2.cpp
//one way communication only // scope of a variable, can be either local or global
#include <iostream>
#include <string>
using namespace std;

//void function with a single string parameter

void Header(string);//function prototype with a string parameter
int x = 25;

int main()
{
	//Header("\nThis value is passed to the function\n");//function call with literal value or constant
	string title = "\nNOW This value is passed to the function\n";//title is only available in main local


	//Header(title);
	Header(title.substr(7, (x-15)));
	cout << x << endl;

	return 0;
}

//function header must match the prototype, but include the name of the
//parameter. This parameter is called a formal parameter
void Header(string T)//parameter	formal parameter---->Variable
{
	cout << T << endl;
	x = x * 2;
	cout << x << endl;
}