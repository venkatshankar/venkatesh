#include<stdio.h>
void main()
{
    int i,a,b;
    printf("enter the intervals:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;++i)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}
