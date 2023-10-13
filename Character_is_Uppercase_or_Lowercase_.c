#include<stdio.h>
int main()
{
	char ch;
	scanf("%ch",&ch);
	if (ch>=65&&ch<=90)
	{
		printf("uppercase alphabet");
	}
	else if(ch>=97&&ch<=122)
	{
		printf("lowercase alphabet");
	}
	else
	{
	    printf("not an alphabet");
	}
	}