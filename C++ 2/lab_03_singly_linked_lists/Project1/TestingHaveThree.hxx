// Testing haveThree()

#include "AnyList.h"

using namespace std;

void testHaveThree(const int a[], int numOfElements)
{
	AnyList list;

	for (int i = 0; i < numOfElements; ++i)
		list.insertBack(a[i]);

	/************************************************************

	FUNCTION CALL: haveThree

	Comment/uncomment the statement below for testing.

	************************************************************/

	cout << ((list.haveThree()) ? "True\t=> " : "False\t=> ");

	/************************************************************

	END FUNCTION CALL

	************************************************************/

	cout << "List: ";
	list.print();
	
	cout << endl;
}

void testHaveThree()
{
	cout << "============== FUNCTION haveThree()\n";

	int a1[] = { 3, 1, 3, 1, 3, 4, 3, 1, 3, 2 };
	testHaveThree(a1, 10);
	int a2[] = { 3, 1, 3, 3 };
	testHaveThree(a2, 4);
	int a3[] = { 3, 4, 3, 3, 4 };
	testHaveThree(a3, 5);
	int a4[] = { 1, 3, 1, 3, 1, 2 };
	testHaveThree(a4, 6);
	int a5[] = { 1, 3, 1, 3, 1, 3 };
	testHaveThree(a5, 6);
	int a6[] = { 1, 3, 3, 1, 3 };
	testHaveThree(a6, 5);
	int a7[] = { 1, 3, 1, 3, 1, 3, 4, 3 };
	testHaveThree(a7, 8);
	int a8[] = { 3, 4, 3, 4, 3, 4, 4 };
	testHaveThree(a8, 7);
	int a9[] = { 3, 3, 3 };
	testHaveThree(a9, 3);
	int a10[] = { 1, 3 };
	testHaveThree(a10, 2);
	int a11[] = { 3 };
	testHaveThree(a11, 1);
	int a12[] = { 1 };
	testHaveThree(a12, 1);

	cout << endl;
}
