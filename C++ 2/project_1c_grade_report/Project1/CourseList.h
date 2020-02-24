/************************
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*************************/

#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"

class CourseList
{
public:
	// CourseList
	CourseList();
	// Overloaded constructor
	CourseList(int);
	// Copy constructor
	CourseList(const CourseList&);

	// addCourse
	void addCourse(const Course&);

	// getCourseUnits
	double getCourseUnits(const std::string&, int) const;

	// searchCourse
	bool searchCourse(const std::string&, int) const;

	// overloaded operator=
	CourseList& operator =(const CourseList&);

	// destructor
	~CourseList();

private:
	Course* courseList;	
	int totalCourses;
	int capacity;
	static const int CAP;

	// resize
	void resize();


};

#endif
