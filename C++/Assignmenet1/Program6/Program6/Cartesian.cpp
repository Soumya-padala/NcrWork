#include<iostream>
#include<cmath>
using namespace std;
class Point
{
public:
	int x,y;
	Point()
	{
		x = 0;
	}
	Point(int a,int b)
	{
		x = a;
		y = b;
	}
	friend void distance(Point s1, Point s2);
};
void distance(Point s1, Point s2)
{
	int x,y;
	x=(s2.x - s1.x)*(s2.x - s1.x);
	y = (s2.y - s1.y)*(s2.y - s1.y);
	long int z = x + y;
	cout<<"distance between two points:"<<sqrt(z);
}
int main()
{
	Point p1(-1, 1), p2(3, 4);
	distance(p1, p2);
	getchar();
	getchar();
	return 0;
}