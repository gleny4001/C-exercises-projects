/*
	Nguyen, Josh
	Yang, Glen
​
	November 10, 2019
​
	CS A250
	Lab 10
*/

#include "HotDogStand.h"

using namespace std;

int HotDogStand::storedHotDogs = 4000;
int HotDogStand::totalHotDogsSale = 0;


HotDogStand::HotDogStand()
{
	numOfHotDogsSale = 0;
	ID = 0;
	itNum = 0;
	
}

HotDogStand::HotDogStand(const int& newID, const int& newitNum)
{
	ID = newID;
	itNum = newitNum;
	numOfHotDogsSale = 0;
}

void HotDogStand::setID(const int& newID)
{
	ID = newID;
}

void HotDogStand::setStandStart(const int& newitNum)
{
	itNum = newitNum;
}

int HotDogStand::getID() const
{
	return ID;
}

int HotDogStand::getStandSales() const
{
	return numOfHotDogsSale;
}

void HotDogStand::justSold()
{
	++numOfHotDogsSale;
	++totalHotDogsSale;
	--itNum;
	--storedHotDogs;
}

int HotDogStand::getInventory()
{
	return storedHotDogs;
}

int HotDogStand::getAllSales()
{
	return totalHotDogsSale;
}

HotDogStand::~HotDogStand()
{
}