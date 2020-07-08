//csc121 harper college alexander jakopin week 6 classwork LabelMain.cpp
#include <iostream>
using namespace std;
#include "Label.h"
int main()
{
	label mailing;//creating object using default constructor
	mailing.getInput();//getInput(mailing);
	mailing.print();//print(mailing);

	label person("Alexander", "Jakopin", 60010);//creating an object using overloaded constructor
	person.print();

	mailing.setFname("Ben");
	mailing.setLname("Noble");
	mailing.setZip(92847);

	cout << mailing.getFname() << "\t" << mailing.getLname() << endl;
	cout << mailing.getZip() << endl;

	person.getInput();//getInput(person);
	person.print();//print(person);

	return 0;
}