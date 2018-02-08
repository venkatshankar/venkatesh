#include<stdio.h>
void main()
{
    int a,i,c=0;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=2;i<=a/2;++i)
    {
        if(a%i==0)
        {
            c=1;
            break;
        }
    }
        if(c==0)
        {
            printf("%d is a prime number",a);
        }
        else
        {
         printf("%d is not a prime number",a);   
        }
}
