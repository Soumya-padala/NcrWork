#include<iostream>
using namespace std;
struct node
{
	int data;
	node *prev;
	node *next;

};
class ll
{

public:
	node *head, *start;
	ll()
	{
		head = NULL;
	}
	void insert_end(int data)
	{

		if (head == NULL)
		{
			head = new node;
			head->data = data;
			head->next = NULL;

		}
		else
		{
			node *ptr = head;
			node *temp = new node;
			temp->data = data;
			temp->next = NULL;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}

	}
	void insert_front(int data)
	{
		if (head == NULL)
		{
			head = new node;
			head->data = data;
			head->next = NULL;
		}
		else

		{
			node *ptr;
			ptr = new node;
			ptr->data = data;
			ptr->next = head;
			head = ptr;
		}
	}
	void move_front(int data)
	{
		node *ptr = head;
		node *temp = head;
		while (ptr != NULL&&ptr->data!=data)
		{
			temp = ptr;
			ptr = ptr->next;
		}
	insert_front(ptr->data);
	temp->next = ptr->next;
	delete ptr;
	}
	void print()
	{
		node *ptr = head;
		while (ptr != NULL)
		{
			cout << ptr->data << endl;
			ptr = ptr->next;
		}
	}
};
int main()
{
	ll l1;
	l1.insert_end(10);
	l1.insert_end(20);
	l1.insert_end(30);
	l1.insert_end(40);
	l1.move_front(50);
	//l1.insert_after(20, 35);
	cout << "given linked list";
	l1.print();
	getchar();
	getchar();
	return 0;
}