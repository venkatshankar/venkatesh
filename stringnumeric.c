#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],i,f=0,t;
    printf("enter the string:");
    scanf("%s",&a);
    t=strlen(a);
    for(i=0;i<=t;i++)
    {
    if(a[i]>='0' && a[i]<='9')
    {
        f=0;
    }else
    {
        f=1;
        printf("it's not a numeric");
        break;
    }
    }
    if(f==0)
    {
        printf("it's numeric");
    }
}
