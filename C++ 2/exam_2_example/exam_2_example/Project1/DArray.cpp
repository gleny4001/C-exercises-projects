#include "DArray.h"

using namespace std;

ostream& operator<<(ostream& out, const DArray& theArray)
{
	if (theArray.numOfElem == 0)
		cerr << "Array is empty.";
	else
	{
		for (int i = 0; i < theArray.numOfElem; ++i)
			out << theArray.a[i] << " ";
	}

	return out;
}

DArray::DArray()
{
    capacity = CAP;
	a = new int[capacity];	
	numOfElem = 0;
}

DArray::DArray(int newCapacity) 
{
	capacity = newCapacity;
    a = new int[capacity];
	numOfElem = 0;	 
}

void DArray::addElement(int newElement)
{
    if (numOfElem >= capacity)
        cerr << "Attempt to exceed capacity in DArray.\n";
	else
	{
		a[numOfElem] = newElement;
		++numOfElem;
	}
}

void DArray::addElements(const vector<int>& aVector)
{
	if (numOfElem >= capacity)
		cerr << "Attempt to exceed capacity in DArray.\n";
	else
		for (auto i : aVector)	a[numOfElem++] = i;
}

int DArray::getNumOfElem() const
{
	return numOfElem;
}

bool DArray::empty() const
{
	return (numOfElem == 0);
}

DArray::~DArray()
{
    delete [] a; 
	a = nullptr;
}
