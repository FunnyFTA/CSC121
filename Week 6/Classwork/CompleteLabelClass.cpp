//csc121 alexander jakopin harper college week 6 classwork CompleteLabelClass.cpp
#include <iostream>
#include <string>
using namespace std;

//must have constructors, destructors, accessor functions, mutator functions, special functions
class label//definition
{
private://data members
	string fname;
	string lname;
	int zip;
public://behavior members
	
	//constructor ---> 1)same name as class, 2)NO return datatype, 3) to set aside space for data members, you can also put default falues in it
	label()//default constructor
	{
		fname = "";
		lname = "";
		zip = 0;
	}

	label(string f, string l, int z)//overloaded constructor (same name but different parameters)
	{
		fname = f;
		lname = l;
		zip = z;
	}

	~label()//destructor same name as the constructor, but preceded by ~
	{
		//cout << "\n Oject destroyed\n";
	}

	//get functions, also known as accessor functions
	string getFname()
	{
		return fname;
	}
	string getLname()
	{
		return lname;
	}
	int getZip()
	{
		return zip;
	}

	//set functions, also known as mutator functions //does not have return, but does have parameter
	void setFname(string f)
	{
		fname = f;
	}
	void setLname(string l)
	{
		lname = l;
	}
	void setZip(int z)
	{
		zip = z;
	}

	//extra functions
	void print()
	{
		cout << getFname() << "\t" << getLname() << endl;
		cout << getZip() << endl << endl;
	}
	void getInput()
	{
		cout << "Please enther the label information: \n";
		getline(cin, fname);
		getline(cin, lname);
		cin >> zip;
		cin.ignore();
	}
};


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