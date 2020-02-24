/****************************************************************************

	(algorithm) remove
		
		template <class ForwardIterator, class T>
		ForwardIterator remove (ForwardIterator first, ForwardIterator last, const T& val);

		Removes every occurrence of val in the range [first,last).
		IMPORTANT: It does not update the size of the vector.

		Parameters:
		first, last 
			Forward iterators to the initial and final positions in a 
			sequence of move-assignable elements supporting being compared to a value of type T. 
			The range used is [first,last), which contains all the elements between first and last, 
			including the element pointed by first but not the element pointed by last.
		val 
			Value to be removed.

		Return value:
		An iterator to the element that follows the last element not removed.
		(This REALLY means that it is pointing to the new end of the container.)
	
	*** The STL list class has its own remove function => void remove(elem)

****************************************************************************/

#ifndef FUNCTION_REMOVE_H
#define FUNCTION_REMOVE_H
bool lessThan50(int x)
{
	return x < 50;
}
void function_remove()
{
	cout << "\n\n*** FUNCTION remove...\n";

	// your code here...
	vector<int> v = {45,89,12,63,35,10,28,95,67,22 };
	printVector(v);

	
	v.erase(remove_if(v.begin(), v.end(), lessThan50), v.end());
	
}

#endif