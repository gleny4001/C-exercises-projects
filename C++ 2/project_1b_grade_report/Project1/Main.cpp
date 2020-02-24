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
#include "Course.h"
#include "StudentList.h"
#include "CourseList.h"
#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Courses
	Course c1;
	c1.setCourseInfo("Computer Science", "CSC", 250, 4.00);
	Course c2;
	c2.setCourseInfo("Biology", "BIO", 150, 4.00);
	Course c3;
	c3.setCourseInfo("Psychology", "PSY", 100, 3.00);
	Course c4;
	c4.setCourseInfo("English", "ENG", 100, 3.00);
	Course c5;
	c5.setCourseInfo("Philosphy", "PHI", 200, 4.00);
	Course c6;
	c6.setCourseInfo("Art", "ART", 250, 4.00);
	Course c7;
	c7.setCourseInfo("Basket Weaving", "BAW", 150, 4.00);
	Course c8;
	c8.setCourseInfo("Gender Studies", "GNS", 100, 3.00);
	Course c9;
	c9.setCourseInfo("English", "ENG", 101, 3.00);
	Course c10;
	c10.setCourseInfo("Chemistry", "CHM", 200, 4.00);

	Course c11;
	c11.setCourseInfo("Calculus 1", "MATH", 180, 4.00);
	Course c12;
	c12.setCourseInfo("Calculus 2", "MATH", 185, 4.00);

	//Student 1
	multimap<Course, char> m1;
	m1.insert(pair<Course, char>(c2, 'A'));
	m1.insert(pair<Course, char>(c10, 'B'));
	m1.insert(pair<Course, char>(c1, 'A'));
	m1.insert(pair<Course, char>(c9, 'A'));
	Student s1;
	s1.setStudentInfo("Josh", "Nguyen", 2608384, true, m1);
	s1.printStudentInfo();

	//Student 2
	multimap<Course, char> m2;
	m2.insert(pair<Course, char>(c6, 'A'));
	m2.insert(pair<Course, char>(c7, 'A'));
	m2.insert(pair<Course, char>(c3, 'B'));
	m2.insert(pair<Course, char>(c5, 'C'));
	Student s2;
	s2.setStudentInfo("Glen", "Yang", 2608384, false, m2);
	s2.printStudentInfo();

	Student s3;
	s3.setStudentInfo("Garrett", "Stewart", 237642, true, m2);

	Student s4;
	s4.setStudentInfo("Ahmad", "Alkadi", 234242, true, m1);

	cout << "printStudentInfo->s1: " << endl;
	s1.printStudentInfo();

	cout << "printStudentInfo->s2: " << endl;
	s2.printStudentInfo();

	cout << "printStudentInfo->s3: " << endl;
	s3.printStudentInfo();

	StudentList sl1;
	StudentList sl2;
	StudentList sl3;
	sl1.addStudent(s1);
	sl1.addStudent(s2);

	sl2.addStudent(s3);
	sl2.addStudent(s4);

	cout << "getNoOfStudents()->sl1 " << endl;
	cout << sl1.getNoOfStudents() << endl;

	cout << "getNoOfStudents()->sl2 " << endl;
	cout << sl2.getNoOfStudents() << endl;

	cout << "printStudentByID 234242 (valid): " << endl;
	sl2.printStudentByID(234242);

	cout << "printStudentByID 111111 (invalid): " << endl;
	sl2.printStudentByID(11111);

	cout << "printStudentByCourse->sl1" << endl;
	sl1.printStudentByCourse("ENG", 100);

	cout << "printStudentByCourse->sl1 (invalid): " << endl;
	sl3.printStudentByCourse("ENG", 100);

	cout << "printStudentByName->sl2 (Alkadi, Valid): " << endl;
	sl2.printStudentByName("Alkadi");

	cout << "printStudentByName->sl1 (invalid): " << endl;
	sl1.printStudentByName("beep");

	cout << "printStudentsOnHold->sl1 " << endl;
	sl1.printStudentsOnHold();

	cout << "printStudentsAllStudents->sl1 " << endl;
	sl1.printAllStudents();

	cout << "printStudentsAllStudents->sl2 " << endl;
	sl2.printAllStudents();

	cout << "Destructor->sl2 " << endl;
	sl2.~StudentList();

	cout << "printAllStudents() after Destructor: " << endl;
	sl2.printAllStudents();


	cout << "\nCourseList testing." << endl;
	CourseList cl1;
	CourseList cl2;
	cl1.addCourse(c1);
	cl1.addCourse(c2);
	cl1.addCourse(c3);
	cl1.addCourse(c4);

	cl1.addCourse(c5);
	cl1.addCourse(c6);
	cl1.addCourse(c7);
	cl1.addCourse(c8);
	cl1.addCourse(c9);
	cl1.addCourse(c10);
	cl1.addCourse(c11);
	cl1.addCourse(c12);

	cl2.addCourse(c6);
	cl2.addCourse(c7);
	cl2.addCourse(c8);
	cl2.addCourse(c9);
	cl2.addCourse(c10);

	cout << "CourseList.getCourseUnits" << endl;
	cout << cl1.getCourseUnits("ENG", 100) << endl;
	cout << cl1.getCourseUnits("BIO", 150) << endl;

	cout << cl2.getCourseUnits("ETH", 200) << endl;
	cout << cl2.getCourseUnits("ENG", 100) << endl;

	cout << "CourseList.searchCourse" << endl;
	cout << cl1.searchCourse("ENG", 100) << endl;
	cout << cl1.searchCourse("ETH", 200) << endl;

	cout << cl2.searchCourse("BIO", 150) << endl;
	cout << cl2.searchCourse("ENG", 101) << endl;

	cout << endl;
	system("Pause");
	return 0;
}