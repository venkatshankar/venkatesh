#include<stdio.h>
void main()
{
    int n,a,b,i,sum=0,l;
    printf("enter the no of terms:");
    scanf("%d",&n);
    printf("enter the starting num and diff:");
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
            l=(n*b)+a-1;
            sum=((a+l)*n)/2;
    }
    printf("\nsum of AP series:%d",sum);
}
