/************************
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*************************/

#include "Student.h"

using namespace std;

// default constructor
Student::Student()
{
	studentID = 0;				
    tuitionWasPaid = false;
	coursesCompleted = {};
	totalCourses = static_cast<int>(coursesCompleted.size());
}

// setStudentInfo
void Student::setStudentInfo(const string & newFirst,const string& newLast,
			int newId,bool newTuition,const multimap<Course,char>& newMap)
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
double Student::getUnitCompleted() const
{
	double sum = 0.0;
	for (auto e : coursesCompleted)
	{
		if (e.second == 'A' || e.second == 'B' || e.second == 'C' ||
			e.second == 'D' || e.second == 'F')
		{
			sum += e.first.getCourseUnits();
		}
	}
	return sum;
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
			sum += e.first.getCourseUnits();
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
bool Student::courseIsCompleted(const string& coursePre,int courseNo)const
{
	auto iter = coursesCompleted.begin();

	while (iter != coursesCompleted.end())
	{
		if ((iter->first.getCoursePrefix() == coursePre)
			&& (iter->first.getCourseNo() == courseNo))
		{
			return true;
		}
		iter++;
	}
	return false;
}

// printStudent
void Student::printStudent() const
{
	cout << studentID << " - ";
	Person::printName();
	cout << endl;
}
// printStudentInfo
void Student::printStudentInfo() const
{
	
		cout << "Student Name: ";
		Person::printName();
		cout << "\n\nStudent ID: " << studentID << endl;
		cout << "Number of courses completed: " << totalCourses << endl;
		cout << "\n";
		
		cout << "Course" << setw(9) << "Units" << setw(11) << "Grade\n";
		int sum = 0;
		if (tuitionWasPaid)
		{
			for (auto e : coursesCompleted)
			{
				cout << fixed << setprecision(2);
				e.first.printCourseInfo();
				cout << setw(8) << e.second << endl;
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
				cout << setw(10) << "***" << endl;
				sum += static_cast<int>(e.first.getCourseUnits());
			}
			cout << "\nTotal number of unit hours: " << sum << endl;

			cout << "*** Grades are bring held for not paying the tuition. ***" << endl;
		}
		cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
}

// destructor
Student::~Student()
{
	studentID = 0;
	tuitionWasPaid = false;
	totalCourses = 0;
	coursesCompleted;
}
