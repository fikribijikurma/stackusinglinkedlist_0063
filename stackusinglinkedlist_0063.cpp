#include <iostream>
using namespace std;

// Node class reperesenting a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

// Stack class
class stack {
private:
	Node* top; // pointer to the node of the stack

public:
	stack() {
		top = NULL; // initialize the stack with a null top pointer
	}

	// push operation: Insert an element onto the top of the stack
	int push(int value) {
		Node* newNode = new Node(); // 1. Allocate memory for the new node
		newNode->data = value; // 2. assign value
		newNode->next = top; // 3. set the next pointer of the new nofde to the current top node
		top = newNode; // 4. Update the top pointer to the new node
		cout << "push value : " << endl;
		return value;

	}

	// pop operation: remove the topmost element from the stack
	void pop() {
		if (top == NULL) {

		}
	}
};