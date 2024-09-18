// 1. Write a C to take the value from the user as input the month number and print number of days in that month. Using switch statement.

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the month number ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
      {
          printf("in this month 31 days");
        break;
      }
        case 2:
      {
          printf("in this month 28 days");
        break;
      }
       case 3:
      {
          printf("in this month 31 days");
        break;
      }
       case 4:
      {
          printf("in this month 30 days");
        break;
      }
       case 5:
      {
          printf("in this month 31 days");
        break;
      }
       case 6:
      {
          printf("in this month 30 days");
        break;
      }
       case 7:
      {
          printf("in this month 31days");
        break;
      }
       case 8:
      {
          printf("in this month 31 days");
        break;
      }
       case 9:
      {
          printf("in this month 30 days");
        break;
      }
       case 10:
      {
          printf("in this month 31 days");
        break;
      }
       case 11:
      {
          printf("in this month 30 days");
        break;
      }
       case 12:
      {
          printf("in this month 31 days");
        break;
      }
    
    default:
    printf("enter the valid month number :");
        break;
    }
}*/

// **********************************************************************************************************
// 2. Write a C program to check whether a Alphabet is vowel or consonant using Switch Case.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet:");
    scanf("%c",&ch);
    switch (ch)
    {
    case ('a' || 'e' ||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'):
         {
            printf("vowels");  
                     break;
        }
    case (!('a' || 'e' ||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')):
       { printf("consonants");
        break;}
    
    default:
        break;
    }
}