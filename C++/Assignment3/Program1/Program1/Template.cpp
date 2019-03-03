#include<iostream>
using namespace std;
class complex
{
	float real, img;
	complex()
	{
		real = img = 0;
	}
	complex(float x,float y)
	{
		real=img = x;
	}
};

template<class T,class T1=int>
int lsearch(T *a,T ele,T1 n)
{
	int i = 0;
		for (i = 0; i < n; i++)
		{
			if (a[i] == ele)
				return i;
		}
		if (i == n)
			throw "element not found";

}
template<> //explicit template specialization
int lsearch(char *a, char ele, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == ele)
			return i;
	}
	if (i == n)
		throw "char not found";

}

int main()
{
	int ch,n,p=1;
	int index;
	
	try
	{
		while(p)
		{
		cout << "1.to enter int\n 2.to enter float \n 3.to enter char\n";
		cin >> ch;
		switch (ch)
		{
		case 1:cout << "no of elements to be entered";
			cin >> n;
			int *arr, key;
			arr = new int[n];
			cout << "enter" << n << "elements";
			for (int i = 0; i < n; i++)
				cin >> arr[i];
			cout << "enter the element to be searched";
			cin >> key;
			index = lsearch<int,int>(arr, key, n);
			cout << "element found at" << index;
			delete[] arr;
			break;
		case 2:cout << "no of elements to be entered";
			cin >> n;
			float *arr1, key1;
			arr1 = new float[n];
			cout << "enter" << n << "elements";
			for (int i = 0; i < n; i++)
				cin >> arr1[i];
			cout << "enter the element to be searched";
			cin >> key1;
			index = lsearch<float>(arr1, key1, n);    //default template arguments
			cout << "element :found at" << index;
			delete[] arr1;
			break;
		case 3:cout << "no of elements to be entered";
			cin >> n;
			char *arr2, key2;
			arr2 = new char[n];
			cout << "enter" << n << "elements";
			for (int i = 0; i < n; i++)
				cin >> arr2[i];
			cout << "enter the element to be searched";
			cin >> key2;
			index = lsearch<char>(arr2, key2, n);
			cout << "element found at:" << index;
			delete[] arr2;
			break;
		default:cout << "enter correct option :";

		}
		cout << " enter 1 to continue ,0 to stop \n";
		cin >> p;
		if (p == 0)
			return;
		}


	}
	catch (const char*msg)
	{
		cout << msg;
	}

	getchar();
	getchar();
	return 0;
}
