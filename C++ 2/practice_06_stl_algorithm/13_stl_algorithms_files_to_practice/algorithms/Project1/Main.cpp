#include <iostream>
#include <string>
#include <iterator>  
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

void printVector(const vector<int>& aVector);
void printList(const list<int>& aList);

#include "Function_fill.h"
#include "Function_find.h"
#include "Function_remove.h"
#include "Function_remove_if.h"
#include "Function_replace.h"
#include "Function_replace_if.h"
#include "Function_reverse.h"
#include "Function_rotate.h"
#include "Function_sort.h"

int main()
{			
	function_fill();
	cout << "\n=================================================";
	
	function_find(); 
	cout << "\n=================================================";

	function_remove();
	cout << "\n=================================================";

	function_remove_if();
	cout << "\n=================================================";

	function_replace();
	cout << "\n=================================================";

	function_replace_if();
	cout << "\n=================================================";

	function_reverse();
	cout << "\n=================================================";

	function_rotate();
	cout << "\n=================================================";

	function_sort();
	cout << "\n=================================================";

		cout << endl;
	system("Pause");
	return 0;
}

void printVector(const vector<int>& aVector)
{
	for (const int& i : aVector)
		cout << i << " ";
	cout << endl;
}

void printList(const list<int>& aList)
{
	for (const int& i : aList)
		cout << i << " ";
	cout << endl;
}