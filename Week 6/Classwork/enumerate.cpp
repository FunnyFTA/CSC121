// csc 121 alexander jakopin week 6 enumerate.cpp
#include <iostream>
using namespace std;

int main()
{            //10          11      12     13     14
	enum size {SMALL = 10, MEDIUM, LARGE, EXTRA, SPECIAL};// defining the domain of this datatype
	size mysize, yoursize, hersize, hissize;
	mysize = MEDIUM;//mysize is set equal to 1 because value of MEDIUM is 1
	cout << "My size is: " << mysize << endl;

	yoursize = size(mysize + 2);//casting 
	cout << "Your size is: " << yoursize << endl;

	hersize = size(MEDIUM + 1);//adds the values of these variables, not the words. 
	cout << "Her size is: " << hersize << endl;//3

	hissize = size((LARGE - MEDIUM) * 10);
	cout << "His size is: " << hissize << endl;//1

	return 0;
}