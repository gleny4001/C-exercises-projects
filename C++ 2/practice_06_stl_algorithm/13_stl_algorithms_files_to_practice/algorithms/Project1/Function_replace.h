/****************************************************************************

	(algorithm) replace

		template <class ForwardIterator, class T>
		void replace (ForwardIterator first, ForwardIterator last,
						const T& old_value, const T& new_value);

		Assigns new_value to all the elements in the range [first,last)
		that compare equal to old_value.

		Parameters:
		first, last
			Forward iterators to the initial and final positions 
			in a sequence of elements that support being compared 
			and assigned a value of type T. The range used is [first,last), 
			which contains all the elements between first and last, 
			including the element pointed by first but not the element 
			pointed by last.
		old_value
			Value to be replaced.
		new_value
			Replacement value.

		Return value:
		none

****************************************************************************/

#ifndef FUNCTION_REPLACE_H
#define FUNCTION_REPLACE_H

void function_replace()
{
	cout << "\n\n*** FUNCTION replace...\n";

	// your code here...


}

#endif