/*
	Name header
*/

#include "DoublyList.h"

using namespace std;

// Definition function print
void DoublyList::print() const
{
	Node *ptr = first;
	while (ptr != nullptr)
	{
		cout << ptr->getData() << " ";
		ptr = ptr->getNext();
	}
	delete ptr;
	ptr = nullptr;

}

// Definition function reversePrint
void DoublyList::reversePrint() const
{
	Node* ptr = last; 
	while (ptr != nullptr)
	{
		cout << ptr->getData() << " ";
		ptr = ptr->getPrev();
	}
	delete ptr;
	ptr = nullptr;
}

// Definition function front
int DoublyList::front() const
{
	return first->getData();
}

// Definition function back
int DoublyList::back() const
{
	return last->getData();
}


// Definition function transferList
void DoublyList::transferList(DoublyList& a)
{
	first = a.first;
	last = a.last;
	count = a.count;

	a.first = nullptr;
	a.last = nullptr;
	a.count = 0;
}