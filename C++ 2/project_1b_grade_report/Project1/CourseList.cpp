/*
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*/
#include "CourseList.h"

using namespace std;

const int CourseList::CAP = 10;

// CourseList
CourseList::CourseList()
{
	totalCourses = 0 ;
	capacity = CAP;
	courseList = new Course[capacity];

}
// Overloaded constructor
CourseList::CourseList(int newCapacity)
{
	courseList = new Course[newCapacity];
	totalCourses = 0 ;
	capacity = newCapacity;

}
// Copy constructor
CourseList::CourseList(const CourseList& otherCourse)
{
	capacity = otherCourse.capacity;
	totalCourses = otherCourse.totalCourses;
	courseList = new Course[capacity];

	for (int i = 0; i <= totalCourses; ++i)
		courseList[i] = otherCourse.courseList[i];
}


// addCourse
void CourseList::addCourse(Course& list)
{
	if(totalCourses == capacity)
	{
		this->resize();
	}
	courseList[totalCourses] = list;
	totalCourses++;
}

// getCourseUnits
double CourseList::getCourseUnits(const string& prefix,
	int courseNum) const
{
	//Course* ptr = courseList;
	for (int i = 0; i <= totalCourses; ++i)
	{
		if (courseList[i].getCoursePrefix() == prefix
			&& courseList[i].getCourseNo() == courseNum)
			return courseList[i].getCourseUnits();
	}
	return 0;
}

// searchCourse
bool CourseList::searchCourse(const string& prefix, int courseNum) const
{
	bool check = false;
	int i = 0;

	while (i <= totalCourses && !check)
	{
		if (courseList[i].getCoursePrefix() == prefix
			&& courseList[i].getCourseNo() == courseNum)
			check = true;

		++i;
	}
	return check;
}

// overloaded operator=
CourseList& CourseList::operator=(const CourseList& otherList)
{
	if (&otherList == this)
		cerr << "assign to itself" << endl;
	else
	{
		if (capacity != otherList.capacity)
		{
			delete[] courseList;
			courseList = new Course[otherList.capacity];
			capacity = otherList.capacity;
		}
		for (int i = 0; i <= otherList.totalCourses; i++)
		{
			courseList[i] = otherList.courseList[i];
		}
		totalCourses = otherList.totalCourses;
	}

	return *this;
}

// destructor
CourseList::~CourseList()
{
	totalCourses = 0;
	capacity = 0;
	delete[] courseList;
	courseList = nullptr;
}

// resize
void CourseList::resize()
{
	Course* temp = courseList;
	courseList = new Course[2*capacity];
	for(int i = 0; i < capacity; ++i)
	{
		courseList[i] = temp[i];
	}

	delete[] temp;
	temp = nullptr;
}