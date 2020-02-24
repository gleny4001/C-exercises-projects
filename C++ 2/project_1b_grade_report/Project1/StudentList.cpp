/*
	Average_B

	Nguyen, Josh
	Tran, Duong
	Yang, Glen
	Doberstein, Chris

	CS A250 - Fall 2019

	Project 1
*/
#include "StudentList.h"

using namespace std;

//overload assignment
StudentList& StudentList::operator=(const StudentList& otherList)
{
	if (&otherList != this) // make sure objects are distinct
	{
		// parameter object is empty
		if (otherList.first == nullptr)
			destroyStudentList();
		else if (first == nullptr)
		{
			auto iter = otherList.first;
			while (iter != nullptr)
			{
				Node* newNode = new Node(iter->getStudent(), nullptr);

				if (first == nullptr)
					first = newNode;
				else
					last->setNext(newNode);

				last = newNode;
				iter = iter->getNext();
			}
		}
		// lists have the SAME number of nodes
		else if (count == otherList.count)
		{
			auto otheriter = otherList.first;
			auto iter = first;

			while (iter != nullptr)
			{
				iter->setStudent(otheriter->getStudent());

				iter = iter->getNext();
				otheriter = otheriter->getNext();
			}
		}
		// calling object has MORE nodes than the parameter object
		else if (count > otherList.count)
		{
			auto otheriter = otherList.first;
			auto iter = first;

			while (otheriter != nullptr)
			{
				iter->setStudent(otheriter->getStudent());

				iter = iter->getNext();
				otheriter = otheriter->getNext();
			}

			last = iter;
			iter = iter->getNext();
			auto temp = iter->getNext();
			last->setNext(nullptr);

			while (temp != nullptr)
			{
				delete iter;
				iter = temp;
				temp = temp->getNext();
			}
			delete iter;

		}
		// calling object has LESS nodes than the parameter object
		else
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
				Node* newNode = new Node(pull->getStudent(), nullptr);

				if (first == nullptr)
						first = newNode;
				else
					last->setNext(newNode);

				last = newNode;
				pull = pull->getNext();
			}
		}
		count = otherList.count;
	}
	else
		cerr << "Attempted assignment to itself." << endl;

	return *this;
}

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
	while (iter != nullptr)
	{
		Node* newNode = new Node(iter->getStudent(), nullptr);

		if (first == nullptr)
			first = newNode;
		else
			last->setNext(newNode);

		last = newNode;
		iter = iter->getNext();
	}
	count = otherList.count;
}


// addStudent
void StudentList::addStudent(const Student& newStudent)
{
	if(count == 0)
	{
		first = new Node(newStudent, nullptr);
		last = first;
		++count;
	}
	else
	{
		first = new Node(newStudent, first);
		++count;
	}
}

// getNoOfStudents
int StudentList::getNoOfStudents() const
{
	return count;
}

// printStudentByID
void StudentList::printStudentByID(int myID) const
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
		cerr << "No student with ID " << myID
		<< " found in the list." << endl;
}

// printStudentsByCourse
void StudentList::printStudentByCourse(string course, int courseID) const
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
				if (current->getStudent().courseIsCompleted(course,
					courseID))
				{
					current->getStudent().printStudent();
					found = true;
				}
			}
			current = current->getNext();
		}
		if (!found) cerr << "No student completed " << courseID << endl;
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
				current->getStudent().printStudentInfo();
			}
			current = current->getNext();
		}

		if (!found) cerr << "No student with last name " << name
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
			cout << temp->getStudent().getName() << " ";
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
