//csc121 harper college alexander jakopin week 6 assignment6 part 1
#include "week.h"
#include <iostream>
using namespace std;

int main()
{
	
	DayOfTheWeek weekDay(DayOfTheWeek::Sat);
	weekDay.printDay();
	cout << "getDay() function:	\t" << weekDay.getDay() << endl;
	cout << "plusOneDay() function:	\t" << weekDay.plusOneDay() << endl;
	cout << "minusOneDay() function: \t" << weekDay.minusOneDay() << endl;
	cout << "addDays() function: \t\t" << weekDay.addDays(5) << endl << endl;

	DayOfTheWeek wkdy;
	wkdy.setDay(DayOfTheWeek::Mon);
	wkdy.printDay();
	cout << "getDay() function:	\t" << wkdy.getDay() << endl;
	cout << "plusOneDay() function:	\t" << wkdy.plusOneDay() << endl;
	cout << "minusOneDay() function: \t" << wkdy.minusOneDay() << endl;
	cout << "addDays() function: \t\t" << wkdy.addDays(5) << endl << endl;
	

	return 0;
}