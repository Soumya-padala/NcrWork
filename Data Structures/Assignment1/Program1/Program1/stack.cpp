#include<iostream>
using namespace std;
template<class T>
class stack
{
	int top, size;
	T *stk;
public:
	stack()
	{
		int n;
		cout << "enter size of stack";
		cin >> n;
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
		if (top == (size-1))
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
	int seek()
	{
		if (isempty())
			throw "cant find";
		else
			return stk[top];
	}
	void display()
	{
		for (int i = 0; i < top + 1; i++)
			cout <<" "<< stk[i];
		cout << endl;
	}

};
int main()
{
	stack <int> s;
	try
	{
		s.push(5);
		s.push(10);
		s.push(15);
		s.push(20);
		s.display();
		s.pop();
		s.pop();
		s.display();
	}
	catch (const char *msg)
	{
		cout << msg;
	}
	getchar();
	getchar();
	return 0;
}