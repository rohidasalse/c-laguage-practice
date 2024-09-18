// 1.
// Distribute Salary
// Write a c program to calculate the salary and based on that salary calculate the tax for the person
// based on their designation by following few rules which are below
// * 3 Type of Designation are there name as
//  -> Developer
//  (Indicated by D or d)
//  -> Trainer 
//  (Indicated by T or t)
//  -> Manager 
//  (Indicated by M or 
// [Note - For wrong designation print a message as "Invalid input".
// * 3 Type of Extra Allowance are there which will be added in the salary 
//  Home Allowance  =10000
//  Food Allowance  =3000
//  Travel Allowance =10000
// * If the designation is Developer There salary will be calculated by adding 
//  Total Salary= Salary + Home Allowance
//  If the designation is Trainer There salary will be calculated by adding 
//  Total Salary= Salary + Home Allowance + Food Allowance 
//  If the designation is Manager There salary will be calculated by adding 
//  Total Salary= Salary + Home Allowance + Food Allowance + Travel Allowance
// * If the Total Salary is greater than 40000 then calculate the tax as 10% from the total salary 
//  else 5% of total salary
// [note: Take the Designation and salary from the user and based on the that 
//     calculate Total Salary and also based on Total Salary calculate the tax].
// Sample Input
// Enter your designation (D/d for Developer, T/t for Trainer, M/m for Manager): D
// Enter your base salary: 35000
// Sample Output
// Designation: D
// Base Salary: 35000.00
// Total Salary: 45000.00
// Tax: 4500.00


// #include<stdio.h>
// int main()
// {
//     int salary,homeallovance=10000,foodallovance=3000,travelallovance=10000;
//     float total_salary;
//     char designation;
//     printf("Enter your designation :");
//     scanf("%c",&designation);
//     printf("Enter your salary :");
//     scanf("%d",&salary);

//     if(designation=='D' || designation=='d')
//     {

//     printf("Designation:%c\n",designation);
//     printf("Base salary:%.2f\n",(float)salary);
//     total_salary=(salary+homeallovance);
//     printf("Total_salary: %.2f\n",total_salary);
//     if(total_salary>40000)
//     printf("tax is %.2f",(total_salary*0.1));
//     else
//     printf("tax is %.2f",(total_salary*0.05));
//     }
//     else if(designation=='T' || designation=='t')
// {
//     printf("Designation:%c\n",designation);
//     printf("Base salary:%.2f\n",(float)salary);
//     total_salary=(salary+homeallovance+foodallovance);
//     printf("Total_salary: %.2f\n",total_salary);
//     if(total_salary>40000)
//     printf("tax is %.2f",(total_salary*0.1));
//     else
//     printf("tax is %.2f",(total_salary*0.05));
// }
//     else if(designation=='M' || designation=='m')
// {
//     printf("Designation:%c\n",designation);
//     printf("Base salary:%.2f\n",(float)salary);
//     total_salary=(salary+homeallovance+foodallovance+travelallovance);
//     printf("Total_salary: %.2f\n",total_salary);
//     if(total_salary>40000)
//     printf("tax is %.2f",(total_salary*0.1));
//     else
//     printf("tax is %.2f",(total_salary*0.05));
// }

// else
// {printf("Invalid input");}

// }
// *********************************************************************************************************************************************************************
// 2.Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program. 
// Sample Input
// Enter month number (1-12): 4
// Sample Output
// Number of days: 30
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter number :");
//     scanf("%d",&n);
//     if(n==1 || n==3 || n==5 ||n==7 || n==8 ||n==10||n==12)
//     printf("Number of days : 31");
//      else if( n==4 || n==6 ||n==9 || n==11 )
//     printf("Number of days : 30");
//     else if (n==2 )
//     {
//     printf("Number of days : 28");
        
//     }
    
// }
// *********************************************************************************************************************************************************************
// Denomination Amount
// Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. How to the minimum number of notes required for the given amount in C programming. Program to find minimum number of notes required for the given denomination. Logic to find minimum number of denomination for a given amount in C program
// Sample Input
// Enter the amount: 1275
// Sample Output
// Rs. 500 notes: 2
// Rs. 100 notes: 2
// Rs. 50 notes: 1
// Rs. 20 notes: 1
// Rs. 10 coins: 0
// Rs. 5 coins: 1
// Rs. 2 coins: 0
// Rs. 1 coins: 0
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     if(n>=500){
//         printf("Rs.500 notes :%d \n",(n/500));
//         n=n%500;
//     }
//         if(n>=200){
//         printf("Rs.200 notes :%d \n",(n/200));
//         n=n%200;
//     }
//       if(n>=100){
//         printf("Rs.100 notes :%d \n",(n/100));
//         n=n%100;
//     }
//       if(n>=50){
//         printf("Rs.50 notes :%d \n",(n/50));
//         n=n%50;
//     }
//       if(n>=20){
//         printf("Rs.20 notes :%d \n",(n/20));
//         n=n%20;
//     }
//       if(n>=10){
//         printf("Rs.10 notes :%d \n",(n/10));
//         n=n%10;
//     }
//       if(n>=5){
//         printf("Rs.5 notes :%d \n",(n/5));
//         n=n%5;
//     }
//       if(n>=2){
//         printf("Rs.2 notes :%d\n",(n/2));
//         n=n%2;
//     }
//     if(n>=1){

//     printf("Rs. 1 notes :%d",n);
//     }
    
// }
// *********************************************************************************************************************************************************************
// 4. Electricity Bill
// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition: 
// -> For first 50 units Rs. 0.50/unit 
// -> For next 100 units Rs. 0.75/unit 
// -> For next 100 units Rs. 1.20/unit 
// -> For unit above 250 Rs. 1.50/unit 
// An additional surcharge of 20% is added to the bill. 
// How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.  
// Sample Input
// Enter the electricity units consumed: 40
// Sample Output
// Total electricity bill: Rs. 24.00

// #include<stdio.h>
// int main()
// {
//     int units;
//     float bill;
//     a:
//     printf("Enter the units :");
//     scanf("%d",&units);
//     if(units<0){
//         printf("\a enter the valid units\n ");
//         goto a;
//     }
//     if(units<=50){
//         bill=(units*0.50)+((units*0.50)*0.2);
//         printf("total electricity bill : Rs. %.2f",(bill));
//     }
//        else if(units<=150){
//         bill=(50*0.5+(units-50)*0.75)+((50*0.5+(units-50)*0.75))*0.2;
//         printf("total electricity bill : Rs. %.2f",(bill));
//     }
//      else if(units<=250){
//         bill=(50*0.5+(units-150)*0.75+(units-250)*1.5)+(50*0.5+(units-150)*0.75+(units-250)*1.5)*0.2;
//         printf("total electricity bill : Rs. %.2f",(bill));
//     }
//      else if(units>250){
//         bill=(50*0.5+100*0.75+100*1.2+(units-250)*1.5)+(50*0.5+100*0.75+100*1.2+(units-250)*1.5)*0.2;
//         printf("total electricity bill : Rs. %.2f",(bill));
//     }
// }