#include<stdio.h>
void main()
{
    int i,count=0;
    printf("enter the value of n:");
    scanf("%d",&i);
    while(i!=0)
    {
        i/=10;
        ++count;
    }
    printf("count=%d",count);
}
