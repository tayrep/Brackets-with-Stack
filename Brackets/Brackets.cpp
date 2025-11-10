#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	auto st = new Stack();
	string str1 = "{([])}{[}]";
	cout << st->isBracketsRight(str1) << "\n";
	string str2 = "{}";
	cout << st->isBracketsRight(str2) << "\n";
	string str3 = "}{}{}";
	cout << st->isBracketsRight(str3) << "\n";
	string str4 = "";
	cout << st->isBracketsRight(str4) << "\n";
	string str5 = "(((((((((((((((((((";
	cout << st->isBracketsRight(str5) << "\n";
}

