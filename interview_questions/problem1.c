/* 1. Write a C program to calculate Compound Interest.
p=principal amount
r=interest rate
n=interest in a year(the number of times interest is compounded in a year)
t=total years for compound interest(total   time in years)

case:1
input:
Enter the principal amount :10000
Enter the  interest rate :7%
Enter the number of times interest is compounded in a year :1
Enter the  time in years :5
output:
total amount :140255.171875
Total compounded interest :40255.171875
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float p,r,n,t,amount;
    printf("Enter the principal amount :");
    scanf("%f",&p);
    printf("Enter the  interest rate :");
    scanf("%f",&r);
    printf("Enter the number of times interest is compounded in a year :");
    scanf("%f",&n);
      printf("Enter the  time in years :");
    scanf("%f",&t);
    amount=p*((pow((1+(r/(100.0*n))),(n*t))));
    printf("total amount :%f",amount);

    printf(" \nTotal compounded interest :%f",(amount-p));
    
}