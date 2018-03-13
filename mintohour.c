#include<stdio.h>
void main()
{
    int m,h;
    printf("enter the minute:");
    scanf("%d",&m);
    h=m/60;
    m=m%60;
    printf("%d %d",h,m);
}
