//week 4 CSC 121 Alexander jakopin classwork nestedLoops
#include <iostream>
using namespace std;

int main()
{
	int num, fact;
	char ur;//user response
	cout << "Would you like to check the factorial of a number? (Y/N): ";
	cin >> ur;
	while ((ur == 'Y') || (ur == 'y'))
	{
		fact = 1;
		cout << "\nPlese enter the number for the factorial: ";
		cin >> num;
		int i = 1;
		while (i <= num)
		{
			fact = fact * i;
			i++;
		}
		cout << endl << "The factorial of " << num << " is " << fact << endl;
		cout << "Would you like to check the factorial of another number? (Y/N): ";
		cin >> ur;
	}


	return 0;
}