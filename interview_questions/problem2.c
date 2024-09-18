// write a program to check number is prime or not
#include<stdio.h>
int main()
{
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    if(number==1)
    { 
        printf("this number is prime number :%d",number);
              
        
    }
   if(number==2)
    { 
        printf("this number is prime number :%d",number);
              
        
    }
  if(number==3)
    { 
        printf("this number is prime number :%d",number);
             
        
    }
    for(int i=2;i<=(number/2);i++)
    {
        if(number%i==0 ){
            printf("this number is not a prime number :%d",number);
            break;
        }
        else{
             printf("this number is prime number :%d",number);
              break;
        }
    }
    
}