/*		[1]	9	int

	Yang,  Glen
	
	Octover 2, 2019

	CS A250
	STL Practice
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//Cerate vector v1 using the default constructor.
	vector<int> v1;

	//Create vector v2 using the copy constructor and copying from v1
	vector<int> v2 = v1;
	//Create vector v3 using the initializer list constructor 
	vector<int> v3 = { 1,2,3,4,5 };
	//vector<int> v3 {1,2,3,4,5}; 


	{
		vector<int> v1 = { 10, 11, 12, 13, 14 };
		
		vector<int>::iterator iterVector = v1.begin();
		/*
		cout << v1[0] << endl;
		cout << v1.at(0) << endl;
		cout<< *iterVector << endl;

		cout << v1[1] << endl;
		cout << v1.at(1) << endl;

		++iterVector;
		cout << *iterVector << endl;

		cout << *(iterVector + 2) << endl;
		*/
		vector<int>::iterator iterVectorEnd = v1.end();
		for (iterVector; iterVector != iterVectorEnd; ++iterVector)
		{
			cout << *iterVector << endl;
		}

		vector<int>::reverse_iterator rIterVector = v1.rbegin();
		vector<int>::reverse_iterator rIterVectorEnd = v1.rend();
		for (rIterVector; rIterVector != rIterVectorEnd; ++rIterVector)
		{
			cout << *rIterVector << endl;
		}

		 

	}




	cout << endl;
	system("pause");
	return 0;
}