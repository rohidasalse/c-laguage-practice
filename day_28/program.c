   /* Write a logic for the following pattern in c?
    1

    2  3

    4  5  6

    7  8  9  10

    11 12 13 14 15


#include<stdio.h>
int main()
{
    int r,c,rn,i=1;
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%2d  ",i);
            i++;
            
        }
        printf("\n");
    }
}
*/
// *********************************************************************************************************************************************************************************************
/*Write a logic for the following pattern in c?

	1

    2  3

    3  4  5

    4  5  6  7

    5  6  7  8  9

   #include<stdio.h>
int main()
{
    int r,c,rn,i=1;
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    { 
        i=r;
        for(c=1;c<=r;c++)
        {
            printf("%2d  ",i);
            i++;
            
        }
        printf("\n");
    }
}
    */
// *********************************************************************************************************************************************************************************************


   /*
   Write a logic for the following pattern in c?

	1

    1  2

    3  5  8

    13 21 34 55

#include<stdio.h>
int main()
{
    int r,c,rn,i=1,j=1,t=1;
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    { 
        
        for(c=1;c<=r;c++)
        {
            if(r<=2 && c==1)printf("%d  ",j);
            else{

            t=i+j;
            printf("%d  ",t);
            i=j;
            j=t;
            }
            
        }
        printf("\n");
    }
}
   
   
   */
//   *********************************************************************************************
  /*
  Write a logic for the following pattern in c?

    0

    1 0

    0 1 0

    1 0 1 0

    0 1 0 1 0 
  
  
  #include<stdio.h>
int main()
{
    int r,c,rn,i=1,j=1,t=1;
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    { 
        
        for(c=1;c<=r;c++)
        {
            if((r+c)%2)
          printf("1 ");
            else
          printf("0 ");

        }
        printf("\n");
    }
}
  */
//  ******************************************************************************************8
 /*
 Write a logic for the following pattern in c?

    0

    0 1 

    0 1 1

    0 1 1 2

    0 1 1 2 3
 
 
#include<stdio.h>
int main()
{
    int r,c,rn,i=0,j=1,t=0;
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    { 
        i=0,j=1;
        for(c=1;c<=r;c++)
        {
      
        t=i+j;
        printf("%d",i);
        i=j,j=t;
       
        }
        printf("\n");
    }
}
 */
/*
Write a logic for the following pattern in c?

    0  

    0 1

    0 1 0

    0 1 0 1

    0 1 0 1 0

    0 1 0 1 0 1



    #include<stdio.h>
int main()
{
    int r,c,rn,i=0,j=1,t=0;
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    { 
       
        for(c=1;c<=r;c++)
        {
       if(c%2)printf("0");
       else printf("1");
     
       }
        printf("\n");
        }
    }
*/
// *****************************************************************************
/*

Write a logic for the following pattern in c?

    A 

    B A

    C B A

    D C B A

    E D C B A

#include<stdio.h>
int main()
{
    int r,c,rn;
    char ch='A';
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    { 
        ch='A'+r-1;
       
        for(c=1;c<=r;c++)
        {
     
     printf("%c",ch);
     ch--;
       }
        printf("\n");
        }
    }
*/
// ************************************************************************************
/*
Write a logic for the following pattern in c?
    1

    2  6

    3  7  10

    4  8  11  13

    5  9  12  14  15
    

#include<stdio.h>
int main()
{
    int r,c,rn,p;
 
    printf("enter the number of rows :");
    scanf("%d",&rn);
    for(r=1;r<=rn;r++)
    { 
   
       p=r;
        for(c=1;c<=r;c++)
        {
     printf("%d ",p);
     p=p+rn-c;
  
       }
        printf("\n");
        }
    }
*/