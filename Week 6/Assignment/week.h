#include <string>
#include <iostream>
using namespace std;

class DayOfTheWeek//definition
{
	
public://behavior members, prototype functions
	enum day { Mon, Tues, Wed, Thu, Fri, Sat, Sun };

	
	DayOfTheWeek();//default constructor
	DayOfTheWeek(day);//overloaded constructor
	~DayOfTheWeek();//deconstructor

	string getDay();
	void setDay(day);
	string plusOneDay();
	string minusOneDay();
	string addDays(int);
	void printDay();

private://data member
	day whichDay;

};