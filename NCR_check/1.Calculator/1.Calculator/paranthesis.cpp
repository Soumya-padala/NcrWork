#include<string>
#include<stack>
#include<iostream>
using namespace std;
extern bool areParanthesisBalanced(string expr)
{
	stack<char> s;
	char x;

	// evaluating expression
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			s.push(expr[i]);
			continue;
		}
		switch (expr[i])
		{
		case ')':
			if (s.empty())
				return false;
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':
			if (s.empty())
				return false;
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':
			if (s.empty())
				return false;
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}
	//checks empty stack
	return (s.empty());
}
