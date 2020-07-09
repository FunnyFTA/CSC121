#include "week.h"
DayOfTheWeek::DayOfTheWeek()//default constructor
{
	whichDay = Mon;
}

DayOfTheWeek::DayOfTheWeek(day d)//overloaded constructor
{
	whichDay = d;
}

DayOfTheWeek::~DayOfTheWeek()
{

}

void DayOfTheWeek::setDay(day da)
{
	whichDay = da;
}

string DayOfTheWeek::getDay()
{
	int d = whichDay;
	switch (d)
	{
	case 0:
	{
		return "Monday";
		break;
	}
	case 1:
	{
		return "Tuesday";
		break;
	}
	case 2:
	{
		return "Wednesday";
		break;
	}
	case 3:
	{
		return "Thursday";
		break;
	}
	case 4:
	{
		return "Friday";
		break;
	}
	case 5:
	{
		return "Saturday";
		break;
	}
	case 6:
	{
		return "Sunday";
		break;
	}
	}
}

void DayOfTheWeek::printDay()
{
	
	switch (whichDay)
	{
		case 0:
		{
			cout << "Monday" << endl;
			break;
		}
		case 1:
		{
			cout << "Tuesday" << endl;
			break;
		}
		case 2:
		{
			cout << "Wednesday" << endl;
			break;
		}
		case 3:
		{
			cout << "Thursday" << endl;
			break;
		}
		case 4:
		{
			cout << "Friday" << endl;
			break;
		}
		case 5:
		{
			cout << "Saturday" << endl;
			break;
		}
		case 6:
		{
			cout << "Sunday" << endl;
			break;
		}
	}
}

string DayOfTheWeek::plusOneDay()
{
	
	if (whichDay == Sun)
	{
		return "Monday";
	}
	else
	{
		int d = day(whichDay + 1);
		switch (d)
		{
		case 0:
		{
			return "Monday";
			break;
		}
		case 1:
		{
			return "Tuesday";
			break;
		}
		case 2:
		{
			return "Wednesday";
			break;
		}
		case 3:
		{
			return "Thursday";
			break;
		}
		case 4:
		{
			return "Friday";
			break;
		}
		case 5:
		{
			return "Saturday";
			break;
		}
		case 6:
		{
			return "Sunday";
			break;
		}
		}
	}
	
}

string DayOfTheWeek::minusOneDay()
{
	if (whichDay == Mon)
	{
		return "Sunday";
	}
	else
	{
		int d = day(whichDay - 1);
		switch (d)
		{
			case 0:
			{
				return "Monday";
				break;
			}
			case 1:
			{
				return "Tuesday";
				break;
			}
			case 2:
			{
				return "Wednesday";
				break;
			}
			case 3:
			{
				return "Thursday";
				break;
			}
			case 4:
			{
				return "Friday";
				break;
			}
			case 5:
			{
				return "Saturday";
				break;
			}
			case 6:
			{
				return "Sunday";
				break;
			}
		}
	}
}

string DayOfTheWeek::addDays(int i)
{
	
	//cout << (day(whichDay) + (i)) % 7;
	int d = day((whichDay + (i)) % 7) ;
	switch (d)
	{
	case 0:
	{
		return "Monday";
		break;
	}
	case 1:
	{
		return "Tuesday";
		break;
	}
	case 2:
	{
		return "Wednesday";
		break;
	}
	case 3:
	{
		return "Thursday";
		break;
	}
	case 4:
	{
		return "Friday";
		break;
	}
	case 5:
	{
		return "Saturday";
		break;
	}
	case 6:
	{
		return "Sunday";
		break;
	}
	}
}