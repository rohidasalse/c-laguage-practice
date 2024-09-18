/*
Write a C program to print square pattern program using * 
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

#include<stdio.h>
int main()
{
    int r,c,nr,nc;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++){
            printf("* ");
        }
            printf("\n");

    }

}
*/
// ******************************************************************************
/*
2.Write a C program to print square pattern program 
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
5 5 5 5 5

#include<stdio.h>
int main()
{
      int r,c,nr,nc;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++){
            printf("%d ",r);
        }
            printf("\n");

    }

}
*/
// ******************************************************************************

/*

Write a C program to print square pattern program  
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5


#include<stdio.h>
int main()
{
      int r,c,nr,nc;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++){
            printf("%d ",r);
        }
            printf("\n");

    }

}
*/
// **************************************************************
/*
Write a C program to print square pattern program 
   1   3   5   7  9 
  11 13 15 17 19
  21 23 25 27 29
  31 33 35 37 39


#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=1;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++){
            printf("%2d ",i,i+=2);
        }
            printf("\n");

    }

}
*/
// *********************************************************************************************
/*
Write a C program to print square pattern program 
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1

#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=1;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++){
            c%2==0?printf("%d ",i-1):printf("%d ",i);
        }
            printf("\n");

    }


}
*/
// *********************************************************************************************
/*
Write a C program to print square pattern program 
2  4  6   8   10
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50


#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=2;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++){
            printf("%2d ",i,i+=2);
        }
            printf("\n");
    }
}
*/
// ***********************************************************************************************
/*

Write a C program to print square pattern program 
  1 1 2 1 3 1
  1 2 2 2 3 2
  1 3 2 3 3 3 
  1 4 2 4 3 4
  1 5 2 5 3 5

#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=1;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        
        for(c=1;c<=nc;c++){

            (c%2==0)?printf("%2d ",r,i=i+1):printf("%2d ",i);
        }
            printf("\n");
            i=1;
    }
}
*/
// ***********************************************************************************************
/*
Write a C program to print square pattern program 
1 2   3   4  5 
2 4   6   8  10
3 6   9  12  15
4 8  12  16  20
5 10 15  20  25


#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=1;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        
        for(c=1;c<=nc;c++){

          printf("%3d",c*r);
        }
            printf("\n");
            i=1;
    }
}
*/
// **************************************************************************************
/*
Write a C program to print square pattern program 
  1 6 11 16 21
   2 7 12 17 22
   3 8 13 18 23
   4 9 14 19 24
   5 10 15 20 25


#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=0;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    for(r=1;r<=nr;r++)
    {
        
        for(c=1;c<=nc;c++){

          printf("%3d",r+i);
          i+=5;
        }
            printf("\n");
            i=0;
    }
}
*/
// **************************************************************************************

// **************************************************************************************
/*
Write a C program to print square pattern program 

   

   5 10 15 20 25

   4 9  14 19 24

   3 8  13 18 23

   2 7  12 17 22

   1 6  11 16 21
   
#include<stdio.h>
int main()
{
      int r,c,nr,nc,i;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    i=0;
    for(r=nr;r>=1;r--)
    {
        
        for(c=1;c<=nc;c++){

          printf("%3d",r+i);

          i+=5;
        }
            printf("\n");
            i=0;
    }
}
*/
// **************************************************************************************

/*

  0 1 0 1 0

  1 0 1 0 1

  0 1 0 1 0

  1 0 1 0 1

  0 1 0 1 0

#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=1;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    i=0;
    for(r=1;r<=nr;r++)
    {
        
        for(c=1;c<=nc;c++){
                    if(r%2==0)
                    {
                        if((c)%2==0)
                        printf("0 ");
                    
                        else{
                        printf("1 ");

                        }
                    }
                      if(r%2!=0)
                    {
                        if(c%2!=0)
                        printf("0 ");
                    
                        else{
                        printf("1 ");

                        }
                    }
                  
        }
            printf("\n");
}
         
    }
*/
#include<stdio.h>
int main()
{
      int r,c,nr,nc,i=1;
    printf("Enter no of rows :");
    scanf("%d",&nr);
    printf("Enter no of colunms :");
    scanf("%d",&nc);
    // i=0;
    for(r=1;r<=nr;r++)
    {
        int b=i+r-1;
        for(c=1;c<=r;c++){
             
                  if(r%2==0){printf("%d",b);
                  b--;i++;
                  }
                  else{
                    printf("%d",i);
                    i++;
                  }
        }
            printf("\n");
            // i=1;
}
         
    }