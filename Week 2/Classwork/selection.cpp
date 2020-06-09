//CSC121 classwork "selection" Alexander Jakopin
// First: simple if statement
#include <iostream>
using namespace std;

int main()
{
	int score;//declare an integer variable
	cout << "Please enter a value for score: ";
	cin >> score;
	cout << "Here is the value you entered for score: " << score << endl;//echoing

	if (score == 100) {
		cout << "Score is perfect!!!" << endl;
		cout << "Bravo!" << endl;
	}

	if ((score % 2) == 0) {
		cout << "\n Score is even!\n\n";
	}
	else {
		cout << "\n Score is odd!\n\n";
	}

	((score % 2) == 0) ? cout << " Score is EVEN!\n" : cout << " Score is ODD!\n";//conditional operator // (condition) ? true body : false body;

	/*
	if (score > 89) {
		cout << "Letter Grade is A" << endl;
	}
	else if (score >= 80) {
		cout << "Letter Grade is B" << endl;
	}
	else if (score >= 70) {
		cout << "Letter Grade is C" << endl;
	}
	else if (score >= 60) {
		cout << "Letter Grade is D" << endl;
	}
	else {
		cout << "Letter Grade is F" << endl;
	}
	*/
	
	cout << endl;

	//Alternate logic
	if (score < 60) {
		cout << "Letter Grade is F" << endl;
	}
	else if (score < 70) {
		cout << "Letter Grade is D" << endl;
	}
	else if (score < 80) {
		cout << "Letter Grade is C" << endl;
	}
	else if (score < 90) {
		cout << "Letter Grade is B" << endl;
	}
	else {
		cout << "Letter Grade is A" << endl;
	}

	cout << endl;

	//Coding for Range with logical operators using nested if else statements
	if ((score >= 90) && (score <= 100)) {
		cout << "Your grade is A." << endl;
	}
	else {
		if ((score >= 80) && (score < 90)) {
			cout << "Your grade is B." << endl;
		}
		else {
			if ((score >= 70) && (score < 80)) {
				cout << "Your grade is C." << endl;
			}
			else {
				if ((score >= 60) && (score < 70)) {
					cout << "Your grade is D." << endl;
				}
				else {
					cout << "Your grade is F." << endl;
				}
			}
		}
	}

	return 0;
}