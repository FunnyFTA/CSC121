//Alexander Jakopin CSC121 PrePost classwork
#include <iostream>
using namespace std;

int main()
{
	int x;
	x = 25;
	x = x + 5;
	x++;					//x = x + 1
	cout << x << endl;		//will print 31
	cout << x++ << endl;	//will print 31
	cout << ++x << endl;	//will print 33
	cout << --x << endl;	//will print 32
	cout << x-- << endl;	//will print 32
	cout << x << endl;		//will print 31
	x = 100 - x++;			//(100 - x) + 1
	cout << x << endl;		//will print 70
	float y = x / 3.0;
	cout << y << endl;		//will pring 23.3333
	int i = 3;
	y = float(x) / i;		//casting, only works between like types
	cout << y << endl;		//will print 23.3333

	return 0;
}