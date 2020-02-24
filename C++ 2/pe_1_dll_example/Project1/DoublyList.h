#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
#include <vector>

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
	friend std::ostream& operator<<(std::ostream&, const DoublyList&);

public:
	DoublyList(); 
		
	void insert(const std::vector<int>&);


	void insertNode(int elem);

	void RearrangeList();

	void DeleteFirstNode();

	void SwapNodesFL(DoublyList);

	void SwapNodes(int);

	bool SearchNode(int elem) const;

	void destroyList();
	~DoublyList();	

	// Your declarations here...
	void rotateLeft();

private:
    Node *first;	
    Node *last;		
	int count;
};

#endif