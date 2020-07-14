//csc121 alexander jakopin harper collegeweek 7 vector classwork
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> salaries;//no size given, creates empty vector
	cout << "Please enter salaries, 0 to quit:\n";//prompt
	bool more = true;//set flag
	while (more)//while true
	{
		double s;
		cin >> s;//get salary
		if (s == 0)//if salary is 0
		{
			more = false;//flip the flag
		}
		else
		{
			salaries.push_back(s);//add to the vector
		}
	}

	double highest = salaries[0];//set first as high
	int i;
	for (i = 1; i < salaries.size(); i++)//use size function instead of actual size values
	{
		if (salaries[i] > highest)//test each value against the highest
		{
			highest = salaries[i];//if new high is found, replace it
		}
	}

	cout << endl;

	for (i = 0; i < salaries.size(); i++)
	{
		cout << salaries[i];//print vector values
		if (salaries[i] == highest)//compare to highest value
		{
			cout << " <== highest value";//if found mark it
		}
		cout << "\n";//generate newline in output
	}
	
	cout << "\nNew list with the last number removed\n\n";
	salaries.pop_back();//remove item from the list
	for (i = 0; i < salaries.size(); i++)
	{
		cout << salaries[i] << endl;//print vector values
	}

	return 0;
}