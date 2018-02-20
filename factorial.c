#include<stdio.h>
void main()
{
    int a,i,f=1;
    printf("enter the value:");
    scanf("%d",&a);
    for(i=1;i<=a;++i)
    {
        f*=i;
    }
    printf("factorial value:%d",f);
}
