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
		salary = 0;
	}
	Employee(int x, char *c, int s)
	{
		empno = x;
		strcpy(name,c);
		salary = s;
	}
	friend istream &operator >> (istream &in, Employee e);
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
int main()
{
	int i;
	Employee *e = new Employee[5];
	for (i = 0; i < 5; i++)
		cin >> e[i];
	getchar();
	getchar();
	return 0;
}