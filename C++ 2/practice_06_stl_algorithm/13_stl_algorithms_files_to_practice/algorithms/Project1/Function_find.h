/****************************************************************************

	(algorithm) find
		
		template <class InputIterator, class T>
		InputIterator find (InputIterator first, InputIterator last, const T& val);

		Returns an iterator to the first element in the range [first,last)
		that compares equal to val. If no such element is found, the function
		returns last.

		Parameters:
		first, last 
			Input iterators to the initial and final positions in a 
			sequence. The range searched is [first,last), which contains 
			all the elements between first and last, including the element 
			pointed by first but not the element pointed by last.
		val 
			Value to search for in the range. T shall be a type supporting 
			comparisons with the elements pointed by InputIterator using 
			operator== (with the elements as left-hand side operands, and 
			val as right-hand side).

		Return value:
		An iterator to the first element in the range that compares equal to val.
		If no elements match, the function returns last.

****************************************************************************/

#ifndef FUNCTION_FIND_H
#define FUNCTION_FIND_H

void function_find()
{
	cout << "\n\n*** FUNCTION find...\n";

	// your code here...
	vector<int> v = {1,2,3,4,15,6,7,8,5,3 };
	printVector(v);
	auto iter = find(v.begin()+3, v.begin()+7, 5);
	if (iter != v.begin()+7)
		cout << "found" << endl;
	else
	cout << "Not found 404" << endl;

	cout << "Index:" << (iter - v.begin()) << endl;

	
}

#endif