#include<stdio.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se,flag=0;
	scanf("%d",&se);
	for(i=0;i<a;i++)
	{
		if (arr[i]==se)
		{
			flag=1;
			break;
		}
	}
	if (flag==0) printf("False");
	else printf("True");
}