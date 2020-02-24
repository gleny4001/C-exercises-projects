/****************************************************************************

	(algorithm) fill
		
		template <class ForwardIterator, class T>
		void fill (ForwardIterator first, ForwardIterator last, const T& val);

		Assigns val to all the elements in the range [first, last).

		Parameters: 
		first, last 
			Forward iterators to the initial and final positions in a 
			sequence of elements that support being assigned a value of type T. 
			The range filled is [first,last), which contains all the elements 
			between first and last, including the element pointed by first but 
			not the element pointed by last.
		val 
			Value to assign to the element in the filled range.

		Return value:
		none

****************************************************************************/

#ifndef FUNCTION_FILL_H
#define FUNCTION_FILL_H

void function_fill()
{	
	cout << "*** FUNCTION fill...\n";
	list<int> a;
	a.resize(6);
	auto iterList = a.begin();
	for (int i = 0; i < 3; ++i)
		++iterList;
	fill(iterList, a.end(), 200);
	
	fill(a.begin(), iterList, 4);
	fill(++a.begin(), ++iterList, 5);
	printList(a);


}

#endif