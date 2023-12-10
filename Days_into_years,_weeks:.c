#include<stdio.h>
int main()
{
    int h,years,weeks;
    scanf("%d",&h);
    years=h/365;
    weeks=(h%365)/7;
    printf("%d
%d",years,weeks);
}