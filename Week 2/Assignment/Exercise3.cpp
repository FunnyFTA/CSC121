//Assignment 2 Exercise 3 Alexander Jakopin
#include <iostream>
using namespace std;

int main()
{
	string letterGrade;

	cout << "Enter a letter grade: ";
	cin >> letterGrade;

	if (letterGrade == "A+" ) {
		cout << "The numeric value is 4.0" << endl;
	}
	else if (letterGrade == "A") {
		cout << "The numeric value is 3.7" << endl;
	}
	else if (letterGrade == "A-") {
		cout << "The numeric value is 3.4" << endl;
	}
	else if (letterGrade == "B+") {
		cout << "The numeric value is 3.3" << endl;
	}
	else if (letterGrade == "B") {
		cout << "The numeric value is 3.0" << endl;
	}
	else if (letterGrade == "B-") {
		cout << "The numeric value is 2.7" << endl;
	}
	else if (letterGrade == "C+") {
		cout << "The numeric value is 2.3" << endl;
	}
	else if (letterGrade == "C") {
		cout << "The numeric value is 2.0" << endl;
	}
	else if (letterGrade == "C-") {
		cout << "The numeric value is 1.7" << endl;
	}
	else if (letterGrade == "D+") {
		cout << "The numeric value is 1.3" << endl;
	}
	else if (letterGrade == "D") {
		cout << "The numeric value is 1.0" << endl;
	}
	else if (letterGrade == "D-") {
		cout << "The numeric value is 0.7" << endl;
	}
	else if (letterGrade == "F") {
		cout << "The numeric value is 0.0" << endl;
	}
	else {
		cout << "That is not a valid letter grade" << endl;
	}

	return 0;
}