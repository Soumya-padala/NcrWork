#include<iostream>
using namespace std;
class Student
{
	int rollno;
	char name[40];
	int m1, m2, m3;
	int total;
	char grade;
public:
	friend ostream &operator <<(ostream &out, const Student &c);
	friend istream &operator >>(istream &in, Student &c);
	friend void generate_results(Student[], int n);
};
ostream &operator<<(ostream &out, const Student &c)
{
	cout << c.rollno<<"\t"<<c.name<<"\t"<< c.m1<<"\t"<<c.m2<<"\t"<<c.m3<<"\t"<<c.total<<"\t"<<c.grade<<endl;
	return cout;
}
istream &operator >> (istream &in, Student &c)
{
	cout << "enter roll no is :";
	in >> c.rollno;
	cout << "enter name is :";
	in >> c.name;
	cout << "enter marks are:";
	in >> c.m1;
	in >> c.m2;
	in >> c.m3;
	return in;
}
void generate_results(Student s[], int n)
{
	int i,avg;
	for (i = 0; i < n; i++)
	{

		s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
		avg = s[i].total / 3;
		if (avg > 60)
			s[i].grade= 'A';
		else if (50 < avg && 60 > avg)
		{
			s[i].grade = 'B';
		}
		else if (40 < avg && 50 > avg)
		{
			s[i].grade = 'C';
		}

		else
		{
			s[i].grade = 'F';
		}
	}

}
int main()
{
	int i, n;
	cout << "enter number of students";
	cin >> n;
	Student *s = new Student[n];
	for (i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	generate_results(s, n);
	cout << "Rollno \t name \t m1 \t m2 \t m3 \t total \t grade"<<endl;
	for (i = 0; i < n; i++)
	{
		cout << s[i];
	}
	getchar();
	getchar();
	return 0;
}