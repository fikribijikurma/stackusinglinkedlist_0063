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
		cout << "push value : " << value << endl;
		return value;

	}

	// pop operation: remove the topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty. " << endl;
		}
		cout << "popped value: " << top->data << endl;
		top = top->next; // update the top pointer to the next node

	}

	// peek/Top operation: Retrieve thr value of the topmost element without removing it
	void peek() {
		if (top == NULL) {
			cout << "List is empty. " << endl;
		}
		else {
			Node* current = top;
			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		} // Return the value of the top node
	}

	// isEmpty operation: check if the stack is empty
	bool isEmpty() {

	}
};