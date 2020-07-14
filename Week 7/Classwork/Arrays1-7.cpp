//csc121 alexander jakopin harper college week 7 classwork
//#1 write a program that takes in 5 numbers, print the total and average of those numbers
/*
#include <iostream>
using namespace std;

int main()
{
	float ave = 0.0;
	int Num1, Num2, Num3, Num4, Num5, total;
	cout << "Please enter the five numbers: ";
	cin >> Num1 >> Num2 >> Num3 >> Num4 >> Num5;//get the num
	total = Num1 + Num2 + Num3 + Num4 + Num5;//accumulator
	ave = total / 5.0;
	cout << "The total is: " << total << endl;
	cout << "The average is: " << ave << endl;
	cout << endl;

	return 0;
}
*/

//#2 redo the above with an ARRAY
/*
#include <iostream>
using namespace std;

int main()
{
	int num[5], total = 0, i = 0;//declare the name of the array and put size in the square brackets
	float ave = 0.0;
	for (i = 0; i < 5; i++)//index of the array always starts at 0, goes up to size-1
	{
		cout << "Please enter the number: ";
		cin >> num[i];
		total = total + num[i];//accumulator
	}//i=5
	ave = total / i;//i is the control variable also acting as counter
	cout << "Total is: " << total << endl;
	cout << "Average is: " << ave << endl;
	cout << endl;

	return 0;
}*/

//#3 read/populate, manipulate, print an array
//three loops are needed
//get five numbers from the user and double their values using an array and print them
/*
#include <iostream>
using namespace std;

int main()
{
	int num[5];
	for (int i = 0; i < 5; i++)//loop to read/populate/load the array
	{
		cout << "Please enter the number: ";
		cin >> num[i];
	}
	cout << "\nHere are the ORIGINAL VALUES of the array:\n";
	for (int i = 0; i < 5; i++)//loop to print the ORIGINAL VALUES of the array
	{
		cout << num[i] << endl;
	}
	cout << endl;
	/*for (int i = 0; i < 5; i++)//loop to manipulate the array (double the values)
	{
		num[i] = num[i] * 2;
	}
	cout << "\nHere are the DOUBLE VALUES of the array:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << num[i] << endl;
	}*//*
	cout << "\nHere are the DOUBLE VALUES of the array:\n";
	for (int i = 0; i < 5; i++)
	{
		num[i] = num[i] * 2;
		cout << num[i] << endl;
	}
	cout << endl;

	return 0;
}*/

//#4 sample char array
/*
#include <iostream>
using namespace std;

int main()
{
	char grade[] = { 'A', 'B', 'C', 'D', 'F' };//declaration and initialization on the same line
	cout << "\nHere are the grades in the array\n";
	for (int i = 0; i < 5; i++)
	{
		cout << grade[i] << endl;
	}
	cout << endl;

	return 0;
}*/

//#5 two dimensional arrays
/*#include <iostream>
using namespace std;

int main()
{
	int num[3][3] = {1,2,3,4,5,6,7,8,9};//num[r][c] first dimension is row, second dimension is collumn
	/*for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cin >> num[r][c];
		}
	}*//*
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cout << num[r][c] << "\t";
		}
		cout << endl;
	}

	return 0;
}*/

//#6 get values from user for a two dimensional array and print it in the form of a table/matrix, then double the values
/*#include <iostream>
using namespace std;

int main()
{
	int num[3][3];
	cout << "Please enter the values for a two dimensional array of size 3 X 3\n";
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cin >> num[r][c];
		}
	}
	cout << endl;
	cout << "Here are the original values\n";
	for (int r = 0; r < 3; r++)//to print the array
	{
		for (int c = 0; c < 3; c++)
		{
			cout << num[r][c] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Here are the double values\n";
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			num[r][c] = (num[r][c] * 2);
			cout << num[r][c] << "\t";
		}
		cout << endl;
	}

	return 0;
}*/

//#7 parallel arrays
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[3];
	char grade[3];//same size as previous array as these will be processed as parallel arrays, index values correspond to each other in both arrays
	cout << "Please enter the name followed by the grade: \n";
	for (int i = 0; i < 3; i++)
	{
		getline(cin, name[i]);
		cin >> grade[i];//instead of doing cin >> name[i] >> grade[i];, use getline and cin.ignore so you can enter the first and last name, otherwise takes enter key as the next name
		cin.ignore();
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << name[i] << "\t" << grade[i] << endl;
	}

	return 0;
}