//csc121 alexander jakopin week 6 classwork structure.cpp
#include <iostream>
#include <string>
using namespace std;

//defenition
//record --> stdId sname sgrade sbirth
struct label//this si just a template no memory is assigned or variables created
{
	string fname;//member of label
	string lname;
	int zip;
};//dont forget the semicolon. this makes it the DEFINITION

void print(label);//parameter is a structure
void GetInput(label&);//structure passed by reference

int main()
{
	label mailing, person; //declared two variables of type label
	GetInput(person);//we have data for person
	print(person);

	mailing.fname = "John";//this is called dot notation   //structure.member
	mailing.lname = "Smith";
	mailing.zip = 60010;
	print(mailing);

	GetInput(mailing);
	print(mailing);

	return 0;
}

void print(label p)
{
	cout << endl << p.fname << "\t" << p.lname << endl;
	cout << p.zip << endl << endl;
}

void GetInput(label& p)
{
	cout << "Enter the persons first name, last name, and ZIP: ";
	getline(cin, p.fname);
	getline(cin, p.lname);
	cin >> p.zip;
	cin.ignore();
}