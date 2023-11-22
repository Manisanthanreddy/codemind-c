#include<stdio.h>
int main ()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(n<=(a*1)+(b*2))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}