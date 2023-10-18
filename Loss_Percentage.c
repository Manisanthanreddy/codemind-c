#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int p=x-y;
    float pp=p/(x*1.0)*100;
    printf("%.2f",pp);
}