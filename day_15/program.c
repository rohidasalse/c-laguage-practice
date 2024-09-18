// DOMESTIC SLAB SYSTEM

// UNITS     UNIT PRICE
// 1-50        1.45
// 51-100      2.8
// 101-200     3.05
// 201-300     4.75
// 301-500     6
// >500        6.25
#include<stdio.h>
int main()
{
    int units,last_pay,current_pay;
    float bill;
    char name[20];
    printf("Enter yout name:");
    scanf("%[^\n]s",name);
    a:
    printf("enter the previous pay units bill :");
    scanf("%d",&last_pay);
    printf("enter the current pay units bill :");
    scanf("%d",&current_pay);
    printf("Name : %s",name);
    units=current_pay-last_pay;
    if(units<0){
        printf("\nenter valid details :");
        goto a;
    }
    printf("\n units : %d",units);
    if(units<=50)
    {
        bill=units*1.45;
        printf(" Bill is :%.2f",bill);
    }
     else if(units<=100)
    {
        bill=50*1.45+(units-50)*2.8;
        printf(" Bill is :%.2f",bill);
    }
      else if(units<=200)
    {
        bill=50*1.45+50*2.8+(units-100)*3.05;
        printf(" Bill is :%.2f",bill);
    }
         else if(units<=300)
    {
        bill=50*1.45+50*2.8+100*3.05+(units-200)*4.75;
        printf(" Bill is :%.2f",bill);
    }
      else if(units<=500)
    {
        bill=50*1.45+50*2.8+100*3.05+100*4.75+(units-300)*6;
        printf(" Bill is :%.2f",bill);
    }
       else if(units>500)
    {
        bill=50*1.45+50*2.8+100*3.05+100*4.75+200*6+(units-500)*6.25;
        printf(" Bill is :%.2f",bill);
    }




}