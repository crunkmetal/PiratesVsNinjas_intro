/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#pragma
#include "Pirate.h"
#include <iostream>
// using standard template lib namespace
using namespace std;
// defining useSword function 
void Pirate::useSword()
{
	cout << "I am Swooshing my Sword!\n\n";
}
// constructor
Pirate::Pirate(string m_name, string m_class, int m_health)
{
	Name = m_name;
	Class = m_class;

}

