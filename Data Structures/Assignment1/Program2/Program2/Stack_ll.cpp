#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class stack_ll
{
public:
	node *top;
	stack_ll()
	{
		top = NULL;
	}
	void push(int data)
	{
			node *temp;
			temp = new node;
			temp->data = data;
			temp->next = top;
			top = temp;
		
	}
	int pop()
	{
		node *temp=NULL;
		if (top == NULL)
			cout << "no elements";
		else
		{
			temp = top;
			top = top->next;
			temp->next = NULL;
			delete temp;
		}
		return top->data;
	}
	int peek()
	{
		if (!isEmpty())
			return top->data;
		else
			cout << "cannot tell";
	}
	int isEmpty()
	{
		return top == NULL;
	}
	void display()
	{
		node *temp = top;
		while (temp != NULL)
		{
			cout << temp->data<<" ";
			temp = temp->next;
		}
	}
};
int main()
{
	stack_ll s;
	/*push(5);
	s.push(15);
	s.push(25);
	s.pop();
	s.display();
	cout << s.peek();*/
	int ele, ch, k,p;
	cout << "Enter an operation to perform :\n 1.Push \n2.Pop \n3.peek \n 4.Display\n";
	cin >> ch;
	while (ch <= 4 && ch != 0)
	{
		switch (ch)
		{
		case 1:cout << "Enter an element:";
			cin >> ele;
			s.push(ele);
			break;
		case 2: k = s.pop();
			cout << "Deleted element is:" << k;
			break;
		case 3:p= s.peek();
			cout << "top element:" << p;
			break;
		case 4:s.display();
			break;
		default:cout << "enter correct option";
		}
		cout << "Enter an operation:";
		cin >> ch;
	}
	getchar();
	getchar();
	return 0;
}
