#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the values:");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("the swapping values are:%d %d",a,b);
}
