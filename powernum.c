#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,ans=1;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the power:");
    scanf("%d",&b);
    while(b!=0)
    {
        ans*=a;
        --b;
    }
    printf("answer=%d",ans);
}
