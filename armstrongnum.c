#include<stdio.h>
void main()
{
    int a,b,c,d=0;
    printf("enter the number:");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        d+=c*c*c;
        b/=10;
    }
    if(d==a)
    {
    printf("%d is the armstrong number",a);
    }
    else
    {
    printf("%d is not a armstrong number",a);
    }
}
