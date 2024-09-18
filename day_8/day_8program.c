// write a c program that takes two integers as input form the user usig scanf 
// , calculates their sum ,substraction , multiplication and division and then prints these __valueless
// input: Enter 1st number 20
// Enter second number :10
// output:
// addition=30
// multiplication=200
// substration=10
// division=2

// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter first number :");
//     scanf("%d",&a);
//      printf("Enter secod number :");
//     scanf("%d",&b);
//     printf("Addition is : %d \n",(a+b));
//     printf("multiplication is : %d \n",(a*b));
//     printf("substration is : %d \n",(a-b));
//     printf("division is : %d \n",(a/b));
    

// }
// ******************************************************************************************************************
// 2.write a program that takes the initial velocity (in meters per second),acceleration(in meters per second squared),and time (in seeconds ) from the user using scanf . calculate the distance traveled by an object using the formula.
// input: enter the initial velocity(m/s):10
// Enter the acceleration (m/s^2):20
// enter the time:4
// output:the distance traveled is 200.00 meters

// #include<stdio.h>
// int main()
// {
//     int v,a,t;
//     float d;
//     printf("enter the initial velocity (m/s):");
//     scanf("%d",&v);
//      printf("enter the acceleration  (m/s^2):");
//     scanf("%d",&a);
//      printf("enter the  time (s):");
//     scanf("%d",&t);
//     d=v*t+0.5*a*t*t;
//     printf("distance = %.2f",d);
// }

// ******************************************************************************************************************

// write a program that converts an amount of money from one currency to another .
// the user should input the amount in the source currency and the exchange rate.
// calculate the equivalent amount in the target currency and print it.
// formula: converted_amount =amount * exchange rate;
// input : Enter the amount in the source currency :4
// enter the exchange rate (source to target ):2
// output:
// equivalent amount in the targer currency:8.00
// #include<stdio.h>
// int main()
// {
//     int amount,exchange_rate;
//     float target_currency;
//     printf("Enter the amount in the source currency :");
//     scanf("%d",&amount);
//      printf("Enter the exchange_rate (source to target) :");
//     scanf("%d",&exchange_rate);
//     target_currency=amount*exchange_rate;
//     printf("Equivalent amount in the target currency: %.2f",target_currency);
    
// }
// ******************************************************************************************************************
// 4.write a program that takes details of an employee form the user,including  name ,employee id , designation and salary.
// then ,print the details of the employee.
// input:
// enter employee name :rohit
// enter employee id :101
// enter employee designation : development
// enter employee salary;2500
// output:
// employee details 
// name: rohit
// employee id:101
// designation :development 
// salayry:$25000
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[20],designation[20];
//     int id,salary;
//     printf("Enter the employee name :");
//     scanf("%s",name);
//        printf("Enter the employee id :");
//     scanf("%d",&id);
//        printf("Enter the employee designation :");
//     scanf("%s",designation);
//        printf("Enter the employee salary :");
//     scanf("%d",&salary);
//        printf("employee details :\n");
//      printf("employee name : %s \n",name);
//       printf("employee id :%d\n",id);
//        printf("employee designation : %s\n ",designation);
//         printf("employee salary :%d ",salary);
// }


 
