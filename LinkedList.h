#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
using namespace std;

class L_NODE
{
public:
	char ch = NULL; // data
	double count = 0;
	L_NODE *next = NULL; // pointer to next Node
	L_NODE *left = NULL;
	L_NODE *right = NULL;
};

class List
{
	L_NODE *head;
	int c = 0;

public:
	List(void) { head = NULL; } // constructor
								// retiurn head of list
	L_NODE *getHead()
	{
		return head;
	}
	// to check that the list is empty or not
	bool IsEmpty();
	// insert the new node
	bool Insert(char, double, int);
	// display function of list
	void DisplayList(void);
	// sort the link list (bubble sort)
	void sorting();

	// this function sum of first two node and put in to new node to make tree
	L_NODE *buildTree();
	// this function is used by the build tree to insert the new node which has 2 node left and right
	void InsertTree(L_NODE *T);
};

#endif // !LinkedList_h
