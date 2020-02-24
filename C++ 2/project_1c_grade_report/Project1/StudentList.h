/************************
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*************************/

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

#include <iostream>
#include <string>

class Node
{
public:
	Node( ): student( ), next(nullptr) {} 
    Node(const Student& newStudent, Node *newNext) 
		: student(newStudent), next(newNext){}
    Student getStudent( ) const { return student; }
	Node* getNext( ) const { return next; }	
    void setStudent(const Student& newStudent) { student = newStudent; }
	void setNext(Node *newNext) { next = newNext; }
private:
    Student student;	
    Node *next;		
};

class StudentList
{
public:
	// default constructor
	StudentList();
	//copy constructor
	StudentList(const StudentList& otherList);
	// addStudent

	void addStudent(const Student&);
	// getNoOfStudents

	int getNoOfStudents() const;
	// printStudentByID

	void printStudentByID(int) const;
	// printStudentsByCourse
	void printStudentsByCourse(const std::string&, int) const;
	// printStudentByName
	void printStudentByName(const std::string&) const;
	// printStudentsOnHold
	void printStudentsOnHold() const;
	// printAllStudents
	void printAllStudents() const;

	// destroyStudentList
	void destroyStudentList();
	// destructor
	~StudentList();

private:
	Node *first;
	Node *last;
	int count;
	StudentList& operator=(const StudentList& otherList);

	// Definition function copyCallingObjIsEmpty
	void copyCallingObjIsEmpty(const StudentList&);
	// Definition function copyObjectsSameLength
	void copyObjectsSameLength(const StudentList&) const;
	// Definition function copyCallingObjLonger
	void copyCallingObjLonger(const StudentList&);
	// Definition function copyCallingObjShorter
	void copyCallingObjShorter(const StudentList&);
};

#endif

