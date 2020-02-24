/****************************************************************************

	(algorithm) replace_if
		
		template <class ForwardIterator, class UnaryPredicate, class T>
		void replace_if (ForwardIterator first, ForwardIterator last,
					   UnaryPredicate pred, const T& new_value );

		Assigns new_value to all the elements in the range [first,last)
		for which pred returns true.

		Parameters:
		first, last
			Forward iterators to the initial and final positions 
			in a sequence of elements that support being assigned a value 
			of type T. The range used is [first,last), which contains all 
			the elements between first and last, including the element 
			pointed by first but not the element pointed by last.
		pred
			Unary function that accepts an element in the range as argument, 
			and returns a value convertible to bool. The value returned 
			indicates whether the element is to be replaced (if true, it is replaced).
		new_value
			Value to assign to replaced elements.

		Return value:
		none

****************************************************************************/

#ifndef FUNCTION_REPLACE_IF_H
#define FUNCTION_REPLACE_IF_H

// Unary predicate function.
// your code here...


void function_replace_if()
{
	cout << "\n\n*** FUNCTION replace_if...\n";

	// your code here...


}

#endif