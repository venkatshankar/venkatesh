#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s1[20];
    int i,j,f=0;
    printf("enter 2 strings:\n");
    scanf("%s%s",&s,&s1);
    for(i=0;i!='\0';i++)
    {
        for(j=0;j!='\0';i++)
        {
            if(s[i]==s1[j])
            {
                f=0;
            }else
            {
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("%s",s1);
    }else
    {
        printf("%s",s);
    }
}
