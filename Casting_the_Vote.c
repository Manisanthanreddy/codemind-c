#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("YES");
    }
    else if(age<18)
    {
        printf("NO");
    }
}