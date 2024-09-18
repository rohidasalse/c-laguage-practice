// 1. find the largest number among the three without using the control statements
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    ((a>b && a>c) && printf("a is greater :%d",a) )
    || ((b>c && b>a) && printf("b is greater : %d",b)) || 
    ((b<c && a<c) && printf("c is greater :%d",c)) || 
    ((a==b && b==c) && printf("all are equals :%d",a) )||
    ((a==b && a>c) && printf("a and b are greater than c :%d",a) )||
    ((c==b && a<c) && printf("b and c are greater than a :%d",b) )||
    ((a==c && a>b) && printf("a and c are same as well as  greater than b:%d",a) );
}
// ***************************************************************************************************************************************************
