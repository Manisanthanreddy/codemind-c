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
	int even_sum=0;
	for(i=0;i<a;i++)
	{
	  if(arr[i]%2==0)
	  {
	  	even_sum=even_sum+arr[i];
	  }
	}
	printf("%d",even_sum);
}