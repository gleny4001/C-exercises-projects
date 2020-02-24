/*
	Average_B
	
	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*/

#include "Course.h"

using namespace std;

bool Course::operator<(const Course& otherCourse) const
{
	if (coursePrefix == otherCourse.coursePrefix)
	{
		return courseNo < otherCourse.courseNo;
	}
	return coursePrefix < otherCourse.coursePrefix;
}

// default constructor
Course::Course()
{
	courseNo = 0;
	courseUnits = 0.0;
}

// setCourseInfo
void Course::setCourseInfo(const string& newCourse, const string& newPrefix, int newNo, double newUnits)
{
	courseName = newCourse;
	coursePrefix = newPrefix;
	courseNo = newNo;
	courseUnits = newUnits;
}

// getCourseName
string Course::getCourseName()const
{
	return courseName;
}

// getCoursePrefix
string Course::getCoursePrefix() const
{
	return coursePrefix;
}

// getCourseNo
int Course::getCourseNo() const
{
	return courseNo;
}

// getCourseUnits
double Course::getCourseUnits() const
{
	return courseUnits;
}

// printCourseInfo
void Course::printCourseInfo()const
{
	cout << coursePrefix << " " << courseNo << setw(10) << courseUnits;
}

// destructor
Course::~Course()
{
	courseName = "";
	coursePrefix = "";
	courseNo = 0;
	courseUnits = 0.0;
}