#include<stdio.h>
void main()
{
    int hr1,hr2,min1,min2,hr,min;
    printf("enter the times:\n");
    scanf("%d%d\n%d%d",&hr1,&min1,&hr2,&min2);
    hr=hr1-hr2;
    min=min1-min2;
    printf("%d %d",hr,min);
}
