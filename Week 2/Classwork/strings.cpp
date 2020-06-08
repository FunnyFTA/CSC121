//CSC121 classwork "strings" Alexander Jakopin
#include <iostream>
#include <string>//pre-written header file
using namespace std;

int main()
{
	int stdId = 0;
	string name = "";//initializing with null string
	double gpa = 0.0;//declarations and initializations

	cout << "\nPlease enter the calues for the following variables..." << endl;//prompt user
	cout << "Enter the ID: ";
	cin >> stdId;
	cin.ignore();//ignores the return key, iostring funtion
	cout << "Enter the full name: ";
	getline(cin, name);//used for strings with white space characters
	cout << "Enter the gpa: ";
	cin >> gpa;

	cout << "\nHere are the values entered" << endl;
	cout << "Student ID:\t" << stdId << endl;
	cout << "Student name:\t" << name << endl;
	cout << "Length of the student name is:\t" << name.length() << endl;//length is a string function
	cout << "Student GPA:\t" << gpa << endl << endl;

	string firstName = name.substr(0, 9);
	string lastName = name.substr(10);
	cout << "Student first name:\t\t\t" << firstName << endl;
	cout << "Student last name:\t\t\t" << lastName << endl;
	
	cout << "Using concatenation to get full name:\t" << firstName + " " + lastName << endl;

	//swapping two values
	string first{ "one" };
	string second{ "two" };

	//output strings
	cout << "Before swap:\n first: " << first << "\n second: " << second << endl;

	first.swap(second);//swap strings

	cout << "\n\nAfter swap:\n first: " << first << "\n second: " << second << endl;

	first.swap(firstName);

	cout << "\n\nAfter swap:\n first: " << first << "\n firstName: " << firstName << endl;

	return 0;
}