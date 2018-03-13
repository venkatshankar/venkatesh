#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    printf("%d\t%d\n",a[i],i);
    }
}
