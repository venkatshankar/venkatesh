#include<stdio.h>
void main()
{
    int i,n,k,a[5],s=0;
    printf("enter the value of N and K:");
    scanf("%d\t%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        s+=a[i];
    }
    printf("%d",s);
}
