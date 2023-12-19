#include<stdio.h>
#include<math.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int odd_sum=0,even_sum=0;
	for(i=0;i<a;i++)
	{
	  if(i%2==1)
	  {
	  	odd_sum=odd_sum+arr[i];
	  }
	  if(i%2==0)
	  {
	  	even_sum=even_sum+arr[i];
	  }
	}
	printf("%d",abs(odd_sum-even_sum));
}