#include<stdio.h>
#include<string.h>
void main()
{
    char s[10];
    int i,flag=0;
    printf("enter the string:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A') && (s[i]<='z'))
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("string is numeric");
    }
        else
        {
        printf("string is not numeric");
        }
}
