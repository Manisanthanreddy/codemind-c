#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=0.5*(a+b)*c;
    printf("%.4lf",d);
}