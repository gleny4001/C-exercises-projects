/*
	Yang,  Glen
	
	Nguyen, Josh

	McGinty, Ryan

	Octover 4, 2019

	CS A250
	Lab 5
*/

#include "MyInteger.h"

using namespace std;

// Default constructor
MyInteger::MyInteger()
{
	num = 0;
}

// Overloaded constructor
MyInteger::MyInteger(int digit)
{
	num = digit;
}

// Definition function setInt
void MyInteger::setInt(int digit)
{
	num = 0;
}

// Definition function getInt
int MyInteger::getInt() const
{
	return num;
}

// Definition operator []
int MyInteger::operator[](int idx) const
{
	int temp = num;
	
	for (int i = 0; i < idx; i++)
	{
		temp /= 10;
		
	}

	return temp % 10;
}

// Definition function intLength
int MyInteger::intLength() const
{
	int temp = num;
	int count = 0;

	while (temp != 0)
	{
		temp /= 10;
		++count;
	}
	return count;
}

// Destructor
MyInteger::~MyInteger()
{}