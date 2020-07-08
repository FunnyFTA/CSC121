//csc121 alexander jakopin harper college week 6 classwork MultipleFilesClass header
#include <string>
using namespace std;
class label//definition
{
private://data members
	string fname;
	string lname;
	int zip;
public://behavior members
	label();
	label(string, string, int);
	~label();
	//get functions / accessor functions
	string getFname();
	string getLname();
	int getZip();
	//set functions / mutator functions
	void setFname(string);
	void setLname(string);
	void setZip(int);
	//extra functions
	void print();
	void getInput();
};