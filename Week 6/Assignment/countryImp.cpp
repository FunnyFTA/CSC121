//csc121 harper college alexander jakopin group 7 week 6 assignment exercise 2
//countryImp.cpp
#include "country.h""

	Country::Country()//default constructor
	{
		name = "";
		population = 0;
		area = 0;
	}
	Country::Country(string n, int p, int a)//overloaded constructor (not necessary for this program)
	{
		name = n;
		population = p;
		area = a;
	}
	Country::~Country()//destructor
	{

	}

	void Country::inputName()
	{
		cout << endl << "Enter the country's name (no spaces), or QUIT to finish: ";
		getline(cin, name);
		
	}
	
	void Country::inputPopulation()
	{
		cout << "Enter the population of " << name << ": ";
		cin >> population;
	}
	
	void Country::inputArea()
	{
		cout << "Enter the area of " << name << " in square km: ";
		cin >> area;
		cin.ignore();
	}
	
	string Country::getName()
	{
		return name;
	}

	int Country::getPopulation()
	{
		return population;
	}

	int Country::getArea()
	{
		return area;
	}

	double Country::calculateDensity()
	{
		double density = population / area;
		return density;
	}