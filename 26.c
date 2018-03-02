#include<stdio.h>
void main()
{
    int i,a[5],n,x=0,y;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }  
    for(i=1;i<=n;i++)
    {
        x+=a[i];
    }
    y=x/n;
    printf("%d",y);
}
