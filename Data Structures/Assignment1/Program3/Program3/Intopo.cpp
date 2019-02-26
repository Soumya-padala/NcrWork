#include<iostream>
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
			throw "not possible as stack is full";


	}
	int pop()
	{
		if (!isempty())
			return stk[top--];
		else
			throw "cant pop as no elements";

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
			throw "cant find";
		else
			return stk[top];
	}
	T topelement()
	{
		return stk[top];
	}
	void intopo(char *in)
	{
		char postfix[50];
		infix<char>s(10);
		s.push('#');
		int j=0;
		for (int i = 0; in[i]; i++)
		{
			if ((in[i] >= 'a'&&in[i] <= 'z') || (in[i] >= 'A'&&in[i] <= 'B'))
				postfix[j++] = in[i];
			else if (in[i] == '(')
				s.push(in[i]);
			else if (in[i] == ')')
			{
				while (s.topelement() != ')')
				{
					postfix[j++] = s.pop();
				}
				s.pop();
			}
			else
			{
				while (precedence(in[i])<=precedence(s.topelement()))
				{
					postfix[j++] = s.pop();
				}
				s.push(in[i]);
			}
			}

		while (s.peek()!='#')
			postfix[j++] = s.pop();
			
		for (int i = 0; i < j; i++)
			cout << postfix[i];
	}
	int precedence(char ch)
	{
		switch (ch)
		{
		case '^':return 5;
			    
		case '*':return 4;
			
		case '/':return 4;
			
		case '+':return 3;
			
		case '-':return 3;
			
		case '#':return 2;
			
		case '(':return 1;
			
		}
	}
	
};
int main()
{
	infix<char> s;
	char infi[50];
	cout << "enter infix expression \n";
	cin >> infi;
	s.intopo(infi);
	getchar();
	getchar();
	return 0;
}