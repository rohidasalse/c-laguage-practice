// 1. write a program to check the given character is alphabet or not a alphabet using the turnary operator
// #include<stdio.h>
// int main()
// {
//     char a;
// printf("enter the character :");
// scanf("%c",&a);
// int c=a;
// (c >='a'&& c<='z' ||c >='A' && c<='Z' )? printf("It is alphabet"):printf(" It is not a alphabet");

// }
// *******************************************************************************************************************************************
// 2.write a program to check the given number is odd or even using ternary operator.

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     (n%2==0)?printf("even number"):printf("odd number");

// }
// *******************************************************************************************************************************************

// 3.write a c program the given number is divisible by 5 and 11 or not divisible.usign ternary operator

// #include<stdio.h>
// int main()
// {
// int n;
// scanf("%d",&n);
// (n%5==0 && n%11==0)?printf("given number is divisible by 5 and 11 "):printf("number is not divisible by 5 and 11");
// }
// *******************************************************************************************************************************************
// 4.wrire a c program the find the smallest number from the given numbers .using the ternary operator

// #include<stdio.h>
// int main()
// {
//     int a=190,b=200,c=30;
//     (a<b && a<c )?printf("a is smallest"):(b<a && b<c)? printf("b is smallest"): printf("c is smallest");

// }
// *******************************************************************************************************************************************
// 5.0 write a c program to check the given character is vowel or consonant using the ternary operator
// #include<stdio.h>
// int main()
// {
//     char c;
//     scanf("%c",&c);
//     (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||c=='A' || c=='E' || c=='I' || c=='O' || c=='U')?printf("vowel"):printf("consonant");
// }
// write a program to check the number is armstrong or not
#include<stdio.h>
int main()
{
    int number,t,sum=0;
    printf("Enter the number:");
    scanf("%d",&number);
    t=number;
    // for(int i=1;n!=0;i++)
    while(number!=0)
    {
        number=number%10;
        sum=sum+(number*number*number);
        number=number/10;
    }
    if(sum==t){
    printf("it is armstrong number %d",t);}
    
    else
    printf("it isnot armstrong number %d",t);
    
}