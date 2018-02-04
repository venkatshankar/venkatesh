#include<stdio.h>
void main()
{
    int a=10;
    int *x=&a;
    int **y=&x;
    printf("%d\n",a);
    printf("%d\n",x);
    printf("%d\n",*x);
    printf("%d\n",y);
    printf("%d\n",*y);
    printf("%d\n",**y);
}
