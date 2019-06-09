#include<string>
#include <iostream> 
#include<stack>
using namespace std;
bool areParanthesisBalanced(string);
int evaluate(string s);
int main()
{
	string str1;
	cout << "enter string";
	cin>>str1;
	if (areParanthesisBalanced(str1))
	{
		cout << "Result is : " << evaluate(str1) << "\n";
	}
	else
	{
		cout << "\nInvalid Expression" << endl;
		system("pause");
		return 0;
	}
	
	//cout << evaluate(str1);
	getchar();
	getchar();
	return 0;
}
