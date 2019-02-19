#include<iostream>
using namespace std;
class Complex
{
	float real;
	float img;
public:
	Complex()
	{
		real = img = 0;
	}
	Complex(float x, float y)
	{
		real = x;
		img = y;
	}
	Complex(const Complex &c2)
	{
		real = c2.real;
		img = c2.img;
	}
	Complex operator+(Complex c)
	{
		Complex res;
		res.real = real + c.real;
		res.img = img + c.img;
		return res;
	}
	Complex operator-(Complex c2)
	{
		Complex res;
		res.real = real - c2.real;
		res.img = img - c2.img;
		return res;

	}
	Complex operator++(void)//prefix
	{
		real++;
		img++;
		return (*this);
	}
	Complex operator++(int)
	{
		Complex res;
		res.real = real++;
		res.img = img++;
		return  res;

	}

	void operator - (void)
	{
		real = -real;
		img = -img;
	}
	void display()
	{
		cout << "result:" << real << "+i" << img<<endl;
	}
	friend ostream &operator<<(ostream &out, Complex &c);
	friend istream &operator>>(istream &in, Complex &c);
	void operator=(Complex &c)
	{
		
		real = c.real;
		img = c.img;
	}
	Complex operator,(Complex c)
	{
		Complex temp;
		temp.real = c.real;
		temp.img = c.img;
		return temp;
	}
};
ostream &operator<<(ostream &out, Complex &c)
{
	cout << "real" << c.real << " " << "img" << c.img << endl;
	return out;
}
istream &operator >> (istream &in, Complex &c)
{
	cout << "enter real and imaginary numbers";
	cin >> c.real >> c.img;
	return in;
}

int main()
{
	Complex c1(2, 3), c2(4, 5);
	Complex c3,c4;
	c3 = c1;
	/*c3 = c1 + c2;
	c3.display();
	c3 = c1 - c2;
	c3.display();
	-c1;
	c3=c1++;*/
	c3.display();
	c4 = c2, c1, c3;
	c4 = (c2, c1, c3);
	c4.display();
	getchar();
	getchar();
	return 0;
}