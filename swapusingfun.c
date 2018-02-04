#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the value of a,b:");
    scanf("%d%d",&x,&y);
    fun (x,y);
}
int fun (int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}


