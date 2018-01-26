#include<stdio.h>
void main()
{
    int unit;
    float amount;
    float total;
    printf("enter the unit=");
    scanf("%d",&unit);
    if(unit<=50)
    {
        amount=unit*0.50;
    }
    else if(unit>50 && unit<=150)
    {
        amount=50*0.5+(unit-50)*0.75;
    }
    else if(unit>150 && unit<=250)
    {
        amount=50*0.5+100*0.75+(unit-150)*1.2;
    }
    else if(unit>250)
    {
    amount=50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
    }
    total=amount*1.2;
    printf("your bill amount=%f",total);
    return 0;

}
