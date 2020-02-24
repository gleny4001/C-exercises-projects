/*
	Name header
*/

#include "DoublyList.h"

using namespace std;

// Definition function rotateLeft
void DoublyList::rotateLeft()
{
	Node* temp = first;
	first = first->getNext();
	first->setPrev(nullptr);
	last->setNext(temp);
	temp->setPrev(last);
	temp->setNext(nullptr);
	last = temp;
}

void DoublyList::insertNode(int elem) 
{
	last->setNext(new Node(elem, last, nullptr));
	last = last->getNext();

}

void DoublyList::RearrangeList()//?
{
	Node* temp = first;

}

void DoublyList::SwapNodes(int idx)//?
{
	Node* temp = first;
	for (int i = 0; i <= idx; i++)
	{
		temp = temp->getNext();
	}

	temp->getPrev()->setNext(temp->getNext());
	temp->getNext()->setPrev(temp->getPrev());
	
		

}

void DoublyList::DeleteFirstNode()
{
	Node* temp = first;

	first = first->getNext();

	delete temp;
	temp = nullptr;
	first->setPrev(nullptr);

}

void DoublyList::SwapNodesFL(DoublyList otherList)
{
	Node* temp = first;
	Node* ptr = otherList.last;

	int ParameterLast = ptr->getData();

	ptr->setData(first->getData());

	temp->setData(ParameterLast);
}

bool DoublyList::SearchNode(int elem) const
{
	bool found = false;

	Node* temp = first;

	while (temp != nullptr)
	{
		if (temp->getData() == elem)
		{
			found = true;
		}
		temp = temp->getNext();
	}

	return found;
}