/*
	Average_B
	
	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <string>

class Student: public Person
{
public:
	// default constructor
	Student();
	// setStudentInfo
	void setStudentInfo(std::string, std::string, int, bool, const std::multimap<Course, char>&);

	// getID
	int getID() const;

	// getNumberOfCourses
	int getNumberOfCourse() const;

	// getUnitsCompleted
	std::multimap<Course, char> getUnitCompleted() const;

	// getGpa
	double getGpa() const;

	// isTuitionPaid
	bool isTuitionPaid() const;

	// courseIsCompleted
	bool courseIsCompleted(std::string, int) const;

	// printStudent
	void printStudent() const;

	// printStudentInfo
	void printStudentInfo() const;

	// destructor
	~Student();

private:
    int studentID = 0;				
    bool tuitionWasPaid;
	int totalCourses;
	std::multimap<Course, char> coursesCompleted;
};

#endif


