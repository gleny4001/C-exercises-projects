/************************
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*************************/ 

#include "StudentList.h"

using namespace std;

// default constructor
StudentList::StudentList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}
//copy constructor
StudentList::StudentList(const StudentList& otherList)
{
	auto iter = otherList.first;

	first = new Node(iter->getStudent(), nullptr);
	last = first;
	iter = iter->getNext();

	while (iter != nullptr)
	{
		Node* newNode = new Node(iter->getStudent(), nullptr);
		last->setNext(newNode);
		last = newNode;
		iter = iter->getNext();
	}
	count = otherList.count;
}

//overload assignment
StudentList& StudentList::operator=(const StudentList& otherList)
{
	if (&otherList != this) // make sure objects are distinct
	{
		// parameter object is empty
		if (otherList.first == nullptr)
			destroyStudentList();
		else if (first == nullptr)
			copyCallingObjIsEmpty(otherList);
		// lists have the SAME number of nodes
		else if (count == otherList.count)
			copyObjectsSameLength(otherList);
		// calling object has MORE nodes than the parameter object
		else if (count > otherList.count)
			copyCallingObjLonger(otherList);
		// calling object has LESS nodes than the parameter object
		else
			copyCallingObjShorter(otherList);

		count = otherList.count;
	}
	else
		cerr << "Attempted assignment to itself." << endl;

	return *this;
}

// addStudent
void StudentList::addStudent(const Student& newStudent)
{
	if (first == nullptr)
	{
		first = new Node(newStudent, nullptr);
		last = first;
	}
	else
		first = new Node(newStudent, first);

	count++;
}

// getNoOfStudents
int StudentList::getNoOfStudents() const
{
	return count;
}

// printStudentByID
void StudentList::printStudentByID(int myID) const
{
	if (count == 0)
		cerr << "List is empty" << endl;
	else
	{
		Node* current = first;
		bool found = false;

		while (current != nullptr && !found)
		{
			if (current->getStudent().getID() == myID)
			{
				current->getStudent().printStudentInfo();
				found = true;
			}
			current = current->getNext();
		}
		if (!found)
			cout << "No student with ID " << myID 
				<< " found in the list." << endl;
	}
}
// printStudentsByCourse
void StudentList::printStudentsByCourse(const string& course, int courseID) const
{
	if (count == 0)
		cerr << "List is empty.";
	else
	{
		bool found = false;
		Node* current = first;

		while (current != nullptr)
		{
			if (current->getStudent().getNumberOfCourse() != 0)
			{
				if (current->getStudent().courseIsCompleted(course,courseID))
				{
					current->getStudent().printStudent();
					found = true;
				}
			}
			current = current->getNext();
		}
		if (!found) cout << "No student completed " << courseID << endl;
	}
}
// printStudentByName
void StudentList::printStudentByName(const string& name) const
{
	if (count > 0)
	{
		Node* current = first;
		bool found = false;

		while (current != nullptr)
		{
			if (current->getStudent().getLastName() == name)
			{
				found = true;
				current->getStudent().printStudent();
			}
			current = current->getNext();
		}

		if (!found)
			cout << "No student with last name " << name 
				<< " is in the list." << endl;
	}
	else
		cerr << "List is empty." << endl;
}
// printStudentsOnHold
void StudentList::printStudentsOnHold() const
{
	if (count == 0)
	{
		cerr << "No students in the list.";
	}
	Node *temp = first;
	bool onHold = false;

	while(temp != nullptr)
	{
		if( !temp->getStudent().isTuitionPaid() )
		{
			temp->getStudent().printStudentInfo();
			onHold = true;
		}
		temp = temp->getNext();
	}
	if (!onHold)
		cout << "There are no students on hold." << endl;


}
// printAllStudents
void StudentList::printAllStudents() const
{
	if (count == 0)
		cerr << "No students in the list";
	else
	{
		Node* temp = first;
		while (temp != nullptr)
		{
			temp->getStudent().printStudentInfo();
			temp = temp->getNext();
		}
	}
}

// destroyStudentList
void StudentList::destroyStudentList()
{
	Node* current = first;

	while(current != nullptr)
	{
		first = current->getNext();
		delete current;
		current = first;
	}
	first = last = nullptr;
	count = 0;
}
// destructor
StudentList::~StudentList()
{
	destroyStudentList();
}

// Definition function copyCallingObjIsEmpty
void StudentList::copyCallingObjIsEmpty(const StudentList& otherList)
{
	Node* temp = otherList.first;

	while (temp != nullptr)
	{
		addStudent(temp->getStudent());
		temp = temp->getNext();
	}
}
// Definition function copyObjectsSameLength
void StudentList::copyObjectsSameLength(const StudentList& otherList) const
{
	Node* pull = otherList.first;
	Node* push = first;

	while (pull != nullptr)
	{
		push->setStudent(pull->getStudent());
		pull = pull->getNext();
		push = push->getNext();
	}
}
// Definition function copyCallingObjLonger
void StudentList::copyCallingObjLonger(const StudentList& otherList)
{
	auto pull = otherList.first;
	auto push = first;

	while (pull != nullptr)
	{
		push->setStudent(pull->getStudent());
		push = push->getNext();
		pull = pull->getNext();
	}
	last = push;

	push = push->getNext();
	auto temp = push->getNext();
	last->setNext(nullptr);

	while (temp != nullptr)
	{
		delete push;
		push = temp;
		temp = temp->getNext();
	}
	delete push;

}
// Definition function copyCallingObjShorter
void StudentList::copyCallingObjShorter(const StudentList& otherList)
{
	Node* pull = otherList.first;
	Node* push = first;

	while (push != nullptr)
	{
		push->setStudent(pull->getStudent());
		pull = pull->getNext();
		push = push->getNext();
	}

	while (pull != nullptr)
	{
		addStudent(pull->getStudent());
		pull = pull->getNext();
	}
	count = otherList.count;
}