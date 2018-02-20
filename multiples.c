#include<stdio.h>
void main()
{
    int a,i,n=5;
    printf("enter the value:");
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        a+=5;
    printf("%d\n",a);
    }
}
