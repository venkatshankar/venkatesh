#include<stdio.h>
void main()
{
    char s[50],i,c;
    printf("enter the character:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='.')
        {
            c++;
        }
    }
    printf("%d",c+1);
}
