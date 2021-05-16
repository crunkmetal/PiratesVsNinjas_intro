/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/

/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#include "GameStructure.h"
#include <iostream>
#include <cstdlib>	// for rand/srand
// using the standard template lib namespace
using namespace std;
// defining coolGameIntro function found in gamestructure .h file
void GameStructure::coolGameIntro()
{
	cout << "\n\n\t\t*** Pirates Vs Ninjas ***\n\n\n";
}
// defining randomRoll function found in gamestructure .h file
int GameStructure::randomRoll()
{
	//seed the random number generator
	srand(static_cast<unsigned int>(time(0)));

	// (Extra credit) add a function called RandomRoll which returns a number > 0 and < 101.
	int randomNumberRoll = rand() % 100 + 1;

	cout << "Displaying random number roll for initiative:\t" << randomNumberRoll << "\n\n";
	// randomRoll function expects an integer return value
	return randomNumberRoll;
}

