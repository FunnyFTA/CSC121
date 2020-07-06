//csc121 Alexander Jakopin week 5 assignment group 7
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

char ReadDials(char&, char&, char&, char&, char&, char&, char&, char&);
char ToDigit(char&);
string AcknowledgeCall(char&, char&, char&, char&, char&, char&, char&, char&);

int main()
{
	char dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8;
	int errorCode;
	do
	{
		errorCode = ReadDials(dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8);

		if (errorCode == -5)
		{
			cout << "\n";
		}
		else if (errorCode == -4)
		{
			cout << "ERROR - Hyphen is not in the correct position" << endl << endl;
		}
		else if (errorCode == -1)
		{
			cout << "ERROR - An invalid character was entered" << endl << endl;
		}
		else if (errorCode == -2)
		{
			cout << "ERROR - Phone number cannot begin with 0" << endl << endl;
		}
		else if (errorCode == -3)
		{
			cout << "ERROR - Phone number cannot begin with 555" << endl << endl;
		}
		
		else
		{
			cout << AcknowledgeCall(dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8) << endl << endl;
		}

	} while (errorCode != -5);
	return 0;
}

char ReadDials(char& n1, char& n2, char& n3, char& n4, char& n5, char& n6, char& n7, char& n8)
{
	cout << "Enter a phone number (Q to quit): ";
	cin >> n1;
	if ((n1 == 'Q') || (n1 == 'q'))
	{
		cin.get(n2);
		if (n2 == '\n')
		{
			return -5;
		}
		else
		{
			cin >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
		}
	}
	else
	{
		cin >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
	}
	
	

	ToDigit(n1);
	ToDigit(n2);
	ToDigit(n3);
	ToDigit(n5);
	ToDigit(n6);
	ToDigit(n7);
	ToDigit(n8);

	//cout << n1 << n2 << n3 << n4 << n5 << n6 << n7 << n8 << endl;
	if ((ToDigit(n1) == -1) || (ToDigit(n2) == -1) || (ToDigit(n3) == -1) || (ToDigit(n5) == -1) || (ToDigit(n6) == -1) || (ToDigit(n7) == -1) || (ToDigit(n8) == -1))
	{
		return -1;
	}
	else if (n4 != '-')
	{
		return -4;
	}
	else if (n1 == '0')
	{
		return -2;
	}
	else if ((n1 == '5') && (n2 == '5') && (n3 == '5'))
	{
		return -3;
	}
	else
	{
		return 0;
	}
}

char ToDigit(char& digit)
{
	digit = toupper(digit);

	switch (digit)
	{
		case 'A':
		case 'B':
		case 'C':
		case '2':
		{
			digit = '2';
			break;
		}
		case 'D':
		case 'E':
		case 'F':
		case '3':
		{
			digit = '3';
			break;
		}
		case 'G':
		case 'H':
		case 'I':
		case '4':
		{
			digit = '4';
			break;
		}
		case 'J':
		case 'K':
		case 'L':
		case '5':
		{
			digit = '5';
			break;
		}
		case 'M':
		case 'N':
		case 'O':
		case '6':
		{
			digit = '6';
			break;
		}
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case '7':
		{
			digit = '7';
			break;
		}
		case 'T':
		case 'U':
		case 'V':
		case '8':
		{
			digit = '8';
			break;
		}
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '9':
		{
			digit = '9';
			break;
		}
	}
	if ((digit == '1') || (digit == '2') || (digit == '3') || (digit == '4') || (digit == '5') || (digit == '6') || (digit == '7') || (digit == '8') || (digit == '9') || (digit == '0'))
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}

string AcknowledgeCall(char& d1, char& d2, char& d3, char& d4, char& d5, char& d6, char& d7, char& d8)
{
	string out = "Phone Number Dialed: ";
	return out + d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8;
}