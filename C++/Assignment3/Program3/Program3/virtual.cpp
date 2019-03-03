#include<iostream>
using namespace std;
class shape
{
	int dimension;
public:
	
	virtual void area()
	{
		cout << dimension*dimension;
	}
};
class triangle :public shape
{
	int base, height;
public:
	triangle()
	{
		cout << "enter base and height";
		cin >> base;
		cin >>height;
	}
	void area()
	{
		int x = (base*height) / 2;
		cout << "area of traingle:" << x;
	}
};
class rectangle :public shape
{
	int length,breadth;
public:
	rectangle()
	{
		cout << "enter  length and  breadth ";
		cin >> length;
		cin >> breadth;
	}
	void area()
	{
		int x = length*breadth;
		cout << "area of rectangle:" << x;
	}
};
class square :public shape
{
	int side;
public:
	square()
	{
		cout << "enter side";
		cin >> side;
	}
	void area()
	{
		int x = side*side;
		cout << "area of square:" << x;
	}
};
int main()
{
	shape *s;
	triangle t;
	s = &t;
	s->area();
	rectangle r;
	s = &r;
	s->area();
	square q;
	s = &t;
	s->area();

	getchar();
	getchar();
	return 0;
}

