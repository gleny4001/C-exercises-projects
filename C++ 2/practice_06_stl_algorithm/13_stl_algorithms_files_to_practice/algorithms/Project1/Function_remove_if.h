/****************************************************************************

	(algorithm) remove_if
		
		template <class ForwardIterator, class T>
		ForwardIterator remove_if (ForwardIterator first, ForwardIterator last,
                             UnaryPredicate pred);

		Transforms the range [first,last) into a range with all the elements for 
		which pred returns true removed, and returns an iterator to the new end 
		of that range. It does not update the size of the vector.

		Parameters:
		first, last
			Forward iterators to the initial and final positions in a 
			sequence of move-assignable elements. The range used is 
			[first,last), which contains all the elements between first 
			and last, including the element pointed by first but not 
			the element pointed by last.
		pred 
			Unary function that accepts an element in the range as argument, 
			and returns a value convertible to bool. The value returned 
			indicates whether the element is to be removed (if true, it 
			is removed).

	    Return value:
		An iterator to the element that follows the last element not removed.
		(This really means that it is pointing to the new end of the container.)
		
		Note: It does not work with sets and maps, because these containers
		are not represented linearly.

****************************************************************************/

#ifndef FUNCTION_REMOVE_IF_H
#define FUNCTION_REMOVE_IF_H

// Unary predicate function.
// your code here...

void function_remove_if()
{
	cout << "\n\n*** FUNCTION remove_if...\n";

	// your code here...


}

#endif