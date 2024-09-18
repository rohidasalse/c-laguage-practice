//   1. write c program to reverse the two digit number without using loop
// #include<stdio.h>

// int main()
// {
//     int n=25,sum;
//     // printf("enter the number: ");
//     // scanf("%d",&n);
//     sum=(n%10)+(n/10);
//     printf("\nYou enter the number is :%d\n",n);
//     printf("Reverce number is : ");
//     printf("%d%d",(n%10),(n/10));
//     printf("sum=%d",sum);

//     }
// 23
// 23%10==3
// 23/10==2
// 32
// }

// *******************************************************************************************
//   2. write c program to find the previous multiplication of 100 a given three digit number
#include<stdio.h>

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("\nYou enter the number is :%d\n",n);
    ((((n/10)%10)>5) && (printf("%d",((((n/10)/10)%10)+1)*100)) ||(printf("%d",(((n/10)/10))*100)) );
}
// *******************************************************************************************

//    3.  write a c program to add each digit of given two digit number
// #include <stdio.h>

// int main()
// {
//     printf("enter  number : ");
//     int n;
//     scanf("%d", &n);

//     int sum = (n % 10) + (n / 10);
//     printf("sum of two digits is :%d", sum);
// }

// *******************************************************************************************
//   4.write  a c program fo find the multiple of 10 for a given 2 digit number ,if the given number last digit is 5

// #include <stdio.h>
// int main()
// {
//     printf("enter  number : ");
//     int n;
//     scanf("%d", &n);
//     ((n%10)==5) && (printf("%d",((n/10)+1)*10)) || (printf("enter another number")) ;
// }
// 5.find the previous multiple of 10 and if the given numbers last digit is greater than or equal to 5 then find the next multiple of 10
// case 1
// input -24
// output-20
// case 2
// input -57
// output-60
// #include <stdio.h>
// int main()
// {
//     printf("enter  number : ");
//     int n;
//     scanf("%d", &n);
//     ((n%10)>5) && (printf("%d",((n/10)+1)*10)) || (printf("%d",(n/10)*10));
// }