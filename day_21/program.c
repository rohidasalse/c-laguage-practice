/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,sum=0,c=0;
    printf("neter number:");
    scanf("%d",&n);
    m=n;
    while(m!=0){
        c++;
       m/=10;
    }
    printf("%d",c);
    m=n;
    while(m!=0){
         int d=m%10;
    printf("\nd=%d",d);
    int p=pow(d,c);
    printf("\np=%d",p);

         sum+=p;
    printf("\nsum=%d",sum);

         m/=10;
    }
    printf("\n%d",sum);


}
Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    int n=153,t,c=0,sum=0,p=0;
  t=n;
  while(n!=0)
  {
      c++;
      n/=10;
  }
  n=t;
  while(t!=0)
  {
      int r=t%10;
      
  

      sum+=pow(r,c);
      t/=10;
  }
  if(sum==n)
    {
      printf("Armstrong no");
    }else
    {
        printf("Not Armstrong no:");
    }



    return 0;
}
*/
// ********************************************************************************************************************************************************
// Write a C program that prompts the user to enter a number and then prints the multiplication table for that number using a while loop.
/*#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the number :");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%3d\n",n*i);
        i++;
    }
    
}*/
// ********************************************************************************************************************************************************
/* Write a C program to generate the Fibonacci sequence up to a given times using a while loop. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. The program should prompt the user to enter a positive integer and then print the Fibonacci sequence up to that number.
Input as:
Enter how many Fibonacci series you want : 9 
Output as:
0 1 1 2 3 5 8 13 21 
*/
/*
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    int pre=0,next=1;
    if(n==0)
    printf("%3d",pre);
    else if(n==1)
    printf("%3d%3d",pre,next);
    else if(n>2){
    printf("%3d%3d",pre,next);
    while(n!=2){
        sum=pre+next;
        printf("%8d",sum);
        pre=next;
        next=sum;
        n--;
    }
    }
    else
    {
        printf("enter a valid number :");
    }
}
*/
// *******************************************************************************************************************************************
// Write a C program to check if a given number is a palindrome. A palindrome is a number that remains the same when its digits are reversed. For example, 121, 454 and 767 are palindromic numbers. The program should prompt the user to enter a positive integer and determine whether it is a palindrome or not.
// Input as:
// Enter a number : 121 
// Output as:
// 121 is a Palindrome number.
/*
#include<stdio.h>
int main()
{
    int n,m,rev=0;
    scanf("%d",&n);
    m=n;
    while(n)
    {
        int p=n%10;
        rev=rev*10+p;
        n=n/10;
    }
    if(m==rev)printf("palindrome number:");
    else printf("not a palindrome number:");

}
*/
// *******************************************************************************************************************************************************************
// Write a C program to check the given number is a perfect number or not?
// If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.
// 6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6
// 6 is a perfect number.
/*
#include<stdio.h>
int main()
{
    int n,i=1,c=0,sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
           sum=sum+i;
            c++;
        }
        i++;

    }
    printf("total factors :%d\n",c);
    if(n==sum)printf("%d is a perfect number :",n);
    else printf("%d is not a perfect number :",n);
}
*/
// Write a C program to check if a given number is a strong number. A strong number is a positive integer in which the sum of the factorial of its digits is equal to the number itself. For example, 145 is a strong number since 1! + 4! + 5! = 145. The program should prompt the user to enter a positive integer and determine whether it is a strong number or not.
// Input as:
// Enter a number : 145 
// Output as:
// 145 is a strong number.
#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("enter the number :");
    scanf("%d",&n);
m=n;
while(m){
    int p=m%10;
    int t=1;

    for(int i=p;i>1;i--)
    {
       t=t*i;
    // printf("%d\n",t);
    }
    sum=sum+t;
    printf("\n");


    m=m/10;
}
if(n==sum)printf("%d is strong number :",n);
else printf("%d is not strong number :",n);

}
