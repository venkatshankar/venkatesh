#include<stdio.h>
void main()
{
    char s[20],s1[15];
    int i,j;
    printf("enter 2 strings:");
    scanf("%s%s",&s,&s1);
   while(s[i]!='\0')
   {
       i++;
   }
   while(s1[j]!='\0')
   {
       s[i]=s1[j];
       i++;
       j++;
   }
   printf("%s",s);
}
