#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	int empno;
	char name[20];
	int salary;
public:
	Employee()
	{
	}
	/*ployee(int x, char *c, int s)
	{
		empno = x;
		strcpy(name,c);
		salary = s;
	}*/
	friend istream &operator >> (istream &in, Employee e);
	friend ostream &operator <<(ostream &out, Employee e);
};
istream &operator >> (istream &in, Employee e)
{
	cout << "enter emp number"<<endl;
	in >> e.empno;
	cout << "enter emp name" << endl;
	in >> e.name;
	cout << "enter emp salary" << endl;
	in >> e.salary;
	return in;
}
ostream &operator <<(ostream &out, Employee e)
{
	cout << "emp.no" << e.empno;
	cout << "emp.name" << e.name;
	cout << e.salary << endl;
	return out;
	
}
int main()
{
	int i;
	Employee *e = new Employee[2];
	for (i = 0; i < 2;i++)
		cin >> e[i];
	for (i = 0; i < 2;i++)
		cout << e[i];
	getchar();
	getchar();
	return 0;
}