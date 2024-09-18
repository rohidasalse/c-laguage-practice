// Write a C program to check the given number is a prime number or not.
// Input as :
// Enter a number : 13
// Expected Output :
// 13 is a Prime Number.
/*
#include<stdio.h>
int main()
{
    int n,f=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
            printf("%d is not prime number:",n);
            f=1;
            return ;
        }
    }
    if(f==0)
            printf("%d is  prime number:",n);

}
*/
// ***********************************************************************************************************************
// Write a C program to add all the digits present in a given number until it became a single digit. Develop it by using while loop.
// [if the number is 5678, sum of digit =5+6+7+8=26 , again sum of digit of the sum : 2+6=8] 
// Input as : 5678
// Ouput as : 8
/*
#include<stdio.h>
int main()
{
    int n,rev=0,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    // while(n){
    //     int c=n%10;
    //     rev=rev*10+c;
    //     n/=10;
    // }
    // printf("rev=%d\n",rev);
    // n=rev;
    while(n>9)
    {

        sum=0;
    while(n>0)
    {
        int c=n%10;
        // printf("%d+",c,sum+=c);
        sum+=c;
        n/=10;

    }
    // printf("\n");
    // printf("%d\n",sum);

    n=sum;
    }
    printf("\n %d",sum);

}
*/

// ***********************************************************************************************************************
// Write a C program to check the given number is perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). 
// Input as :
// Enter a number :28
// Output as :
// 28 is a Perfect Number
/*
#include<stdio.h>
int main()
{
       int n,i=1,sum=0;
       int m;
    printf("enter the number:");
    scanf("%d",&n);
    m=n;
    while (i<=n/2)
    {
       if(n%i==0)sum+=i; 
       i++;
    }
    if(m==sum)printf("perfect Number:");
    else printf("not a perfect number:");

    
}
*/
// **********************************************************************************************************************

// Write a C program that calculates the Highest Common Factor (HCF) of two numbers using for loops
// input as :
// Enter two numbers: 8 12
// The HCF of 8 and 12 is 4
/*
#include<stdio.h>
int main()
{
    int n1,n2,hcf=0;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("enter the second number:");
    scanf("%d",&n2);
    int i=1;
    int max=n1>n2?n1:n2;
    while(i<max){
        if(n1%i==0 && n2%i==0)hcf=i;
        i++;
    }
    printf("%d",hcf);

}
*/
// **********************************************************************************************************************

// Write a C program that calculates the sum of a factorial series up to a given number of terms.
// Enter the number of terms in the factorial series: 5
// The sum of the factorial series up to 5 terms is: 153
#include<stdio.h>
int main()
{
    int n,sum=0,fact=1;
     printf("enter the number:");
    scanf("%d",&n);
    while(n)
    {
        for(int i=1;i<=n;i++)
        {
             fact*=i;
        }
            sum+=fact;
        fact=1;
        n--;
    }
    printf("sum=%d",sum);

}


