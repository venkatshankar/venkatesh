#include<stdio.h>
void main()
{
    int r,h;
    printf("enter the value of r and h:");
    scanf("%d%d",&r,&h);
    volume(&r,&h);
}
int volume(int *a,int *b)
{
    float c;
    c=(3.14*(*a)*(*a)*(*b));
    printf("volume=%f",c);
}
