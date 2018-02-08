#include<stdio.h>
void main()
{
    int n,a,b,c=0;
    printf("enter the number");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
     a=n%10;
     c=c*10+a;
     n/=10;
    }
    if(b==c)
    {
        printf("%d is a palindrome",b);
    }
        else
        {
            printf("%d is not a palindrome",b);
        }
    }
    
