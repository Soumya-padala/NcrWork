#include<iostream>
using namespace std;
class Swap
{
	
public:
	int x;
	Swap()
	{
		x = 0;
	}
	Swap(int y)
	{
		x = y;
	}
	void callby_value(Swap s1,Swap s2)
	{
		int temp;
		temp = s1.x;
		s1.x = s2.x;
		s2.x = temp;
		cout << "\nswapped values: " << s1.x << "\t" << s2.x;
	}
	void callby_reference(Swap &s1, Swap &s2)
	{
		int temp;
		temp = s1.x;
		s1.x = s2.x;
		s2.x = temp;
		cout << "\nswapped values: " << s1.x << "\t" << s2.x;
		
	}
	
};
int main()
{
	
	int a,b,d;
	cout << "enter two numbers";
	cin >> a >> b;
	Swap s1(a), s2(b), s3;
	cout << "enter choice 1)call by value 2)call by refernce";
	cin >> d;
	switch (d)
	{
	case 1:cout << "\nCALL BY VALUE";
		  cout << "\nvalues before swap " << a << "\t" << b;
		  s3.callby_value(s1, s2);
		  cout << "\nvalues after swap outside function" << s1.x << "\t" << s2.x;
		break;
	case 2:cout << "\nCALL BY REFERENCE";
		  cout << "\nvalues before swap " << a << "\t" << b;
		  s3.callby_reference(s1,s2);
		  cout << "\nvalues after swap outside function" << s1.x << "\t" << s2.x;
		break;
	default:cout << "enter correct option";
	}
	getchar();
	getchar();
	return 0;
}