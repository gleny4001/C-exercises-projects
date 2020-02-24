#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>		//Need to include for NULL			

class Node
{
public:
	Node() : data(0), ptrToNext(nullptr) {}
	Node(int theData, Node *newPtrToNext) 
		: data(theData), ptrToNext(newPtrToNext){}
	int getData( ) const { return data; }
	Node* getPtrToNext() const { return ptrToNext; }	
    void setData(int theData) { data = theData; }
	void setPtrToNext(Node *newPtrToNext) 
		{ ptrToNext = newPtrToNext; }
	~Node(){}
private:
    int data;		
    Node *ptrToNext;	//pointer that points to next node
};


class AnyList
{
public:
	AnyList();	

	void insertBack(int newData);

	int getNumberOfElements() const;
	int getFirstElement() const;
	int getLastELement() const;

	void print() const;

	void destroyList();
	~AnyList();


	/*********************************************************/
	// Your code here...

	// Declaration function getMin
	int getMin() const;

	// Declaration function haveThree
	bool haveThree() const;

	// Declaration function preFour
	void preFour(const AnyList& List);

private:
	Node *ptrToFirst; //pointer to point to the first node in the list
	int count;	      //keeps track of number of nodes in the list
};

#endif