// 1.convert Centimeter to Inches
// write a program that takes input form the user. take some input for centimeter and convert that into inches.
// case1 :
// input:1
// output:0.3937
// case2: l
// input:20
// output:7.87

// #include<stdio.h>
// int main()
// {
//     int number;
//     float inche;
//     printf("Enter the number which is in centimeter:");
//     scanf("%d",&number);
//     inche=number/2.54;
//     printf("\nvalue in inches :%.4f",inche);

// }
// ************************************************************************************************************************************************************************

// 2.sum of natural number
// write a C program to calculate the sum of natural numbers from 1 to given positive integer by user , take the input form the user by using scanf()
// input:Enter a positive integer:10
// output: the sum fo natural numbers from 1 to 10 is :55

// #include <stdio.h>
// int main()
// {
//     int number, sum = 0, i = 1;
//     printf("Enter a positive integer :");

//     scanf("%d", &number);

//     for (i; i <= number; i++)
//     {
//         sum += i;
//     }
//     printf("the sum of natural numbers from %d to %d is :%d", i - number, i - 1, sum);
// }
// ************************************************************************************************************************************************************************

// 3. Area of different shape
// write a C program that takes 2 numbers as input and stor that number in a variable , first input for radius  of circle and 2 nd input for side fo a square.
// input:
// Enter radius of circle:12
// enter side of square:5
// output:
// Area of circle is:452.16
// Area of Square:25

// #include<stdio.h>
// int main()
// {
//     const float Pi=3.1415;
//     int side,radius,Areaofsquare;
//     float Areaofcircle;
//     printf("Enter radius of circle :");
//     scanf("%d",&radius);
//         printf("\nEnter side of square :");
//     scanf("%d",&side);
//     Areaofsquare=side*side;
//     Areaofcircle=Pi*radius*radius;
//     printf("\nArea of circle :%.2f",Areaofcircle);
//     printf("\nArea of Square :%d",Areaofsquare);
// }

// ************************************************************************************************************************************************************************

// 4. ASCII sum
// write a C program to take two character input form the user and print the ASCII  value of that two character and display its sum.
// input :
// Enter a character : a b
// output:
// ASCII vlaue of a is : 97
// ASCII value of b is :98
// ASCII sum of a & b is :198

// #include<stdio.h>
// int main()
// {
//     char a ,b;
//     printf("enter the character :");
//     scanf("%c%c",&a,&b);
//     printf("ASCII value of a is : %d",a);
//     printf("\nASCII value of b is : %d",b);
//     int sum;
//     sum=(int)a + (int)b;
//     printf("\nASCII sum of a & b is :%d",sum);
// }
// ************************************************************************************************************************************************************************

// 5.convert day in Y_M_D
//     write a program in C to input number of days.find and display number of year,
//     weeks, months and days input : 390 output : 1 year, 3 weeks, 0 month, 4 days

// #include <stdio.h>
//     int
//     main()
// {
//     int total_days, year, months, days, weeks;
//     printf("Enter total days :");
//     scanf("%d", &total_days);

//     year = total_days / 365;
//     months = (total_days % 365) / 30;
//     weeks = ((total_days % 365) % 30) / 7;
//     days = ((total_days % 365) % 30) % 7;

//     printf("year %d , months %d ,weeks %d , remaining days %d", year, months, weeks, days);
// }
