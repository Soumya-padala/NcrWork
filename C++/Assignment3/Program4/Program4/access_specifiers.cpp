#include<iostream>
using namespace std;
class base
{
private:
	int b_private;
public:
	int b_public;
protected:
	int b_protected;//accessible only to the subclass;
};
class derived :public base
{
public:
	derived()
	{
		//b_private;private members of base class cannot be accessed outside other class. 
		b_protected = 5;
		b_public = 10;
		cout << "b_protected:  " << b_protected << "  b_public  " << b_public << endl;
	}
};
class derived1 :protected base {
public:
	derived1() {
		//b_private cannot be accesed
		b_protected = 15;
		b_public = 20;  //it will be a protected member;
		cout << "b_protected:  " << b_protected << "  b_public  " << b_public << endl;
	}
};
class derived3 :private base {
public:
	derived3() {
		b_protected = 25;  //it will be private member;
		b_public = 30;  //it will be private member;
		cout << "b_protected:  " << b_protected << "  b_public  " << b_public << endl;
	}
};
int main()
{
	base b;
	b.b_public = 2;
	//b.b_protected = 5;    inaccessibe;
	cout << "only base class variables accessed in main are:" << b.b_public << endl;
	//private and protected variables cant be accessed in main
	derived d;
	d.b_public = 22;
	//d.b_protected = 5;  inaccessibe;
	cout << "derived public variables accessed are public only" << d.b_public << endl;
	//private and protected of dervived came from base class remain same unacceseed in main
	derived1 d1;
	//deriving using protected makes all protected and cant be accessed in main
	derived3 d2;
	//deriving using private makes all private and cant be accessed in main
	getchar();
	getchar();
	return 0;
}