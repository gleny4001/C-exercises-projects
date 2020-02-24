#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
#include <vector>

const int CAP = 50;

class DArray
{
	friend std::ostream& operator<<(std::ostream&, const DArray&);
public:
    DArray();
    DArray(int);

    void addElement(int);
	void addElements(const std::vector<int>&);

	int getNumOfElem() const;
	bool empty() const;
	
	~DArray(); 

protected:
    int *a;					
    int capacity;			
    int numOfElem;		

};

#endif