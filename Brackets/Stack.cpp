#include "Stack.h"

Stack::Stack() : top(nullptr) {}

Stack::Stack(const Stack& other): Stack()
{
	*this = other;
}

Stack::~Stack()
{
	clear();
}

void Stack::push(char elem)
{
	auto newTop = new Node(elem, top);
	top = newTop;
}

void Stack::pop()
{
	if (isEmpty())
		return;
	auto oldTop = top;
	top = top->next;
	delete oldTop;
}

char Stack::peek()
{
	return !isEmpty() ? top->data : throw exception("stack is empty");
}

bool Stack::isEmpty()
{
	return !top;
}

void Stack::clear()
{
	while (!isEmpty())
		pop();
}