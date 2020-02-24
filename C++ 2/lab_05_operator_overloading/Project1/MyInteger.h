#ifndef MYINTEGER_H
#define MYINTEGER_H

#include <iostream>
#include <cstdlib>
#include <cmath>

class MyInteger
{
public:
	// Declarations
	MyInteger();

	MyInteger(int);

	void setInt(int);

	int getInt() const;

	int operator[](int idx) const;

	int intLength() const;

	~MyInteger();

private:
	int num;
};

#endif