// Write a program in C to display the cube of the number up to an integer.
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// Number is : 3 and cube of the 3 is :27
// Number is : 4 and cube of the 4 is :64
// Number is : 5 and cube of the 5 is :125
/*
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("number is:%d and cube of the %d is :%d \n",i,i,i*i*i );
    }
}
*/
// **********************************************************************************************************


// Write a program in C to display the multiplication table for a given integer. 
// Test Data :
// Input the number (Table to be calculated) : 15
// Expected Output :
// 15 X 1 = 15
// ...
// ...
// 15 X 10 = 150
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Number is :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %2d = %3d \n",n,i,n*i);
    }
}
*/
// **********************************************************************************************************

// Write a C program to display the sum of n terms of even natural numbers.
// Test Data :
// Input number of terms : 5
// Expected Output :
// The even numbers are :2 4 6 8 10
// The Sum of even Natural Number upto 5 terms : 30

/*
#include<stdio.h>
int main()
{
    int term,t,sum=0;
    printf("number of terms :");
    scanf("%d",&term);
    
    printf("The even numbers are:",t=term);
    for(int i=1;term!=0;i++)

    {
        if(i%2==0){
            printf(" %d ",i,sum=sum+i,term--);
            
        }
    }
    printf("\nthe sum of even Natural number upto %d terms : %d",t,sum);
}
*/
// **********************************************************************************************************

// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1 + 11 + 111 + 1111 + 11111
// The Sum is : 12345
/*
#include<stdio.h>
int main()
{
    int term,j=1,sum=0;
    printf("The number of terms :");
    scanf("%d",&term);
    for (int i = 1; i <=term; i++)
    {
        
        sum=sum+j;
        if(i==term){
        printf("%d",j);
        }
        else
        {
        printf("%d+",j);

        }
        j=j*10+1;


    }
    printf(" =%d",sum);
    

}
*/

// **********************************************************************************************************

// Write a program in C to display the n terms of a harmonic series and their sum.
// 1 -1/2 +1/3 - 1/4 + 1/5 -1/6... 1/n terms
// Test Data :
// Enter the value of n: 5
// Harmonic Series: 1 - 1/2 + 1/3 - 1/4 + 1/5
// Expected Output :
// Sum of the series: 0.783333
/*
#include<stdio.h>
int main()
{
    int n;
    float sum=1;
    scanf("%d",&n);
        printf("1-");

    for(int i=2;i<=n;i++)
    {
      if(i%2==0){
        printf("1/%d+",i,sum-=1.0/i);
      }
      else{
        printf("1/%d-",i,sum+=1.0/i);
      }
    
    }
    printf("\b =%.2f",sum);
}
*/
// **********************************************************************************************************
