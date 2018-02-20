#include<stdio.h>
void main()
{
    int a,b,i,t,r,n;
    printf("enter the intervals:");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        t=i;
        n=0;
        while(t!=0)
        {
            r=(t%10);
            n+=r*r*r;
            t/=10;
        }
        if(i==n)
        {
            printf("%d\n",i);
        }
    }
}
