/*
Write a c program for the following pattern



   1 2 3 4 5

   0 3 4 5 6

   0 0 5 6 7

   0 0 0 7 8

   0 0 0 0 9



   #include<stdio.h>
int main()
{
    int r,c,rn,cn,i;
    printf("Enter the row number:");
    scanf("%d",&rn);
    printf("Enter the column number:");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
        i=r;
        for(c=1;c<=cn;c++)
        {
            if(r>c)printf("0 ",i++);
            else{
                  printf("%d ",i);
                  i++;
            } 
        }
        printf("\n");
    }
}
*/

// *********************************************************************************
/*
Write a c program for the following pattern



    1 

    1 * 2

    1 * 2 * 3

    1 * 2 * 3 * 4

    #include<stdio.h>
int main()
{
    int r,c,rn,cn,i,j=0;
    printf("Enter the row number:");
    scanf("%d",&rn);
    printf("Enter the column number:");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
        i=1;
        
        for(c=1;c<=r+j;c++)
        {
            if(c%2==0)printf("* ");
            else{
                  printf("%d ",i);
                  i++;
            } 
        }
        printf("\n",j++);
    }
}

*/
// *********************************************************************
/*
 1 2 3 4 5

  2 3 4 5 1

  3 4 5 1 2

  4 5 1 2 3

  5 1 2 3 4


  #include<stdio.h>
int main()
{
    int r,c,rn,cn,i,j=0;
    printf("Enter the row number:");
    scanf("%d",&rn);
    printf("Enter the column number:");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
        i=r;
        
        for(c=1;c<=rn;c++)
        {
            if(i>=6){printf("%d ",i=1);
            i++;}
            else{
                  printf("%d ",i);
                  i++;
            } 
        }
        printf("\n");
    }
}

*/
// ***********************************************************************
/*
3)Write a c program to print the pattern 

    1  

    2  3

    4  5  6 

    7  8  9 10

   11 12 13

   14 15

   16


#include<stdio.h>
int main()
{
    int r,c,rn,cn,i=1,j=0;
    printf("Enter the row number:");
    scanf("%d",&rn);
    printf("Enter the column number:");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
    
        
        for(c=1;c<=r;c++)
        {
            printf("%d ",i++);
          
        }
        printf("\n");
    }
      

       for(r=rn-1;r>=1;r--)
    {
        
        
        for(c=1;c<=r;c++)
        {
            printf("%d ",i++);
          
        }
        printf("\n");
    }
}
*/