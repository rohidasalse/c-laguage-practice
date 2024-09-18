/* 1. Write a C Program to check whether the triangle is an equilateral, isosceles or scalene triangle. Using the if-else statement.
Take the inputs from the user.
Case-1 :
Enter the lengths of the sides of the triangle:
Side 1: 5
Side 2: 5
Side 3: 5
The triangle is an equilateral triangle.
Case-2:
Enter the lengths of the sides of the triangle:
Side 1: 4
Side 2: 5
Side 3: 4
The triangle is an isosceles triangle.
Case-3:
Enter the lengths of the sides of the triangle:
Side 1: 3
Side 2: 4
Side 3: 5
The triangle is a scalene triangle.*/

// #include<stdio.h>
// int main()
// {
//     int side1,side2,side3;
//     printf("side 1 :");
//     scanf("%d",&side1);
//     printf("side 2 :");
//     scanf("%d",&side2);
//      printf("side 3 :");
//     scanf("%d",&side3);
//     if(side1==side2 && side2==side3){
//         printf("The triangle is equilateral triangle");
//     }
//     else if(side1!=side2 && side2!=side3 && side1!=side3)
//     {
//         printf("The triangle is isosceles trangle");
//     }
//     else{
//         printf("The triangle is scalene trangle");
//     }
// } 
// ==============================================================================================================================================================================

// 2. Write a C program for a service center by following given Rules and Guide lines.
// * This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle 
// came to you , you have to show a message that "this service center is not accepting
// other than 2 wheeler, 3 wheeler and 4 wheeler".
// * If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of the vehicle.
// * If the age your vehicle is above 8 months then only accept the service center 
// otherwise you have to show a message that "your vehicle servie will done after a while".
// * If the vehicle age is greater than 8 months then show options to the user on the console.
// * Options:
// 1)Enter 1 for tyre problem
// 2)Enter 2 for fuel problem
// 3)Enter 3 for engine issue
// 4)Enter 4 for general services
// * If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,
// generate the bill.
// * For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be
// generated as Rs. 1200 in below format.
// Name of the owener
// Name of the bike
// Issue
// Bill
// * For fuels problem cost is Rs.1500
// * For engine issue cost is Rs.5000
// * For general servicing cost is Rs.1000
// And generate the bill in the above format.
// #include<stdio.h>
// int main(){
// //     int wheel,age,problem;
// //     printf("enter your vehicle type :");
// //     scanf("%d",&wheel);
    
// // }
//     int wheel,age,problem;
//     printf("enter your vehicle type :");
//     scanf("%d",&wheel);
//     if(wheel>=2 && wheel<=4){
//      printf("Enter the age of the vehicle :");
//      scanf("%d",&age);
//      if(age>8){
//         printf("your vehicle servie will done after a while\n");
//         a:
//         printf("Enter 1 for tyre problem\n");
//         printf("Enter 2 for fuel problem\n");
//         printf("Enter 3 for engine issue\n");
//         printf("Enter 4 for general services\n");
//         printf("enter number:");
//         scanf("%d",&problem);
//              problem>1 && problem<4 && goto a;


//      }

//     }
//     else printf("Enter 4 for general services");
    
// }