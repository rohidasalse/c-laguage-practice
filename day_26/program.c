
//  A B C D E
//  A B C D E
//  A B C D E
//  A B C D E
//  A B C D E

/*
#include <stdio.h>

int main()
{
    int rn=5,cn=5;

    for(int r=1;r<=rn;r++)
    {
      char ch='A';
    
        for(int c=1;c<=cn;c++){
            printf("%2c", ch++);
        }
        printf("\n");
    }
}
*/
// ***************************************************************************************************

//  A B C D E
//  a b c d e
//  A B C D E
//  a b c d e
//  A B C D E
/*
#include <stdio.h>

int main()
{
    int rn,cn;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&rn,&cn);

    for(int r=1;r<=rn;r++)
    {
    char ch1='A',ch2='a';
    for(int c=1;c<=cn;c++)
    {

        if(r%2==0)printf("%2c",ch2++);
        else printf("%2c",ch1++);
    }
    printf("\n");
      
    }
}
*/
/*
  1   2   3   4   5 
  6   *   *   *   7 
  8   *   *   *   9 
 10   *   *   *  11 
 12  13  14  15  16 
#include <stdio.h>

int main() {
    // Write C code here
    int n=5,p=1,r=1,c=1;
    for(r=1;r<=n;r++)
    {
  
        for(c=1;c<=n;c++){
            
            if((r>=2&&c>=2)&&(r!=n&&c!=n)){
                printf(" %2c ",42);
            }
            else {
                printf(" %2d ",p++);
            }
        }
            printf("\n");
    }
 

    return 0;
}
*/
#include <stdio.h>

int main() {

    int n=3,p=6,r=1,c=1;
    for(r=1;r<=n;r++)
    {
  
        for(c=1;c<=n;c++){
            
            if(r>=c){
                if()
                printf(" %2d ",p);
                p--;
            }
            else {
                printf(" %2c ",32);
            }
        }
            printf("\n");
    }
 

    return 0;
}