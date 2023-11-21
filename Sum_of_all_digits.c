#include<stdio.h>
int main()
{
    int i,n,ds=0;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        ds+=i;
        n=n/10;
    }
    printf("%d",ds);
}