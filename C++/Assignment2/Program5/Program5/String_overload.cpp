#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
class String
{
	char *str;
	int len;
public:
	String()
	{
		str = NULL;
	}
	String(char *s)
	{
		String res;
		res.len = len + s.len;
		res.str=new char[res.len)+1]
		strcpy()