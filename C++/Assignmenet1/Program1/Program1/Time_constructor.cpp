#include<iostream>
using namespace std;
class time
{
	int hrs, minuts, secs;
public:
	time()
	{
		hrs = minuts = secs = 0;
	}
	time(int h,int m,int s)
	{
		hrs = h;
		minuts = m;
		secs = s;
	}
	time add(time t1, time t2)
	{
		time t3;
		t3.hrs = t1.hrs + t2.hrs;
		t3.minuts = t1.minuts + t2.minuts;
		t3.secs = t1.secs + t2.secs;
		if (t3.secs > 60)
		{
			t3.minuts = t3.minuts+1;
			t3.secs = t3.secs - 60;
		}
		if (t3.minuts > 60)
		{
			t3.hrs = t3.hrs + 1;
			t3.minuts = t3.minuts - 60;
		}
		if (t3.hrs > 24)
			t3.hrs = t3.hrs - 24;

		return t3;
	}
	void display()
	{
		cout << hrs << ":" << minuts << ":" << ":" << secs;
	}
};
int main()
{
	time t1(2, 23, 34), t2(1, 23, 12);
	time t3;
	t3=t3.add(t1,t2);
	t3.display();
	getchar();
	getchar();
	return 0;

}