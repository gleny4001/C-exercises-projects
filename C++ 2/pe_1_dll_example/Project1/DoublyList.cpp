#include "DoublyList.h"

using namespace std;

	// overloaded insertion operator
ostream& operator<<(ostream& out, const DoublyList& theList)
{
	Node* current = theList.first;
	while (current != nullptr)
	{
		out << current->getData() << "  ";
		current = current->getNext();
	}
	return out;
}


	// constructor
DoublyList::DoublyList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

	// insert
void DoublyList::insert(const vector<int>& aVector)
{
	// Assumptions: 
	// --- Calling object is empty
	// --- Parameter object is non-empty
	// Inserts to back of the list

	count = static_cast<int>(aVector.size());

	first = last = new Node(aVector[0], nullptr, nullptr);
	for (int i = 1; i < count; ++i )
	{
		last->setNext(new Node(aVector[i], last, nullptr));
		last = last->getNext();
	}
}

	// destroyList
void DoublyList::destroyList()
{ 	
    Node  *temp = first;
	
	while (first != nullptr)
    {        
        first = first->getNext();
        delete temp;
		temp = first;
    }

    last = nullptr;
	count = 0;
}

	// destructor
DoublyList::~DoublyList()
{
	destroyList();
}
