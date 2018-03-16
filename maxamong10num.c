#include<stdio.h>
void main()
{
    int a[50],t,i;
    printf("enter the values:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }t=a[1];
    for(i=0;i<10;i++)
    {
        if(t<a[i])
        {
            t=a[i];
        }
    }
    printf("%d",t);
}
