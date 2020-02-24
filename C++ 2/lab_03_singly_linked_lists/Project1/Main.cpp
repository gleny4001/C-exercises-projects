#include "TestingGetMin.hxx"
#include "TestingHaveThree.hxx"
#include "TestingPreFour.hxx"

#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
	// TESTING CASES 
	testGetMin();
	testHaveThree();	
	testPreFour();

	cout << endl;
	system("Pause");
	return 0;
}
