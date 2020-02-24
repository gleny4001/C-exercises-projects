/*
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*/

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
public:
	// default constructor
	Person();

	// overloaded constructor
	Person(std::string, std::string);

	// setName
	void setName(std::string, std::string);

	// getLastName
	std::string getLastName() const;

	// getName
	std::string getName() const;

	// printName
	void printName() const;

	// destructor
	~Person();

private:
	std::string firstName;
	std::string lastName;
};

#endif 