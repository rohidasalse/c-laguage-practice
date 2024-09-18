// you are developing a program for an online bus ticket booking platform called bus ticket booker .
// the platform offers tickets for a fixed price of rs 300 per seat .
// However ,ther are discounts available for senior citizens if a passengers age is between 60 and 100 (includsive ),they will receive a 20% discount on the total booking cost.
// write  a cprogram for bustickerbooker that takes the number of tickers and the age of the passenger as inputs and calculate sthe total booking cost after appluin gdiscount using the ternary operator .
// the program should the display the bill with a suitable message , including the total cosst and the discount amount (if applicable)
// your task is to implement the program login inside the main function by using only ter nary operator 
// note : this booking is only  for person not for multple user.
// input :
// Age of passenger :-
// output :



// #include<stdio.h>
// int main()
// {
//     int units;
//     scanf("%d",&units);
//     (units>=100)? printf("You have to pay 4.5Rs  per unit. \ntotal electricity bill is :%.2f",((((units/units)*100)*3)+((units-100)*4.5)) ): printf("You have to pay 3Rs  per unit.\n total electricity bill is : %f",(units*3) );
// }
// #include<stdio.h>
// // #include<string.h>
// int main()
// {
//     int salary;
//     char employee_type;
//     scanf("%c",&employee_type);
//     scanf("%d",&salary);
//   (employee_type=='H')?printf("salary is :%.2f",(float)salary):printf("salary is :%.2f",(float)(salary+((salary*5)/100.0)));
// }
#include<stdio.h>
int main()
{
    float total_purchase_amount;
    scanf("%f",&total_purchase_amount);
    (total_purchase_amount<1000)? printf("there is no discount"):(total_purchase_amount>=5000)&&printf("congrats! you get 10 discount.\n  discount is :%.2f total amount is :%.2f",(total_purchase_amount*0.1),(total_purchase_amount-(total_purchase_amount*0.1)));
}