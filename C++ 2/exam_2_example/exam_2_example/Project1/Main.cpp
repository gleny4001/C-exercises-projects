#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std; 

#include "Functions.h"

int main()
{
	{
		cout << "TEST: function1" << endl;
		vector<int> v = { 6, 3, 1 ,3 };
		DArrayChild dArrayChild;
		dArrayChild.addElements(v);
		vector<int> paramVector = { 6, 3, 1 };	
		cout << "\n  Calling object: " << dArrayChild;
		cout << "\nParameter object: ";
		for (auto i : paramVector)
			cout << i << " ";
		cout << "\n=> call to function...";
		cout << "\n    Your output: ";

		/****************************************************************
		** TO TEST YOUR IMPLEMENTATION, UNCOMMENT THE STATEMENT BELOW.
		****************************************************************/
		cout << ((dArrayChild.function1(paramVector)) ?
			"Same" : "Not the same") << endl;		
	}

	cout << "\n----------------------------------------\n";

	{
		cout << "TEST: function2" << endl;
		vector<int> v = { 3, 7, 2, 9 };
		DoublyListChild doublyListChild;
		doublyListChild.addElements(v);
		list<int> paramList = { 5, 9, 2, 1, 8 }; 
		cout << "\n  Calling object: " << doublyListChild;
		cout << "\nParameter object: ";
		for (auto i : paramList)
			cout << i << " ";
		cout << "\n=> call to function...";

		/****************************************************************
		** TO TEST YOUR IMPLEMENTATION, UNCOMMENT THE STATEMENT BELOW.
		****************************************************************/
		doublyListChild.function2(paramList);

		cout << "\n  Calling object: " << doublyListChild;
		cout << "\nParameter object: ";
		for (auto i : paramList)
			cout << i << " ";
		cout << endl;
	}

	cout << "\n----------------------------------------\n";

	{
		cout << "TEST: function3" << endl;
		DoublyListChild doublyListChild;
		list<int> paramList1 = { 3, 7, 2, 9 };
		list<int> paramList2 = { 5, 4, 1, 3 ,6, 0, 8 };
		cout << "\n    Calling object: " << doublyListChild; 
		cout << "\nParameter object 1: ";
		for (auto i : paramList1)
			cout << i << " ";
		cout << "\nParameter object 2: ";
		for (auto i : paramList2)
			cout << i << " ";
		cout << "\n=> call to function...";

		/****************************************************************
		** TO TEST YOUR IMPLEMENTATION, UNCOMMENT THE STATEMENT BELOW.
		****************************************************************/
		doublyListChild.function3(paramList1, paramList2);

		cout << "\n    Calling object: " << doublyListChild;
		cout << "\nParameter object 1: ";
		for (auto i : paramList1)
			cout << i << " ";
		cout << "\nParameter object 2: ";
		for (auto i : paramList2)
			cout << i << " ";
		cout << endl;
	}

	cout << "\n----------------------------------------\n";

	{
		cout << "TEST: function4" << endl;
		deque<int> dqStack = {10,20,30,40,50}; // 50 is top
		deque<int> dqQueue = { 1, 2, 3 };	// 1 is front
		stack<int> s(dqStack);
		cout << "\nStack: (top) ";
		queue<int> q(dqQueue);
		for (int i : dqStack) cout << i << " ";
		cout << "\nQueue: (front) ";
		for (int i : dqQueue) cout << i << " ";
		cout << "\n=> call to function...";

		/****************************************************************
		** TO TEST YOUR IMPLEMENTATION, UNCOMMENT THE STATEMENT BELOW.
		****************************************************************/
		function4(s, q);

		cout << "\nStack: (top) ";
		while (!s.empty()) { cout << s.top() << " "; s.pop(); }
		cout << "\nQueue: (front) ";
		while (!q.empty()) { cout << q.front() << " "; q.pop(); }
	}

	cout << endl;
	system("Pause");
	return 0;
}

