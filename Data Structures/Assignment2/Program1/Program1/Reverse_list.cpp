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
	void insert_end(int data)
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
	void insert_front(int data)
	{
		if(head==NULL)
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
	void insert_after(int x, int data)
	{
		node *ptr = head;
		while (ptr != NULL &&ptr->data != x)
		{
			ptr = ptr->next;
		}
		node *temp = new node;
		temp->data = data;
		temp->next = ptr->next;
                                                                                                                                                                                                                                                      		ptr->next = temp;
	}
	void delete_first()
	{
		node *ptr = head;
		head = head->next;
		delete ptr;
	}
	void delete_end()
	{
		node *ptr = head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		delete ptr;
	}
	void delete_specific(int x)
	{
		node *ptr = head;
		node *temp = head;
		while (ptr!= NULL&&ptr->data != x)
		{
			temp = ptr;
			ptr = ptr->next;
		}
		temp->next = ptr->next;
		delete ptr;
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
	l1.insert_front(10);
	l1.insert_front(20);
	l1.insert_front(30);
	l1.insert_front(40);
	l1.delete_specific(20);
	//l1.insert_after(20, 35);
	cout << "given linked list";
	l1.print();
/*	l1.reverse();
	cout << "reversed linked list";
	l1.print();*/
	getchar();
	getchar();
	return 0;
}