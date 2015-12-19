// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>


// Declaration and definition of struct
struct Wheel{
	bool isSpinning;
	int number;

	// default constructor
	Wheel(){
		isSpinning = false;
		number = -1;
	}

	// custom constructor
	Wheel(bool isSpinning_, int number_){
		isSpinning = isSpinning_;
		number = number_;
	}
};


// Declaration of function
void playWithVector();


// Declaration and implemenation of function
void pauseBeforeExiting(){
	std::cout << "\npress enter to exit  ";
	std::cin.get();
}


// program entry point
int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "\nhello world\n";

	playWithVector();

	pauseBeforeExiting();
	return 0;
}


// Implementation of function
void playWithVector(){
	using namespace std;
	cout << "\nplayWithVector():\n";

	vector<Wheel> wheels;

	Wheel default;
	wheels.push_back(default);

	Wheel one;
	one.number = 1;
	wheels.push_back(one);

	Wheel spinner;
	spinner.isSpinning = true;
	wheels.push_back(spinner);

	cout << "\tfor each loop:\n";
	for each (Wheel wheel in wheels)
	{
		if (wheel.isSpinning){
			cout << "\t\tWheel is spinning\n";
		}
	}

	cout << "\tstandard for loop:\n";
	for (size_t i = 0; i < wheels.size(); i++)
	{
		cout << "\t\twheel " << i << ", number: " << wheels[i].number << ", spinning: " << wheels[i].isSpinning << ".\n";
	}
}