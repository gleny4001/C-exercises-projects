// Testing cases

#include "AnyList.h"

using namespace std;

void testGetMin(const int a[], int numOfElements)
{
	AnyList list;

	for (int i = 0; i < numOfElements; ++i)
		list.insertBack(a[i]);

	cout << "List:\t";
	list.print();
	cout << endl;

	/************************************************************

	FUNCTION CALL: getMin

	Comment/uncomment the statement below for testing.

	************************************************************/

	cout << "MINIMUM VALUE => " << list.getMin() << endl;

	/************************************************************

	END FUNCTION CALL

	************************************************************/
		
	cout << "Total elements:\t" << list.getNumberOfElements() << endl;

	if (list.getNumberOfElements() > 0)
	{
		cout << "First element:\t" << list.getFirstElement() << endl;
		cout << "Last element:\t" << list.getLastELement() << endl;
	}

	cout << endl;
}

void testGetMin()
{
	cout << "============== FUNCTION getMin()\n";

	int a1[10];
	testGetMin(a1, 0);

	int a2[] = { 1 };
	testGetMin(a2, 1);

	int a3[] = { 5, 6, 2, 9, 3 };
	testGetMin(a3, 5);

	int a4[] = { 3, 9 };
	testGetMin(a4, 2);

	int a5[] = { 5, 7 };
	testGetMin(a5, 2);

	int a6[] = { 2, 6, 9 };
	testGetMin(a6, 3);

	int a7[] = { 9, 7, 5 };
	testGetMin(a7, 3);

	int a8[] = { 6, 8, 3 };
	testGetMin(a8, 3);

	int a9[] = { 2, 5, 3, 7, 9, 4, 1 };
	testGetMin(a9, 7);

	int a10[] = { 2, 5, 7, 3, 4, 8, 6, 9 };
	testGetMin(a10, 8);
}
