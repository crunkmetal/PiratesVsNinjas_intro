/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#include "Character.h"
#include <iostream>
// using standard template lib namespace
using namespace std;

// function definition for character class' displaystats()
void Character::DisplayStats()
{
	getH();
	setH(150);
	cout << "Name:\t" << Name << "\n";
	cout << "Class:\t" << Class << "\n";
	cout << "Health:\t" << Health << "\n";
}
// function definition for character class' Talk()
void Character::Talk(string stuffToSay)
{
	//Make the Talk method say their name then stuff to say.
	cout << "Hi! I'm " << Name << " and I am a " << Class << "!  " << stuffToSay;
}
