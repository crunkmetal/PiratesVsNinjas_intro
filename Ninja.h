/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#pragma once
#include "Character.h"
#include <string>
// declaring subclass Ninja derived from Character class
class Ninja : public Character
{
	// access modifier
public:
	// defining class properties
	string m_class = "ninja";
	string m_name;
	string m_health;

	// declaring a method called ThrowStars
	void ThrowStars();
	// constructor
	Ninja(string m_name, string m_class, int m_health);

private:

};

