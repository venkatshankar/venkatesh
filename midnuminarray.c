#include<stdio.h>
void main()
{
    int i,a[5],n,m=0,k;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }  
    for(i=1;i<=n;i++)
    {
        m+=a[i];
    }
    k=m/n;
    printf("%d",k);
}
