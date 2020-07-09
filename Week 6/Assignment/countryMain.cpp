//csc121 harper college alexander jakopin group 7 week 6 assignment exercise 2
//countryMain.cpp
#include "country.h"

int main()
{
	Country country;
	int largestArea = 0, biggestPop = 0;
	double mostDense = 0;
	string nameLargestArea, nameMostDense, countryName, quit, nameBiggestPop;
	
	do
	{
		country.inputName();
		quit = country.getName();
		if (quit == "QUIT")
		{
			cout << "\n";
		}
		else
		{
			country.inputPopulation();
			if (country.getPopulation() > biggestPop)
			{
				biggestPop = country.getPopulation();
				nameBiggestPop = country.getName();
			}
			country.inputArea();
			if (country.getArea() > largestArea)
			{
				largestArea = country.getArea();
				nameLargestArea = country.getName();
			}
			//density = country.calculateDensity();
			if (country.calculateDensity() > mostDense)
			{
				mostDense = country.calculateDensity();
				nameMostDense = country.getName();
			}	
		}
	} while (quit != "QUIT");

	cout << nameBiggestPop << " has the largest population with " << biggestPop << " people." << endl;
	cout << nameLargestArea << " has the largest area with " << largestArea << " square km." << endl;
	cout << nameMostDense << " has the highest density with " << mostDense << " people per square km." << endl;

	return 0;
}