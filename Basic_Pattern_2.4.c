#include <stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    
    for(j=a;j>=1;j--)
    {
     for(i=j;i<=a;i++)
    {
			
        printf("%d ",i);
    }
    printf("
");
}
}