//CSC 121 Alexander Jakopin week 3 classwork CaseSwitch
#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "\nPlease enter a value for score: ";
	cin >> score;
	cout << "\n Here is the value you entered " << score << endl;

	//prepare the code for menu
	cout << "\nWhat would you like to do with this score? : \n";
	cout << "1. Perfect Score Check \n";
	cout << "2. Even/Odd check \n";
	cout << "3. Letter Grade Check \n";
	cout << "4. Conditional operator used for Even/Odd Check \n";
	cout << "9. Quit \n";
	int menu = 0;
	cin >> menu;//get the menu item

	//code the case switch statement to respond to the menu
	switch (menu)
	{
		case 1://perfect score
		{
			if (score == 100)
			{
				cout << "\nPerfect Score!\n";
				cout << "Bravo! Great!\n";
			}
			break;
		}//end case 1
		case 2:
		{
			if ((score % 2) == 0) {
				cout << "\n Score is even!\n\n";
			}
			else {
				cout << "\n Score is odd!\n\n";
			}
			break;
		}//end case 2
		case 3:
		{
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
			break;
		}//end of case 3
		case 4://Conditional operator is short form of if then else
		{
			((score % 2) == 0) ? cout << " Score is EVEN!\n" : cout << " Score is ODD!\n";
			break;
		}//end of case 4
		case 9:
		{
			cout << endl;
		}//end of case 9
	}//end of switch

	return 0;
}