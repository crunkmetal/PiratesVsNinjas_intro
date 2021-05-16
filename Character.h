/*
	Bryan Jeremy
	15MAY21
	Assignment 1: Character Generator: Object-Oriented Programming using  Classes, Encapsulation, and Inheritance.
*/
// preprocessor directives
#pragma once
#include <string>
#include "GameStructure.h"
// using standard template library namespace
using namespace std;
// declaring Character class as derived from Gamestructure class
class Character : public GameStructure
{
	// access modifier
public:
	// declaring class properties
	int m_health;
	string m_name;
	// declaring function prototypes
	void DisplayStats();
	void Talk(string);
	// defining getters/setters
	int getH() { return Health; }
	void setH(int m_health) { Health = m_health; }
	
protected:	// access modifier (can be accessed from other classes)
	// declaring class protected properties
	string Name;
	string Class;

private:	// access modifier (only accessible by this class)

	int Health = m_health;


};

