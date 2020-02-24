/*
	Average_B
	
	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*/
#include "Student.h"

using namespace std;

// default constructor
Student::Student()
{
	studentID = 0;				
    tuitionWasPaid = false;
	totalCourses = 0;
}

// setStudentInfo
void Student::setStudentInfo(string newFirst, string newLast, int newId,
					bool newTuition, const multimap<Course, char>& newMap)
{
	Person::setName(newFirst, newLast);
	studentID = newId;
	tuitionWasPaid = newTuition;
	coursesCompleted = newMap;
	totalCourses = static_cast<int>( newMap.size() ) ;
}

// getID
int Student::getID() const
{
	return studentID;
}

// getNumberOfCourses
int Student::getNumberOfCourse() const
{
	return totalCourses;
}

// getUnitsCompleted
multimap<Course, char> Student::getUnitCompleted() const
{
	return coursesCompleted;
}

// getGpa
double Student::getGpa() const
{
	double sum = 0.00;
	double totalCredit = 0.0;
	for(auto e : coursesCompleted)
	{
		switch (e.second)
		{
		case 'A':
			sum += 4.0 * e.first.getCourseUnits();
			break;
		case 'B':
			sum += 3.0 * e.first.getCourseUnits();
			break;
		case 'C':
			sum += 2.0 * e.first.getCourseUnits();
			break;
		case 'D':
			sum += 1.0 * e.first.getCourseUnits();
			break;
		case 'F':
			break;
		default:
			cerr << "Invalid Course Grade\n";

			break;
		}
		totalCredit += e.first.getCourseUnits();
	}

	return sum / totalCredit;
}

// isTuitionPaid
bool Student::isTuitionPaid() const
{
	return tuitionWasPaid;
}

// courseIsCompleted
bool Student::courseIsCompleted(string coursePre, int courseNo) const
{
	for (auto e : coursesCompleted)
	{
		if ((e.first.getCourseName() == coursePre) &&
			(e.first.getCourseNo() == courseNo))
		{
			return true;
		}
	}
	return false;
}

// printStudent
void Student::printStudent() const
{
	cout << studentID << " - ";
	Person::printName();
}

// printStudentInfo
void Student::printStudentInfo() const
{
	
		cout << "Student Name: ";
		Person::printName();
		cout << "\n\nStudent ID: " << studentID << endl;
		cout << "Number of courses completed: " << totalCourses << endl;
		cout << "\n";
		
		cout << "Course" << setw(11) << "Units" << setw(13) << "Grade\n";
		
		int sum = 0;
		if (tuitionWasPaid)
		{
			for (auto e : coursesCompleted)
			{
				cout << fixed << setprecision(2);
				e.first.printCourseInfo();
				cout << setw(10) << e.second << endl;
				sum += static_cast<int>(e.first.getCourseUnits());
			}
			cout << "\nTotal number of unit hours: " << sum << endl;

			cout << "Current Term GPA: " << getGpa() << endl;
		}
		else
		{
			for (auto e : coursesCompleted)
			{
				cout << fixed << setprecision(2);
				e.first.printCourseInfo();
				cout << setw(12) << "***" << endl;
				sum += static_cast<int>(e.first.getCourseUnits());
			}
			cout << "\nTotal number of unit hours: " << sum << endl;

			cout << "*** Grades are bring held for not paying the tuition. ***" << endl;
		}
		cout << "\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n" << endl;
	
	
}

// destructor
Student::~Student()
{
	studentID = 0;
	tuitionWasPaid = false;
	totalCourses = 0;
	coursesCompleted;
}
