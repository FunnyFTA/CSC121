//week 4 alexander jakopin classwork function3.cpp //one way communication, value returning only
#include <iostream>
#include <string>
using namespace std;

string Header();//function prototype, returning string data type

int main()
{
	//cout << Header() << endl;
	string T = Header();
	cout << T << endl;
	//Header(); // value returning function cannot be called on a line by itself
	return 0;
}

string Header()//function header
{
	return "\n This is the value returned\n";//returning literal string
}