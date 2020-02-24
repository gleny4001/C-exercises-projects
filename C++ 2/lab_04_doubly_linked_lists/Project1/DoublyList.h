#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>

class Node
{
public:
	Node() : data(0), prev(nullptr), next(nullptr) {}
	Node(int newData, Node *newPrev, Node *newNext)
		: data(newData), prev(newPrev), next(newNext) {}
	int getData() const { return data; }
	Node *getPrev() const { return prev; }
	Node *getNext() const { return next; }
	void setData(int newData) { data = newData; }
	void setPrev(Node *newPrev) { prev = newPrev; }
	void setNext(Node *newNext) { next = newNext; }
	~Node() {}
private:
	int data;
	Node *prev;
	Node *next;
};


class DoublyList
{
public:
	DoublyList(); 
		
	void insertBack(int newData);
	
	bool isEmpty() const;

	void destroyList();
	~DoublyList();	

	/********************************************************
		Functions to implement
	*********************************************************/

	// Declaration function print

	void print() const;
	// Declaration function reversePrint

	void reversePrint() const;
	// Declaration function front
	int front() const;

	// Declaration function back
	int back() const;

	// Declaration function transferList
	void transferList(DoublyList&);

private:
    Node *first;	// pointer to the first node on the list
    Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

#endif