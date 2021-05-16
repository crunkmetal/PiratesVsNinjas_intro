/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#pragma once
#include "Character.h"
// declaring subclass Pirate derived from Character class
class Pirate : public Character
{
	// public access modifier
public:
	// declaring/defining class property
	string m_class = "pirate";

	// declaring a useSword function prototype
	void useSword();
	// constructor
	Pirate(string m_name, string m_class, int m_health);	
};

