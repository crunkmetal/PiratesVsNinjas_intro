/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#include <iostream>
#include "GameStructure.h"
#include "Ninja.h"
#include "Pirate.h"
// declaring use of standard library template (won't have to write std:: w/ every necessary occurrence)
using namespace std;
// the one and only main function
int main()
{

	// instantiate an object out of GameStructure class
	GameStructure GSIntro{};
	// invoke introduction info method from GameStructure (displays title)
	GSIntro.coolGameIntro();
	cout << "Displaying extra credit...\n";
	// invoke random roll method (get a random number) from GameStructure class
	GSIntro.randomRoll();
	// instantiating an object out of Ninja class
	Ninja ninja1("Bob", "Ninja", 12);
	cout << "A shadow darts in front of you...\n";
	// invoke throwing stars method (ninja throws stars) from ninja class
	ninja1.ThrowStars();
	// instantiating an object out of Pirate class
	Pirate pirate1("Jerry", "Pirate", 22);
	cout << "A one-eyed swashbuckler stumbles by...\n";
	// invoke Pirate class useSword function
	pirate1.useSword();
	cout << "Displaying Character Stats...\n";
	// invoke Ninja class display stats function for each character
	// using object name (from appropriate class) with method in Character class
	ninja1.DisplayStats();
	cout << "\n";
	pirate1.DisplayStats();
	cout << "\nDeclaring Attendance...\n";
	// invoke Ninja class talk function for each character
	// using object name (from appropriate class) with method in Character class
	ninja1.Talk("I know Wing Chun...\n");
	pirate1.Talk("Arrrrrrrrrrrr....\n");
	// main expects an integer return value
	return 0;
}
