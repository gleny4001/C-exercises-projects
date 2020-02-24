/*
	(name header)
*/

#pragma once

#include "DArray.h"
#include "DoublyList.h"

#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

// Member functions of the DArray class.
class DArrayChild : public DArray
{
public:

	// Definition function function1
	// Your code here...
	bool function1(const vector<int>& v) const
	{
		int size = static_cast<int> (v.size());
		if (numOfElem != size)
		{
			return false;
		}
		else if (numOfElem == 0)
		{
			return false;
		}
		for (int i = 0; i < numOfElem; ++i)
		{
			if (a[i] != v[i])
				return false;
		}
		return true;

	}

	// Do not move the code below.
	DArrayChild() {}
	~DArrayChild() {}
};

// Member functions of the DoublyList class.
class DoublyListChild : public DoublyList
{
public:

	// Definition function function2
	// Your code here...
	void function2(const list<int>& aList) 
	{
		int firstElem = first->getData();
		auto found = find(aList.cbegin(), aList.cend(),firstElem);
		if (found == aList.cend())
		{
			insertBack(0);
		}
		else
		{
			insertBack(firstElem);
		}
	}

	// Definition function function3
	// Your code here...
	void function3(list<int>& list1, list<int>& list2)
	{
		list<int>::const_iterator it = ++list1.cbegin();
		++it;
		list1.splice(it,list2, list2.cbegin());
		
		list<int>::const_reverse_iterator it1 = list1.crbegin();
		while (it1 != list1.crend())
		{
			insertBack(*it1);
			++it1;
		}

	}
	
	// Do not move the code below.
	DoublyListChild() {}
	~DoublyListChild() {}
};

// Non-member functions.
void function4(stack<int> stack1, queue<int>& queue2)
{	
	while(!stack1.empty())
	{
		queue2.push(stack1.top());
		stack1.pop();
	}
}
// Definition function function4
// Your code here...