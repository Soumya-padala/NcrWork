#include<iostream>
using namespace std;
struct node
{
	int power;
	float coefficient;
	node *next;
};
class add
{
public:
	node *poly1, *poly2, *poly3;
	add()
	{
		poly1 = poly2 = poly3 = NULL;
	}
	void get_poly(node *poly)
	{
		node *new_ll=NULL,*ptr=NULL;
		poly1 = poly;
		int n,i;
		cout << "enter highest power for the polynomial \n";
		cin >> n;
		cout << "enter 1st polynomial \n";
		for(i=n;i>=0;i--)
		{
			new_ll = new node;
			//cout << "enter the power for poynomial";
			new_ll->power=i;
			cout << "enter coefficient for power"<<i<<":";
			cin >> new_ll->coefficient;
			new_ll->next = NULL;
			if (poly1 == NULL)
				poly1 = new_ll;
			else
				ptr->next = new_ll;
			ptr = new_ll;
		} 
		/*cout << "enter 2nd polynomial \n";
		ptr = NULL;
		for(i=n;i>=0;i--)
		{
			new_ll = new node;
			//cout << "enter the power for poynomial";
			new_ll->power=i;
			cout << "enter coefficient for power"<<i<<":";
			cin >> new_ll->coefficient;
			new_ll->next = NULL;
			if (poly2 == NULL)
				poly2 = new_ll;
			else
				ptr->next = new_ll;
			ptr = new_ll;
			n--;
		}*/


	}
	void display(node *poly)
	{
		node *temp=poly;
		while (temp != NULL)
		{
			cout << temp->coefficient;
			cout << "x^";
			cout << temp->power;
			temp = temp->next;
			if (temp->next != NULL)
				cout << "+";
		}
		/*node *temp1 = poly2;
		while (temp1 != NULL)
		{
			cout << temp1->coefficient;
			cout << temp1->power;
			temp = temp1->next;
			if (temp1->next != NULL)
				cout << "+";
		}*/
	}




};
int main()
{
	

	getchar();
	getchar();
	return 0;
}