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
    float sum=0;
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("%.2f",sum/a);
}