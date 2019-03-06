#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void reverse(char *s1,char *s2)
{
	int length = strlen(s1);
	int i = 0,j=0;
	for (i = (length - 1); i >= 0; i--)
	{
		*(s2 + j) = *(s1 + i);
		j++;
	}
	*(s2+j)= '\0';
}
void str_copy(char *s1, char *s2)
{
	int i = 0, j = 0;
	while (*(s1+i)!='\0')
	{
		*(s2 + j) = *(s1 + i);
		i++;
		j++;
	}
	*(s2 + j) = '\0';
}
void str_cat(char *s1, char *s2)
{
	int length = strlen(s2);
	int l = strlen(s1);
	int i = 0;
	s1 = (char*)realloc(s1, 40);
	while (*(s2 + i) != '\0')
	{
		*(s1+l) = *(s2 + i);
		l++;
		i++;
	}
	*(s1 + l) = '\0';
}
void concat(char *s1, char *s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int i=0;
	if (l1>l2)
		printf("cannot compare as string1 greater than string2");
	else if(l1<l2)
		printf("cannot compare as string2 greater than string1");
	else
	{
		while (*(s1 + i) != '\0')
		{
			if (*(s1 + i) == *(s2 + i))
				i++;
			else
			{
				printf("two strings are of same length but not equal");
				return;
			}
		}
		printf("%s and %s :strings are equal", s1, s2);
	}
}
int main()
{
	char *string1 = (char*)malloc(40);
	char *string2 = (char*)malloc(40);
	int choice = 0,i=1;
	while (i)
	{
		printf("enter 1.reverse 2.copy 3.concatnate 4.comparison \n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:printf("enter string to be reversed :\n");
				scanf_s("%9s", string1, 40);
				reverse(string1, string2);
				printf("reversed string :%s ", string2);
				break;
		case 2:printf("enter string to be copied :\n");
			    scanf_s("%9s", string1, 40);
				str_copy(string1, string2);
				printf("\n copied string :%s", string2);
				break;
		case 3:printf("enter first string :\n");
			    scanf_s("%9s", string1, 40);
				printf("enter second string :\n");
				scanf_s("%9s", string2, 40);
				str_cat(string1,string2);
				printf("\n concatnated string :%s", string1);
				break;
		case 4:printf("enter first string :\n");
			   scanf_s("%9s", string1, 40);
			   printf("enter second string :\n");
			   scanf_s("%9s", string2, 40);
			   concat(string1, string2);
			   break;
		default:printf("enter values from 1 to 4");
		}
		printf("\n press 1 to continue.... zero to terminate :");
		scanf_s("%d", &i);
		if (i == 0)
			return 0;
	}
	free(string1);
	free(string2);
	getchar();
	getchar();
	return 0;
}