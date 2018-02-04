#include<stdio.h>
char op;
void main()
{
    int x,y;
    printf("enter the value of x,y:");
    scanf("%d%c%d",&x,&op,&y);
    fun(x,y);
}
int fun(int a,int b)
{
    int c;
    switch(op)
    {
          case'+':
          c=a+b;
          printf("%d",c);
          break;
          case'-':
          c=a-b;
          printf("%d",c);
          break;
          case'*':
          c=a*b;
          printf("%d",c);
          break;
          case'/':
          c=a/b;
          printf("%d",c);
          break;
          default:
          printf("wrond data");
    }
}
