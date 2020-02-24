/****************************************************************************

	(algorithm) reverse
		
		template <class BidirectionalIterator>
		void reverse (BidirectionalIterator first, BidirectionalIterator last);

		Reverses the order of the elements in the range [first,last).

		Parameters:
		first, last
			Bidirectional iterators to the initial and final positions 
			of the sequence to be reversed. The range used is [first,last), 
			which contains all the elements between first and last, including 
			the element pointed by first but not the element pointed by last.

		Return value:
		none

		*** The STL list class has its own reverse function => void reverse()

****************************************************************************/

#ifndef FUNCTION_REVERSE_H
#define FUNCTION_REVERSE_H

void function_reverse()
{
	cout << "\n\n*** FUNCTION reverse...\n";

	// your code here...


}

#endif