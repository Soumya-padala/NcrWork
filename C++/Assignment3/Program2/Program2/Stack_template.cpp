#include<iostream>
using namespace std;
class complex;
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
	T pop()
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
	}
	T peek()
	{
		if (isempty())
			throw "cant find";
		else
			return stk[top];
	}
	void display()
	{
		for (int i = 0; i < top + 1; i++)
			cout << " " << stk[i];
		cout << endl;
	}

};

class complex {
	float real;
	float img;
public:
	complex(float a, float b) {
		real = a;
		class complex;
		img = b;
	}
	complex() {
		real = 0;
		img = 0;
	}
	friend ostream & operator<<(ostream &out, complex &c);
};
ostream & operator<<(ostream &out, complex &c)
{
	out << c.real << "+i" << c.img << endl;
	return out;
}





int main()
{
	try
	{
		
		
		stack<char>a;
		char k, ele;
		int ch;
		cout << "Enter an operation to perform:\n1.Push\n2.Pop\n3.Display\n";
		cin >> ch;
		while (ch <= 3 && ch != 0)
		{
			switch (ch)
			{
			case 1:cout << "Enter an element:";
				cin >> ele;
				a.push(ele);
				break;
			case 2: k = a.pop();
				cout << "Deleted element is:" << k;
				break;
			case 3: a.display();
				break;
			}
			cout << "Enter an operation:";
			cin >> ch;
		}

		stack<complex>c;
		complex c1(1, 2), c2(2, 3), c3(4, 5), c4(6, 7), c5, c6, c7;
		c.push(c1);
		c.push(c2);
		c.push(c3);
		c.push(c4);
		//c.push(c5);
		c6=c.pop();
		cout << c6;

	}
	catch (const char *msg)
	{
		cout << msg;
	}
	getchar();
	getchar();
}