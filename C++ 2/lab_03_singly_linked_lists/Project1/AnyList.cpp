#include "AnyList.h"

using namespace std;

	//constructor
AnyList::AnyList()
{
	ptrToFirst = nullptr;
	count = 0;
}

	//insertBack
void AnyList::insertBack(int newData)
{
	Node *ptrToNewNode = new Node(newData, nullptr);

	if (count == 0)
		ptrToFirst = ptrToNewNode;
	else
	{
		Node *current = ptrToFirst;

		while (current->getPtrToNext() != NULL)
			current = current->getPtrToNext();

		current->setPtrToNext(ptrToNewNode);
	}

	++count;
}

	//getNumberOfElments	
int AnyList::getNumberOfElements() const
{
	return count;
}

	//getFirstElement
int AnyList::getFirstElement() const
{
	// Assume list has at least one node.
	return ptrToFirst->getData();
}

	//getLastElement
int AnyList::getLastELement() const
{
	// Assume list has at least one node.
	Node *temp = ptrToFirst;

	while (temp->getPtrToNext() != nullptr)
		temp = temp->getPtrToNext();

	return temp->getData();
}
	//print
void AnyList::print() const
{
	if (ptrToFirst == nullptr) 
		cerr << "List is empty.";
	else
	{
		Node *current;	
		current = ptrToFirst;	

		while (current != nullptr)	
		{						
			//  end of the list
			cout << current->getData() << " ";	 
			current = current->getPtrToNext();		
		}
	}
}

	//destroyList - Does not delete the list object; it only deletes the nodes.
void AnyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
	while (ptrToFirst != nullptr)
    {
		temp = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
        delete temp;
		temp = nullptr;
    }

	count = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}
