//function implementations
#include <iostream>
using namespace std;
#include "Label.h"
//:: scope resolution operator
label::label()//default constructor
{
	fname = "";
	lname = "";
	zip = 0;
}

label::label(string f, string l, int z)//overloaded constructor (same name but different parameters)
{
	fname = f;
	lname = l;
	zip = z;
}

label::~label()//destructor same name as the constructor, but preceded by ~
{
	//cout << "\n Oject destroyed\n";
}

//get functions, also known as accessor functions
string label::getFname()
{
	return fname;
}
string label::getLname()
{
	return lname;
}
int label::getZip()
{
	return zip;
}

//set functions, also known as mutator functions //does not have return, but does have parameter
void label::setFname(string f)
{
	fname = f;
}
void label::setLname(string l)
{
	lname = l;
}
void label::setZip(int z)
{
	zip = z;
}

//extra functions
void label::print()
{
	cout << endl << getFname() << "\t" << getLname() << endl;
	cout << getZip() << endl << endl;
}
void label::getInput()
{
	cout << "Please enter the label information: \n";
	getline(cin, fname);
	getline(cin, lname);
	cin >> zip;
	cin.ignore();
}
