#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>
#include <vector>

class Node
{
public:
    Node () : data(0), prev(nullptr), next(nullptr) {}
    Node (int theData, Node *previous, Node *next)
            : data(theData), prev(previous), next(next) {}
    int getData() const { return data; }
	Node *getPrev() const { return prev; }
	Node *getNext() const { return next; }    
    void setData(int theData) { data = theData; }
    void setPrev(Node *pointer) { prev = pointer; }
	void setNext(Node *pointer) { next = pointer; }    
	~Node(){}
private:
    int data;
    Node *prev;
	Node *next;    
};

class DoublyList
{
	friend std::ostream& operator<<(std::ostream&, const DoublyList&);
public:
	DoublyList(); 
	
	void insertBack(int);
	void addElements(const std::vector<int>&);

	bool empty() const;

	void destroyList();

	~DoublyList();

protected:
    Node *first;	
    Node *last;		
	int count;		
};

#endif