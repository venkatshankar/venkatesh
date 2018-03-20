#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int n,i;
    printf("enter the string:");
    scanf("%s",&s);
    printf("enter the no times to be print:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s\n",s);
    }
}
