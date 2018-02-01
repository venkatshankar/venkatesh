#include<stdio.h>
void main()
{
    int a;
    printf("enter the year:");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("%d is the leap year",a);
    }
    else
    {
        printf("%d is not the leap year",a);
    }
}
