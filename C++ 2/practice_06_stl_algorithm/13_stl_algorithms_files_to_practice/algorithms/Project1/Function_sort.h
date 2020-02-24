/****************************************************************************

	(algorithm) sort
		
		template <class RandomAccessIterator>
		void sort (RandomAccessIterator first, RandomAccessIterator last);

		Sorts the elements in the range [first,last) into ascending order.

		Parameters:
		first, last 
			Random-access iterators to the initial and final positions 
			of the sequence to be sorted. The range used is [first,last), which contains 
			all the elements between first and last, including the element pointed by 
			first but not the element pointed by last.
		comp 
			Binary function that accepts two elements in the range as arguments, 
			and returns a value convertible to bool. The value returned indicates 
			whether the element passed as first argument is considered to go 
			before the second in the specific strict weak ordering it defines.

		Return value:
		none
		
		*** The STL list class has its own sort function => void sort()


****************************************************************************/

#ifndef FUNCTION_SORT_H
#define FUNCTION_SORT_H

void function_sort()
{
	cout << "\n\n*** FUNCTION sort...\n";

	// your code here...


}

#endif