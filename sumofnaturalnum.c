#include<stdio.h>
void main()
{
    int a,i,sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;++i)
    {
        sum+=i;
    }
        printf("sum=%d",sum);
}
