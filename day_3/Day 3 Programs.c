// // 1.Add first and last number;
// // write a c program to take input of 3 digit number form the user and add the first and last digit of that given number 
// // input:345
// // output:8
#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("addition of first and last number is :%d",((number%10)+((number/10))/10));
}
// ************************************************************************************************

// 2.Time conversion
// write a program to take input for seconds form the user and convert it into hour ,minutes,second format
// input :3671
// output:1 hour,1 minute and 11 second
// #include<stdio.h>
// int main()
// {
//     int total_seconds,hour,minute,second;
//     printf("enter the number :");
//     scanf("%d",&total_seconds);
//     hour=total_seconds/(60*60);
//     total_seconds=total_seconds%3600;
//     minute=total_seconds/60;
//       total_seconds=total_seconds%60;
    
//     second=total_seconds;
//     printf("hour=%d ,minute=%d ,second=%d",hour,minute,second);
    
// }
// ************************************************************************************************
// 3.convert farenheit to celsius
// write a c program to convert temperature form farenheit to celsius
// input :ENTER  temperature in fahrenheit:100
// output:100.00 fahrenheit is 37.37 celsius

// #include<stdio.h>
// void main()
// {
//  int temperature;
//  float celsius;
//  printf("enter the temperature in fahrenheit :");
//  scanf("%d",&temperature);
//  celsius=(temperature-32)*(5/9.0);
//  printf("\n %d fahrenheit is %f celsius",temperature,celsius);
 
// }
// ************************************************************************************************

// 4.Lowercase to uppercase
// write a c program to convert a lowercase character to uppercase take the lowercase charecteras in put form the user by using scanf()
//  input: enter a lowercase charecter: u
//  output:uppercase equivalent:U
//  #include<stdio.h>

//  int main()
//  {

//     char c;
//     printf("Enter a lowercase character :");
//     scanf("%c",&c);
//     printf("%c",(c-32));
//  };
// ************************************************************************************************
// 5. find the biggest
// write a c program to find the biggest number among three numbers without using loops and contorl folw  statement
// input case 1: 10 20 30 
// output:30
// input case 2: 100 20 340 
// output:340


