#include<iostream>
#include<ctype.h>
using namespace std;
template<class T>
class infix
{
	int top, size;
	T *stk;
public:
	infix()
	{

	}
	infix(int n)
	{
		stk = new T[n];
		size = n;
		top = -1;
	}
	void push(T x)
	{
		if (!isfull())
			stk[++top] = x;
		else
			cout<<"not possible as stack is full";


	}
	int pop()
	{
		if (!isempty())
			return stk[top--];
		else
			cout<<"cant pop as no elements";

	}
	bool isfull()
	{
		if (top == (size - 1))
			return true;
		else
			return false;
	}
	int isempty()
	{
		return (top == -1);
		/*return true;
		else
		return false;*/
	}
	int peek()
	{
		if (isempty())
			cout << "empty stack";
		else
			return stk[top];
	}
	T topelement()
	{
		return stk[top];
	}
	void post_eval(char *pos)
	{
		infix<int>s(10);
		int a, b, val=0;
		for (int i = 0; pos[i]; i++)
		{
			if (isdigit(pos[i]))
			{
				int val = pos[i] - '0';
				s.push(val);
			}
			else
			{
				a = s.topelement();
				s.pop();
				b = s.topelement();
				s.pop();
				int c = value(a, b, pos[i]);
				s.push(c);
			}
		}
		cout << s.topelement();
	}
	int value(int a, int b, char op)
	{
		switch (op)
		{
		case '*':return b*a;
			break;
		case '/':return b / a;
			break;
		case '+':return b + a;
			break;
		case '-':return b - a;
			break;
		}
	}
};
	int main()
	{
		infix<char> s;
		char postfix[50];
		cout << "enter postfix expression \n";
		cin >> postfix;
		s.post_eval(postfix);
		getchar();
		getchar();
		return 0;
	}