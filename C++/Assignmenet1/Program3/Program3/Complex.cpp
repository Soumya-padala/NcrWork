#include<iostream>
using namespace std;
class Complex
{
	int real;
	int img;
public:
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(int x)
	{
		real = x;
		img = x;
	}
	Complex(int x, int y)
	{
		real = x;
		img = y;
	}
	void display_complex()
	{
		cout << "\n" << real << "+i" << img << endl;
	}
	friend Complex add(Complex &, Complex &);
	friend Complex mul(Complex &, Complex &);
};
	Complex add(Complex &c1, Complex &c2)
	{
		Complex temp;
		temp.real = c1.real + c2.real;
		temp.img = c1.img + c2.img;
		return temp;
	}
	Complex mul(Complex &c1, Complex &c2)
	{
		Complex temp;
		temp.real = c1.real*c2.real - c1.img*c2.img;
		temp.img = c1.real*c2.img + c1.img*c2.real;
		return temp;
	}
	

int main()
{
	Complex c1(4, 3), c2(3, 2);
	Complex c3,c4;
	c3 = add(c1, c2);
	c3.display_complex();
	c4 = mul(c1, c2);
	c4.display_complex();
	getchar();
	getchar();
	return 0;
}