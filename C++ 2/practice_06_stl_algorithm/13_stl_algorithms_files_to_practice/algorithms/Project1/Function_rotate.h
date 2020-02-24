/****************************************************************************

	(algorithm) rotate 
	
		template <class ForwardIterator>
		ForwardIterator rotate (ForwardIterator first, ForwardIterator middle,
				   ForwardIterator last);

		Rotates the order of the elements in the range [first,last),
		in such a way that the element pointed by middle becomes the
		new first element.

		Parameters:
		first, last
			Forward iterators to the initial and final positions of the 
			sequence to be rotated left. The range used is [first,last), which 
			contains all the elements between first and last, including the element 
			pointed by first but not the element pointed by last.
		middle
			Forward iterator pointing to the element within the range [first,last) 
			that is moved to the first position in the range.

		Return value:
		An iterator pointing to the element that now contains the value previously pointed 
		by first.

****************************************************************************/

#ifndef FUNCTION_ROTATE_H
#define FUNCTION_ROTATE_H

void function_rotate()
{
	cout << "\n\n*** FUNCTION rotate...\n";

	// your code here...
	/*vector<int> v = { 1,2,3,4,5,6 };
	printVector(v);
	
	auto iter = v.begin() + 2;

	rotate(v.begin(), iter, v.end());

	printVector(v);*/
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	printVector(v);
	auto iter = v.begin() + 5;
	rotate(v.begin() + 4, iter, v.begin() + 7);
	rotate(v.begin() + 4, iter, v.begin() + 7);

	printVector(v);
}

#endif