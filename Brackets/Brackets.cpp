#include <iostream>
#include "Stack.h"

using namespace std;

bool isBracketsRight(string str)
{
	auto st = new Stack();
	st->clear();
	for (auto ch : str) {
		// cout << ch; отладка
		if (ch == '(' || ch == '[' || ch == '{')
			st->push(ch);
		else if (st->isEmpty())
			return false;
		else if (ch == ')' && st->peek() == '(' || ch == ']' && st->peek() == '[' || ch == '}' && st->peek() == '{')
			st->pop();
		else
			return false;
	}
	return st->isEmpty();
}

int main()
{
	string str1 = "{([])}{[}]";
	cout << isBracketsRight(str1) << "\n";
	string str2 = "{}";
	cout << isBracketsRight(str2) << "\n";
	string str3 = "}{}{}";
	cout << isBracketsRight(str3) << "\n";
	string str4 = "";
	cout << isBracketsRight(str4) << "\n";
	string str5 = "(((((((((((((((((((";
	cout << isBracketsRight(str5) << "\n";
}

