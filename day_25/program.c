// Express as Sum Of prime
// Write a program in C to check whether a number can be expressed as the sum of two prime. 
// Sample Input
// Input as: 16
// Sample Output
// Output :
// 16 = 3 13
// 16=5+11
/*
#include<stdio.h>
int main()
{
    int n,c=0,c2=0,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int x=n;x>=2;x--){

        if(n%x==0)c2++;
           for(int i=2;i<=n;i++){
          
        for(int j=1;j<=i;j++)
        {
            int s=i;
        if(i%j==0)c++;
        }
        if(c==2)
        {printf("%d",i,sum+=i); }
        c=0; 
    }
        
    }
    // for(int i=2;i<=n;i++){
    //     for(int j=1;j<=i;j++)
    //     {
    //         int s=i;
    //     if(i%j==0)c++;
    //     }
    //     if(c==2)
    //     {printf("%d",i,sum+=i); }
    //     c=0; 
    // }
    printf("sum=%d",c);
}
*/
// ***************************************************************************************************************************
// Automorphic number
// Write a program to check given number is Automorphic number or not.

// Sample Input
// input =25
// Sample Output
// 25 is Automorphic number.
// Explanation
// A number whose square ends in the same digits as the number itself. 
// Example : 5,6,25 are automorphic numbers beacause 5*5=25
 // last digit is 5 6*6=36 // last digit is 6 25*25=625 // last digits is 25
 /*
#include<stdio.h>
int main()
{
    int n,m,count=0,square,rev=0,rev2=0;
      printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    while(n)
    {
      count++;
      n=n/10;
    }
    n=m;
    square=n*n;
    while(square){
        if(count!=0){
            int p=square%10;
            rev=rev*10+p;
            count--;
            square/=10;
        }
    }
    m=rev;
    while(m)
    {
        int p=m%10;
        rev2=rev2*10+p;
        m/=10;

    }
    printf("%d",rev2);}
    */

#include<stdio.h>
int main()
{
    int n,m,count=0,square,rev=0,rev2=0,t;
      printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    // counting the length of the number
    while(n)
    {
      count++;
      n=n/10;
    }
    t=count;
    printf("\ncount=%d",count);
    n=m;
    // calculating the square of the given number:
    square=n*n;
    printf("\nsquare=%d",square);
    // printing the reverse number of the square
    while(square){
            int p=square%10;
            rev=rev*10+p;
            square/=10;
    }
    // taking count Th consecative number
    while(t!=0){
        rev/=10;
        t--;
    }
      printf("\nreversed=%d",rev);
    m=rev;
    // making the reverse of previous number
    while(m)
    {
        int p=m%10;
        rev2=rev2*10+p;
        m/=10;
    }
    printf("\nrev2=%d",rev2);
    printf("\nn=%d",n);
    printf("\ncount=%d",count);
    printf("\n");

    if(count=1){
        if(n==(rev2))printf("Automorphic number");
        else printf("Not Automorphic number");
    }
 
     else if(count>=2){
         if(n==rev2)printf("Automorphic number");
        else printf("Not Automorphic number");
    }
       
}

// 376
// 141376


