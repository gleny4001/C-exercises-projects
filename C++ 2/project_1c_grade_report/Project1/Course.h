/************************
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*************************/

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class Course
{
public:
	// default constructor
	Course();

	// setCourseInfo
	void setCourseInfo(const std::string&,const std::string&, int, double);

	// getCourseName
	std::string getCourseName()const;
	// getCoursePrefix
	std::string getCoursePrefix() const;
	// getCourseNo
	int getCourseNo()const;
	// getCourseUnits
	double getCourseUnits()const;

	// printCourseInfo
	void printCourseInfo()const;

	// destructor
	~Course();

	// comparison operator
	bool operator<(const Course&) const;

private:
	std::string courseName;
	std::string coursePrefix;
	int courseNo;
    double courseUnits;
};

#endif
