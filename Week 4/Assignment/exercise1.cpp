//week 4 csc121 alexander jakopin assignment4 exercise 1 group7
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	cout << "\t\t\tReport to the media" << endl;
	cout << "Event: Diving competition" << endl << endl;
	int numDivers = 0;
	float cummulativeScore = 0, totalAverage = 0;
	char ur;
	string name, city;
	do
	{
		cout << "Enter the diver's name: ";
		cin.ignore();
		getline(cin, name);
		cout << "Enter the diver's city: ";
		getline(cin, city);
		
		float lowestScore = 10;
		float highestScore = 0;
		float score, dod, overAllScore, total = 0;

		int j = 1;
		while (j <= 5)
		{
			
			cout << "Enter the score given by judge #" << j << ": ";
			cin >> score;

			while ((score > 10) || (score < 0))
			{
				cout << "Invalid score - Please reenter (Valid Range: 0 - 10)";
				cout << endl << "Enter the score given by judge #" << j << ": ";
				cin >> score;
			}

			if (score < lowestScore)
			{
				lowestScore = score;
			}
			if (score > highestScore)
			{
				highestScore = score;
			}

			total = total + score;

			j++;
		}

		//cout << "total: " << total << " highest: " << highestScore << " lowest: " << lowestScore << endl;

		cout << "What was the degree of difficutly? ";
		cin >> dod;
		while ((dod < 1.00) || (dod > 1.67))
		{
			cout << "Invalid degree of difficulty - Please reenter (Valid Range: 1 - 1.67)" << endl;
			cout << "What was the degree of difficulty? ";
			cin >> dod;
		}

		cout << endl << "Diver: " << name << ", City: " << city << endl;

		overAllScore = ((((total - highestScore) - lowestScore) / 3) * dod);
		cout << "Overall score was " << overAllScore << endl << endl;

		numDivers++;
		cummulativeScore = cummulativeScore + overAllScore;

		cout << "Do you want to process another diver (Y/N)? ";
		cin >> ur;
		
	} while ((ur == 'y') || (ur == 'Y'));
	
	totalAverage = (cummulativeScore / numDivers);

	cout << endl << endl << "\tEVENT SUMMARY" << endl;
	cout << "Number of divers participating: " << numDivers << endl;
	cout << "Average score of all divers: " << totalAverage << endl;

	return 0;
}