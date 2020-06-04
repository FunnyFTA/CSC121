//Datatype Project CSC121 Alexander Jakopin
#include <iostream>					//for reading or writing
#include <string>					//for working with string data
using namespace std;				//always include this line when using iostream or string, or else you will have to use std::cout everytime

int main()							//function header--entry into program from OS
{									//beginning of function body
	string firstName = "John";		//declaration and initialization
	string lastName;				//declaration
	lastName = "Smith";				//initialization
	int id = 555;					//integer datatype
	float gpa = 3.54;				//float datatype
	double hairSize = .000000036;	//double datatype-->expansion of float
	char grade = 'C';				//char datatype for single character data
	bool tuitionPaid = true;		//bool datatype for toggle type data

	//Printing data to the output screen
	cout << "\nSTUDENT INFORMATION\n" << endl;//cout is used to send data to output
	cout << "First Name:  \t" << firstName << endl;
	cout << "Last Name:  \t" << lastName << endl;
	cout << "ID:\t\t" << id << endl;
	cout << "GPA:\t\t" << gpa << endl;
	cout << "Hair Size:  \t" << hairSize << endl;
	cout << "Grade:\t\t" << grade << endl;
	cout << "Tuition Paid:  \t" << tuitionPaid << endl;

	//Finding out where on our computer the data is stored
	//Ampersand & is called the "address of" operator
	cout << "\nSTUDENT INFORMATION\n" << endl;//cout is used to send data to output
	cout << "First Name:  \t" << firstName << " is stored at location " << &firstName << endl;
	cout << "Last Name:  \t" << lastName << " is stored at location " << &lastName << endl;
	cout << "ID:\t\t" << id << " is stored at location " << &id << endl;
	cout << "GPA:\t\t" << gpa << " is stored at location " << &gpa << endl;
	cout << "Hair Size:  \t" << hairSize << " is stored at location " << &hairSize << endl;
	cout << "Grade:\t\t" << grade << " is stored at location " << &grade << endl;
	cout << "Tuition Paid:  \t" << tuitionPaid << " is stored at location " << &tuitionPaid << endl;

	//Finding out how much space is needed by each datatype in my compiler
	//sizeof is a function
	cout << "\nInteger size is:  \t" << sizeof(int) << " bytes" << endl;
	cout << "Short size is:  \t" << sizeof(short) << " bytes" << endl;
	cout << "Long size is:  \t\t" << sizeof(long) << " bytes" << endl;
	cout << "Float size is:  \t" << sizeof(float) << " bytes" << endl;
	cout << "Double size is:  \t" << sizeof(double) << " bytes" << endl;
	cout << "Character size is: \t" << sizeof(char) << " bytes" << endl;
	cout << "Bool size is:  \t\t" << sizeof(bool) << " bytes" << endl << endl;
	return 0;						//indicates successful completion of program and return to OS
}									//end of function body