#include<stdio.h>
void main()
{
    int a,b,c;
    char op;
    printf("enter the expression:");
    scanf("%d%c%d", &a, &op, &b);
    switch(op)
    {
        case '+':
         c=a+b;
         printf("%d",c);
         break;
        case '-':
         c=a-b;
         printf("%d",c);
         break;
        case '*':
         c=a*b;
         printf("%d",c);
         break;
        case '/':
         c=a/b;
         printf("%d",c);
         break;
         default:
         printf("Wrong Data");
    }
}
    
    
