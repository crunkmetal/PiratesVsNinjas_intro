/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#include "Ninja.h"
#include <iostream>
// using standard template lib namespace
using namespace std;
// defining throwstars method from Ninja class
void Ninja::ThrowStars()
{
	cout << "I am throwing stars!\n\n";
}
// constructor
Ninja::Ninja(string m_name, string m_class, int m_health)
{
	Name = m_name;
	Class = m_class;
}


