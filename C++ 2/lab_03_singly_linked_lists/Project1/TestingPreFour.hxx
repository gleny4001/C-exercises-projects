// Testing cases

#include "AnyList.h"

using namespace std;

void testPreFour(const int a[], int numOfElements)
{
	AnyList parameterList, emptyList;

	for (int i = 0; i < numOfElements; ++i)
		parameterList.insertBack(a[i]);

	/************************************************************

	FUNCTION CALL: preFour

	Comment/uncomment the statement below for testing.

	************************************************************/
	
	emptyList.preFour(parameterList);
	
	/************************************************************

	END FUNCTION CALL

	************************************************************/
	
	cout << "Parameter list:\t: ";
	parameterList.print();
	cout << endl;
	cout << "Total elements:\t" << parameterList.getNumberOfElements() << endl;
	if (parameterList.getNumberOfElements() > 0)
	{
		cout << "First element:\t" << parameterList.getFirstElement() << endl;
		cout << "Last element:\t" << parameterList.getLastELement() << endl;
	}
	
	cout << "Calling list:\t: ";
	emptyList.print();
	cout << endl;
	cout << "Total elements:\t" << emptyList.getNumberOfElements() << endl;
	if (emptyList.getNumberOfElements() > 0)
	{
		cout << "First element:\t" << emptyList.getFirstElement() << endl;
		cout << "Last element:\t" << emptyList.getLastELement() << endl;
	}

	cout << endl;
}

void testPreFour()
{
	cout << "============== FUNCTION preFour()\n";

	int a1[] = { 1, 2, 4, 1 };
	testPreFour(a1, 4);
	int a2[] = { 1, 4, 4 };
	testPreFour(a2, 3);
	int a3[] = { 1, 4, 4, 2 };
	testPreFour(a3, 4);
	int a4[] = { 1, 3, 4, 2, 4 };
	testPreFour(a4, 5);
	int a5[] = { 4, 4 };
	testPreFour(a5, 2);
	int a6[] = { 3, 3, 4 };
	testPreFour(a6, 3);
	int a7[] = { 1, 2, 1, 4 };
	testPreFour(a7, 4);
	int a8[] = { 3, 4, 3, 4, 3, 4, 4 };
	testPreFour(a8, 7);
	int a9[] = { 2, 1, 4, 2 };
	testPreFour(a9, 4);
	int a10[] = { 2, 1, 2, 1, 4, 2 };
	testPreFour(a10, 6);
}


