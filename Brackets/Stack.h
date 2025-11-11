#pragma once
#include <iostream>

using namespace std;

class Stack {
	struct Node {
		char data;
		Node* next;

		Node(char _data) : data(_data), next(nullptr) {}
		Node(char _data, Node* _next): data(_data), next(_next) {}
	};

	Node* top;

public:
	Stack();
	Stack(const Stack& other);
	~Stack();

	void push(char elem);
	void pop();
	char peek();

	bool isEmpty();
	void clear();
};