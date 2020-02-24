#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
	AnyList myList;

	myList.insertFront(6);
	myList.insertFront(5);
	myList.insertFront(4);
	myList.insertFront(2);
	myList.insertFront(1);

	cout << "Inserted: 2 3 4 5 6\n";
	cout << "List is: ";
	myList.print();
	cout << endl;
	
	cout << "delete 1:" << endl;
	myList.deleteElem(1);
	myList.print();
	cout << "delete 4:" << endl;
	myList.deleteElem(4);
	myList.print();
	cout << "delete 6:" << endl;
	myList.deleteElem(6);
	myList.print();
	cout << "delete 5:" << endl;
	myList.deleteElem(5);
	myList.print();
	cout << "delete 3:"<< endl;
	myList.deleteElem(3);
	myList.print();
	cout << "delete 2:" << endl;
	myList.deleteElem(2);
	myList.print();


	myList.deleteElem(100); //err

	cout << endl;
	system("Pause");
	return 0;
}
