#include<iostream>
using namespace std;
class Polar
{
	float angle;
	float radius;
public:
	static int active_count;
	Polar()
	{
		angle = radius = 0;
	}
	Polar(float x,float y)
	{
		angle = x;
		radius = y;
		active_count++;
	}
	/*void getdata()
	{
		cout << "enter angle,radius";
		cin >> angle >> radius;
	}*/
};
int Polar::active_count=0;
int main()
{
	Polar p1(3.14,2.2), p2(3.14,3.3);
	//p1.getdata();
	//getchar();
	//p2.getdata();
	cout << "no of active objects are:"<< Polar::active_count;
	getchar();
	getchar();
	return 0;
}