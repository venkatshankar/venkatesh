#include<stdio.h>
void main()
{
    int n,a=0,b=1,c=0,i;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);
    }
}
