#include<stdio.h>
int main()
{
	int i,j,a;
	scanf("%d",&a);
	for(j=a;j>=1;j--)
	{
		for(i=j;i<=a;i++)
	{
		printf("%c ",64+j);
	}
	printf("
");
}
}