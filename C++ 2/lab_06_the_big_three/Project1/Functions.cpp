/*
	Yang,  Glen
	
	Nguyen, Josh

	McGinty, Ryan

	Octover 2, 2019

	CS A250
	Lab 6
*/

#include "DoublyList.h"

using namespace std;

// Definition copy constructor
DoublyList::DoublyList(const DoublyList& otherList)
{
	
	count = 0;
	first = nullptr;
	last = nullptr;
	Node* ptr = otherList.first;

	while (ptr != nullptr)
	{
		insertBack(ptr->getData());
		
		ptr = ptr->getNext();
	}
	
	
}

// Definition function copyCallingObjIsEmpty
void DoublyList::copyCallingObjIsEmpty(const DoublyList& otherList)
{
	Node* ptr = otherList.first;

	while (ptr != nullptr)
	{
		insertBack(ptr->getData());

		ptr = ptr->getNext();
	}
	
}

// Definition function copyObjectsSameLength
void DoublyList::copyObjectsSameLength(const DoublyList& otherList)
{
	Node* ptr = otherList.first;
	Node* ptr1 = first;
	while (ptr1 != nullptr)
	{
		ptr1->setData(ptr->getData());
		ptr = ptr->getNext();
		ptr1 = ptr->getNext();
	}
	

	
}
// Definition function copyCallingObjLonger
void DoublyList::copyCallingObjLonger(const DoublyList& otherList)
{
	
	Node* ptr = last;
	while (otherList.count < count)
	{
		last = ptr->getPrev();
		delete ptr;
		ptr = last;
		count--;
	}

	Node* ptr1 = first;
	Node* ptr2 = otherList.first;

	while (ptr2 != nullptr)
	{

		ptr1->setData(ptr2->getData());
		ptr1 = ptr1->getNext();
		ptr2 = ptr2->getNext();

	}

	last->setNext(nullptr);

	

	
	
}

// Definition function copyCallingObjShorter
void DoublyList::copyCallingObjShorter(const DoublyList& otherList)
{
	Node* ptr = first;
	Node* ptr1 = otherList.first;

	while (ptr != nullptr)
	{
		ptr->setData(ptr1->getData());
		ptr = ptr->getNext();
		ptr1 = ptr1->getNext();
		
	}
	ptr = last;
	while (ptr1 != nullptr)
	{
		insertBack(ptr1->getData());
		ptr1 = ptr1->getNext();
		ptr = ptr->getNext();
		++count;
	}
	

}

