/*
Write the logic for thee below pattern in c ?
1       2       3 
6       5       4

 7       8       9

 12      11     10

 13     14     15 

#include<stdio.h>
int main()
{
    int r,c,rn,cn,i=1;
    printf("Enter row number :");
    scanf("%d",&rn);
     printf("Enter cn number :");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
       
        for(c=1;c<=cn;c++)
        {
            if(r%2){
                printf("%2d ",i++);
                
            }
            else{
                
                printf("%2d ",--i);
                
            }
            
        }
        i+=cn;
        printf("\n");
    }
}
 */
// ****************************************************************************************************************************
/*
Write the logic for the below program?


1 

2     6

3     7     10

4     8     11     13

5     9     12     14     15

int main()
{
    int r,c,rn,cn,i=1;
    printf("Enter row number :");
    scanf("%d",&rn);
     printf("Enter cn number :");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {i=r;
       
        for(c=1;c<=r;c++)
        {
                printf("%2d ",i);
       
            
             i+=cn-c;
        }
        printf("\n");
    }
}
*/
/*
Write the logic for the below program in c ?



                           1

                  4       9

       16     25     36   

49   64     81   100

int main()
{
    int r,c,rn,cn,i=1;
    printf("Enter row number :");
    scanf("%d",&rn);
     printf("Enter cn number :");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
       
        for(c=1;c<=cn;c++)
        {
                if(c<=cn-r)printf("    ");
                else {printf("%4d",i*i);
                i++;}

        }
        printf("\n");
    }
}

*/
// *******************************************************************************************************
/*
Write the logic for the below program ?



                       1

              2       4

      3      6       9

4    8    12     16

int main()
{
    int r,c,rn,cn,i=1;
    printf("Enter row number :");
    scanf("%d",&rn);
     printf("Enter cn number :");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
       i=r;
        for(c=1;c<=cn;c++)
        {
                if(c<=cn-r)printf("    ");
                else {printf("%4d",i);
                i+=r;}

        }
        printf("\n");
    }
}
*/
// *******************************************************************************
/*
Write the logic for the below program in c?

1

1  2   1

1  2   3   2   1

1  2   3   4   3   2   1

1  2   3   4   5   4   3   2   1


*/
int main()
{
    int r,c,rn,cn,i=1;
    printf("Enter row number :");
    scanf("%d",&rn);
     printf("Enter cn number :");
    scanf("%d",&cn);
    for(r=1;r<=rn;r++)
    {
       i=1;
        for(c=1;c<=rn*2-1;c++)
        {
            if(c)
                if(c<=r){printf("%2d",i++);
                }
                else {printf("%2d",--i);
                }

        }
        printf("\n");
    }
}