#include<iostream>
using namespace std;
struct node
{
	int data;
	node *prev;
	node *next;

};
class Linkedlist
{
public:
	node *head,*start;
	Linkedlist()
	{
		head = NULL;
	}
	void reverse()
	{
		node *current = head;
		node *prev = NULL, *next = NULL;
		while (current != NULL)
		{
			next = current->next; 
			current->next = prev; 
			prev = current;
			current = next;
		}
		head = prev;
	}
	void push(int data)
	{
		
		if (head == NULL)
		{
			head = new node;
			head->data=data;
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
				ptr= ptr->next;
			}
			ptr->next = temp;
		}
			
	}
	void print()
	{
		node *ptr = head;
		while (ptr != NULL)
		{
			cout << ptr->data<< endl;
			ptr = ptr->next;
		}
	}
	
};


int main()
{
	Linkedlist l1;
	l1.push(10);
	l1.push(20);
	l1.push(30);
	l1.push(40);
	cout << "given linked list";
	l1.print();
	l1.reverse();
	cout << "reversed linked list";
	l1.print();
	getchar();
	getchar();
	return 0;
}