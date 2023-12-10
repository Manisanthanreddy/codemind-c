#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=(a%3600);
    printf("H:M:S-%d:%d:%d",a/3600,b/60,b%60);
}