// 1.
// #include<stdio.h>
// int main()
// {
//     int x=5;
//     if(x<1)
//     printf("hello");
//     if(x!=5)
//     printf("hi");
//     else
//     printf("no");

// }
// ****************************************************************************************************************
// 2.
// #include<stdio.h>
// #include<stdbool.h>

// int main()
// {
// bool n;
// if(true!=true)
// printf("print c language");

// }
// ****************************************************************************************************************
// 3.
// #include<stdio.h>
// #include<stdbool.h>

// int main()
// {
// int x=1;
// if(x--==0)
// printf("inside if \n");
// else if(x==0)
// printf("inside else if ");
// else
// printf("error");

// }
// ****************************************************************************************************************
// 4.
// #include<stdio.h>
// #include<stdbool.h>

// int main()
// {
// int x=5;
// if(printf("hello")!=5)
// printf("inside if \n");
// else if(printf("student..!"))
// printf("wellcome to c\n ");
// else
// printf("error");

// }
// ****************************************************************************************************************
// 6.
// #include<stdio.h>

// int main()
// {
// int num=25;
// int result;
// if(num%2==0)
// result=num*2;
// else
//  result=num*3;

// }
// ****************************************************************************************************************
// 7.
// #include<stdio.h>

// int main()
// {
//     int x=5,y=10;
//     if(x<10 && y>5)
//     printf("condition satisfied");
//     else
//     printf("condition is not satisfied");



// }
// ****************************************************************************************************************
// 8.
// #include<stdio.h>

// int main()
// {
// int x=5;
// if(x=6)
// printf("x is 6");
// else
// printf("x is not 6");
// return 0;

// }
// ****************************************************************************************************************
// 9.
// #include<stdio.h>

// int main()
// {
// int a=5,b=8;

// if(a==5 &&(b=9))
// printf("gorilla glass=");
// printf("%d%d",a,b);

// }
// ****************************************************************************************************************
// 10.
// #include<stdio.h>

// int main()
// {
// int a=9;
// if(a==9)
// {
//     printf("ostrich");

// }
// else;
// printf("eggs");
// printf("white");

// }
// ****************************************************************************************************************
// 11.
// #include<stdio.h>

// int main()
// {
//     int a=0;
//     if(a)
//     printf("first");
//     else if(!a)
//     printf("second");
//     else
//     printf("third");


// }
// ****************************************************************************************************************
// 13.
// #include<stdio.h>

// int main()
// {
// int a=1;
// if(a--)
// printf("true");
// if(a++)
// printf("false");

// }
// ****************************************************************************************************************
// 14.
// #include<stdio.h>

// int main()
// {
//     int a=1;
//     if(a)
//     printf("All is well");
//     printf("i am well");
//     else;
//     printf("i am not river");


// }
// ****************************************************************************************************************
// 15.
// #include<stdio.h>

// int main()
// {
// if(-5)
// printf("germany");
// if(5)
// printf("texas");
// printf("zing");

// }

// ------------------------------------------------------------------------Set-B------------------------------------------------------------------------
//                                   --------------------------------------5mark-----------------------------------------------
// 1).Write a C program that takes an hour in the 24-hour format as input and identifies the time of day as "Morning," "Afternoon," "Evening," or "Night." Implement this using a series of if statements. Ensure that the program also checks for invalid input, displaying an appropriate message if the entered hour is not within the valid range (0-23). Present the program with a suitable title and header for clarity. Using if else 

// Input as :
// Enter the hour (24-hour format): 13

// Output as :
// It's Afternoon.


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if((n>6 && n<=12))
//     {
        
//         printf("Morning");
      
//     }
//     else if(n>12 && n<=18)
//     {
//         printf("Afternoon");
       
//     }
//        else if(n>18 && n<=24)
//     {
//         printf("Evening");
       
//     }
//      else if(n>0 && n<=6)
//     {
//         printf("Night");
       
//     }
//     else
//     printf("Enter valid input");
// }
// -----------------------------------------------------------------------------------------------------------------------------------------------------
// 2)Determine Voting Eligibility using if else
// Write a C program to check if a person is eligible to vote. A person is eligible to vote if their age is 18 or older.
// Example
// Input as:-
// Enter your age: 20
// Output as:-
// You are eligible to vote.
// Input as:-
// Enter your age: 16
// Output as:-
// You are not eligible to vote.
#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    printf("you are eligible to vote");
    else if(age<18)
    printf("you are not eligible to vote");
    else
    printf("enter a valid age");


}