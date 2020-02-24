/*
	INSTRUCTIONS

	Implement the following member function of the class DoublyList:

	Function rotateLeft
	The function rotates the calling object to the left.
	NOTE: You need to rotate the nodes, NOT the values in the nodes; 
	this means that you need to re-arrange pointers.

	Example:
	Calling object is: 1 2 3 4 5
	After calling function rotateLeft…
	Resulting calling object will be: 2 3 4 5 1

	Pointers you can create: Max 1 pointer.
	Objects you can create: None.
	Other variables you can create: None.
	Assumptions: The calling object has at least two nodes.
*/

#include "DoublyList.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	{
		// Test function rotateLeft
		DoublyList aDLL;
		vector<int> aVector = { 1, 2, 3, 4, 5 }; 
		// NOTE: After you implement the function and make sure that it 
		// works with this test case, you can modify the test case to try, 
		// for example, if your function works with a list of 2 nodes.
		// Do NOT consider anything less than 2 nodes; you will lose points
		// if you do, because the assumptions state, "The calling object
		// has at least two nodes.
		aDLL.insert(aVector);
		cout << "callingObj is: " << aDLL << endl;
		cout << "callingObj.rotateLeft()...\n";
		aDLL.rotateLeft();
		cout << "callingObj is: " << aDLL << endl;
	}

	cout << endl << endl;
	system("Pause");
	return 0;
}
