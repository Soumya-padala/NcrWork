#include<iostream>
using namespace std;
template<class T>
class queue
{
public:
	int n, size;
	int rear, front;
	T *a;
	queue()
	{
		rear = front = 0;
		cout << "enter size of queue:\n";
		cin >> n;
		a = new T[n];
		size = n;
	}
	void push(int data)
	{
		if (((rear + 1) % size) != front)
		{
			rear = (rear + 1) % size;
			a[rear] = data;
		}
		else
			cout << "queue is full";
	}
	int pop()
	{
		if (front != rear)
		{
			front = (front + 1) % size;
			return a[front];
		}
		else
			cout << "queue is empty";
	}
	int isEmpty()
	{
		if (rear == front)
			return 1;
		else
			return 0;
	}
	int isFull()
	{

		if (rear == size)
			return 1;
		else
			return 0;
	}
	void display()
	{
		for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size)
			cout << " " << a[i];
	}
};
int main()
{
	queue<int>s;
	try
	{
		s.push(5);
		s.push(10);
		s.push(25);
		s.display();
		s.pop();
		s.display();
	}
	catch (const char*msg)
	{
		cout << msg;
	}
	getchar();
	getchar();
	return 0;
}