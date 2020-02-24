/************************
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*************************/

#include "Person.h"

using namespace std;

// default constructor
Person::Person()
{
	firstName = "N/A";
	lastName = "N/A";
}
// overloaded constructor
Person::Person(const string& newFirst, const string& newLast)
{
	firstName = newFirst;
	lastName = newLast;
}

// setName
void Person::setName(const string& newFirst, const string& newLast)
{
	firstName = newFirst;
	lastName = newLast;

}

// getLastName
string Person::getLastName() const
{
	return lastName;
}
// getName
string Person::getName() const
{
	return firstName;
}

// printName
void Person::printName() const
{
	cout << lastName << ", " << firstName;
 }

// destructor
Person::~Person()
{
	firstName = "";
	lastName = "";
}