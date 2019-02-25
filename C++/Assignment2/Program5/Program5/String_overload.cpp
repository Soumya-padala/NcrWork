#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class String
{
	char *str;
	int len;
public:
	String()
	{
		len = 0;
		str = NULL;
	}
	String(char *s)
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	String(String &s)
	{
		len = strlen(s.str);
		str = new char[(len) + 1];
		strcpy(str, s.str);	
	}
	~String()
	{
	
	}
	String operator+(String s)
	{
		String res;
		res.len = len + s.len;
		res.str = new char[(res.len)+1];
		strcpy(res.str, str);
		strcat(res.str, s.str);
		//return res;
		cout << res;
		return res;
	}
	char operator[](int i)
	{
		return str[i];
	}
	void display()
	{
		cout << "string is:" << str << len << endl;
	}
	friend ostream &operator<<(ostream &cout, String &s);
	friend istream &operator >> (istream &in, String &s);
};
ostream &operator<<(ostream &cout, String &s)
{
	cout << "string is" << s.str<<endl;
	return cout;
}
istream &operator >> (istream &in, String &s)
{
	cout << "enter string";
	in >> s.str;
	return in;
}
int main()
{
	char x[10], y[10];
	cin >> x ;
	cin >> y ;
	String s1(x), s2(y);
	//.display();
	String s3;
	s3 = s1 + s2;
	//.display();
	getchar();
	getchar();
	return 0;
}