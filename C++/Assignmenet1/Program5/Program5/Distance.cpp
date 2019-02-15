#include<iostream>
using namespace std;
class Distance2;
class Distance1
{
	int mts;
	int cms;
public:
	void getdata()
	{
		cout << "enter distance in mts and cms";
		cin >> mts;
		cin >> cms;
	}
	friend void add(Distance1 d1, Distance2 d2);
};
class Distance2
{
	int feets;
	int inches;
public:
	void get_data()
	{
		cout << "enter distance in feets and inches";
		cin >> feets;
		cin >> inches;
	}
	friend void add(Distance1 d1, Distance2 d2);
};
void add(Distance1 d1, Distance2 d2)
{
	int m_c, i_c, f_c;
	i_c = d2.inches*0.24;
	f_c = d2.feets*0.30;
	m_c = d1.mts * 100;
	int  ans, m, c, f, in;
	ans = (d1.cms + m_c) + (i_c + f_c);
	m = ans / 100;
	c = ans % 100;
	cout << "\n ------------------------------------------------------------------";
	cout << "\n Sum in Meters & Centimeters         =  " << m << " mtrs & " << c << " cms";
	f = m / 0.30;
	in = c / 2.54;
	cout << "\n Sum in Feets & Inches               =  " << f << " feets & " << in << " inches \n";
}
int main()
{
	Distance1 d1;
	Distance2 d2;
	d1.getdata();
	d2.get_data();
	add(d1, d2);
	getchar();
	getchar();
	return 0;
}