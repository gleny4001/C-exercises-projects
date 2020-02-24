/*
	Nguyen, Josh
	Yang, Glen
	McGinty, Ryan
​
	November 1, 2019
​
	CS A250
	Lab 9
*/
#pragma once

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Definition of function difference
int difference(const set<int>& aSet) 
{
	return(*aSet.crbegin() - *aSet.cbegin());

}

// Definition of function multiplesOfTen
void multiplesOfTen(map<int, int>& aMap)
{
	map<int, int>::iterator iter = aMap.begin();
	map<int, int>::const_iterator iterEnd = aMap.cend();
	int num = 0;

	while (iter != iterEnd)
	{
		if (iter->first % 10 == 0)
		{
			num = iter->first;
		}

		else if (iter->first % 10 != 0)
		{
			iter->second = num;
		}

		iter++;
	}
}

// Definition of function afterFive
void afterFive(const multiset<int>& aSet, multiset<int>& bSet)
{
	multiset<int>::const_reverse_iterator iter = aSet.crbegin();
	while (*iter != 5)
	{
		++iter;
	}
	multiset<int>::const_iterator iter1 = iter;
	while (iter1 != aSet.cend())
	{
		++iter;
		bSet.insert(*iter);
	}

}

#endif