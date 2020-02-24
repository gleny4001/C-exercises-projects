/*
	(name header)
*/

#include "AnyList.h"

using namespace std;

// Definition function getMin
int AnyList::getMin() const
{
	Node* current = ptrToFirst;
	
	if (ptrToFirst == nullptr)
	{
		return 0;
	}
	int temp = current->getData();
	while (current->getPtrToNext() != nullptr)
	{
		
		if (temp > current->getData())
		{
			temp = current->getData();
		}
		current = current->getPtrToNext();
		
	}
	return temp;
}
// Definition function haveThree
bool AnyList::haveThree() const
{
	bool found = false;
	int newCount = 0;
	Node* current = ptrToFirst;

	while (current != nullptr)
	{
		if (current->getData() != 3)
		{
			found = false;
		}
		else if (current->getData() == 3 && found == true)
		{
			return false;
		}
		else if (current->getData() == 3 && found == false)
		{
			found = true;
			++newCount;
		}
		current = current->getPtrToNext();
	}
	if (newCount == 3)
	{
		return found;
	}
}

// Definition function preFour
void AnyList::preFour(const AnyList& List)
{
	Node* temp = List.ptrToFirst;
	while (temp->getData() != 4)
	{
		insertBack(temp->getData());
		temp = temp->getPtrToNext();
	}
}