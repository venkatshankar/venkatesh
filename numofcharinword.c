#include<stdio.h>
#include<string.h>
void main()
{
    char s[10],i,c=0;
    printf("enter the character:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>'A' && s[i]<'z');
        {
            c++;
        }
    }
    printf("%d",c);
}
