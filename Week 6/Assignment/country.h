//csc121 harper college alexander jakopin group 7 week 6 assignment exercise 2
//country.h
#include <string>
#include <iostream>
using namespace std;

class Country
{
	private:
		string name;
		int population;
		int area;
	public:
		Country();
		Country(string, int, int);
		~Country();

		string getName();
		int getPopulation();
		int getArea();

		void inputName();
		void inputArea();
		void inputPopulation();
		
		double calculateDensity();
};
