// Write a C program that takes a number as input from the user and determines whether it is a spy number of not, DEVELOP this by using while loop.
// A Spy number is a number where the sum of its digits is equal to its product of its digits.
// For Exampl
// 1124 is a spy number , because the sum of its digits is 1+1+2+4 = 8 and product of its digits is equal to 1*1*2*4 = 8..
/*
#include<stdio.h>
int main()
{
    int n,sum=0,mul=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n){
        int m=n%10;
        sum+=m;
        mul*=m;
        n=n/10;
    }
    if(sum==mul)printf("spy number:");
    else printf("not spy number:");

}
*/
// ***************************************************************************************************************************************************************************
// Write a C program that takes a number as input from the user and determine whether the number is a neon number or not. Develop it by using while loop.
// A Neon number is a number is a number where the sum of digits of square of the number is equal to the number itself.
// For Example :
// 9 is a Neon number . Its square is 9*9 = 81 and sum of the digits 8+1 = 9 .So both are equal.

/*
#include<stdio.h>
int main()
{
   int n,s,sum=0;
   printf("Enter a number:");
   scanf("%d",&n);
   s=n*n;
   while (s)
   {
    int m=s%10;
sum+=m;
s=s/10;
   }
   if(n==sum)printf("Neon number:");
   else printf("not a neon number:");
    
}
*/

// ***************************************************************************************************************************************************************************
// Write a C program to find the given number is a step number or not.
// If the adjacent digit difference is 1 then it is a step number.
// Example as: 1234
// o/p : It is a step number.
// Test cases you have to check: 
// 1234, 4321, 5432, 3210,10 are step numbers.
// // 1001,12234 are not step numbers.
 #include<stdio.h>
 int main()
 {
    int n,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
     int p1=n%10;
     n/=10;
    while(n){
       
       int p2=n%10; 
       
        if(p2-p1==1 || p1-p2==1){p1=p2;n/=10;f=0;}
        else{
            printf("not a step number:");
            return 0;
        }
        
    }
    if(f==0)printf("step number:");

 }


// ***************************************************************************************************************************************************************************
// ***************************************************************************************************************************************************************************
