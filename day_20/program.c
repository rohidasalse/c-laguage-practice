// Write a C program that asks the user to input a three-digit integer and calculates the sum of its digits. Using While loop.
// Input as : 
// Enter a three digit number : 123
// Output as :
// Sum of the digits : 6

// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter the three digit number:");
//     scanf("%d",&n);
//     printf("%d",n);
//     while (n)
//     {
//        int p=n%10;
//        sum=sum+p;
//        n=n/10;
//     }
//     printf("%d",sum);
    
// }
// ====================================================================================================================================

// Write a C program to add all the natural number from 1 to n. Ask the user to give n value and print the addition value.
// Input as : 
// Enter n value : 10
// Output as :
// Sum of the natural number from 1 to 10 : 55

// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter n value :");
//     scanf("%d",&n);
//     while (n)
//     {
//         if(n<0)
//         {
//             sum=sum+n;
//             n++;
//         }
//         else
//         {
//       sum=sum+n;
//       n--;
//       }
//     }
//     printf("sum=%d",sum);
    
// }
// ======================================================================================================================================
// Write a C prgram that asks the user to input an integer and reverse that number and display the reverse of that given number.
// Case-1
// -------
// Input as : 
// Enter a number : 123
// Output as : 
// Reverse of the given number is : 321
// Case -2
// ______
// Input as :
// Enter a number : 2314
// Output as : 
// Reverse of the given number is : 4132
// #include<stdio.h>
// int main()
// {
//     int n,t=0,r=0;
//     printf("enter a number :");
//     scanf("%d",&n);
//     while(n)
//     {
//        t=n%10;
//        r=r*10+t;
//         n=n/10;
//     }
//         printf("%d",r);

// }
// ======================================================================================================================================
// write a C program to find the factorial of a given number. Take the input from the user.
// Input as :
// Enter a number : 5
// Output as :
// Factoria of 5 : 120
#include<stdio.h>
int main()
{
    int n,f=1;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n<0)printf("enter valid number:");
    else{
    while (n>=1)
    {
       f=f*n--;
        
    }
    printf("factorial :%d",f);
}
}

// ======================================================================================================================================
