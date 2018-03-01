#include<stdio.h>
void main()
{
    int i,a[5],n,min,j;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
        if(a[i]>a[j])
        {
        min=a[i];
        a[i]=a[j];
        a[j]=min;
        }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
}
