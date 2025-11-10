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
	if (isEmpty())
		return;
	while (!isEmpty())
		pop();
}

bool Stack::isBracketsRight(string str)
{
	for (auto ch : str) {
		// cout << ch; отладка
		if (ch == '(' || ch == '[' || ch == '{')
			push(ch);
		else if (isEmpty())
			return false;
		else if (ch == ')' && top->data == '(' || ch == ']' && top->data == '[' || ch == '}' && top->data == '{')
			pop();
		else
			return false;
	}
	return isEmpty();
}
