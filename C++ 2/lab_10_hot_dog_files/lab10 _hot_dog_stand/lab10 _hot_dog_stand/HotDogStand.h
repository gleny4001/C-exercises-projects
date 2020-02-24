/*
	Nguyen, Josh
	Yang, Glen
​
	November 10, 2019
​
	CS A250
	Lab 10
*/

#ifndef HOTDOGSTAND_H
#define HOTDOGSTAND_H

#include <iostream>

class HotDogStand
{
public:
	HotDogStand();

	HotDogStand(const int&,const int&);

	void setID(const int&);

	void setStandStart(const int& newitNum);

	int getID() const;

	int getStandSales() const;

	void justSold();

	static int getInventory();

	static int getAllSales();

	~HotDogStand();

private:
	static int totalHotDogsSale;
	static int storedHotDogs;
	int numOfHotDogsSale;
	int ID;
	int itNum;
	
};



#endif