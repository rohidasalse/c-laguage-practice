/*

Remove all the Spaces from a given String.
Write a C program to remove all the Spaces from a given String.

Sample Input
Input as :
Enter a String : Black cat on a mat

Sample Output
Expected output : Blackcatonamat

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter string :");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '){

        for(int j=i;str[j]!='\0';j++){
            str[j]=str[j+1];

        }
        i--;
        }
    }
    printf("string is %s ",str);
}
*/
/*
3)Convert UpperCase
Write a C program to convert all the character to upper case

from a given index to end index. If the given index is not available then print

Index is not available.
Sample Input
Input as :

Enter a String : I am a student

Enter the starting index number : 4

Enter the ending index number : 13
Sample Output
Expected output :

Resulting String is : I am A STUDENT

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,m;
    printf("Enter string:");
    gets(s);
    printf("Enter starting number:");
    scanf("%d",&n);
      printf("Enter ending  number:");
    scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }

    }
    printf("%s",s);
}


*/
// *************************************************************************************************************************

/*
 Write a C program to check the given string contains a capital alphabet, small alphabet, special character and digit.
Sample Input
Input as :

Enter a String : Nareshit@123


Input as :

Enter a String : nareshit
Sample Output
Expected output :

The given String is matching to our cases.


Expected output :

The given String is not matching to our cases




#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c,sm,sp,d;
    c=sm=sp=d=0;
    printf("Enter string:");
    gets(s);

    for(int i=0;s[i]!='\0';i++)
    {
      if(s[i]>='a' && s[i]<='z')sm++;
      else if(s[i]>='A' && s[i]<='Z')c++;
      else if(s[i]>='0' && s[i]<='9')d++;
      else if(s[i]>='!' && s[i]<='~') sp++;

    }
    if(c>=1&&sm>=1&&sp>=1&&d>=1)printf("The given String is matching to our cases.");
    else{
        printf("c=%d sm=%d,sp=%d d=%d",c,sm,sp,d);
        printf("The given String is not matching to our cases");
    }
    printf("%s",s);
}
*/
// **************************************************************************************************************************
/*
Write a C program to combine two string in a single String.
Sample Input
Input as :

Enter first String : Naresh

Enter Second String : it
Sample Output

Expected output :

Resulting String is : Nareshit
*/
// ********************************************************************************************************************************

/*
Write a C program to remove given character from a String.
Sample Input
Input as :

Enter a String : Bookstore

Enter the character you want to remove : o
Sample Output
Expected Output :

Resulting String is : Bkstre
*/

// ***********************************************************************************************************************************
/*
Write a C program to find out the sum of the numbers which is present in a given string.
Sample Input
Input as :

Enter a String : TS12ab345
Sample Output
Output as :
Sum Of the numbers is : 15
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
 int c=0;
    printf("Enter string:");
    gets(s);

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0' && s[i]<='9'){

            c+=s[i]-'0';
        }

    }


     printf("%d",c);

}

*/

// ***********************************************************************************************************************************
/*
Create a program that compresses a string by replacing repeated characters with a count of the repetition (e.g., "aaabbbcc" becomes "a3b3c2").
Sample Input
Input as :

Enter a String : aaabbccdae
Sample Output
Output as :

Resulting string is : a4b2c2
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int c = 0;
    printf("Enter string:");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = i + 1; s[j] != '\0'; j++)
        {

            if (s[i] > s[j])
            {

                int t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        c = 0;
        for (int j = i + 1; s[j] != '\0'; j++)
        {

            if (s[i] == s[j])
            {

                c++;
            }
        }
        printf("%c%d", s[i], c);
        i = i + c - 1;
    }

    printf("%d", c);
}

*/

// ***********************************************************************************************************************************
/*
Write a C program to convert each word first alphabet to Upper case.
Sample Input
Input as :

Enter a String : i am a student of nareshit
Sample Output
Output as :

Sum Of the numbers is : I Am A Student Of Nareshit

*/
// **************************************************************************************************************************
/*
Write a program to find and count all palindromic substrings in a given string.
Sample Input
Input as :

Enter a String : madam
Sample Output
Output as :

Palindromic substring : madam

Palindromic substring : ada

Total palindromic substrings are : 2
*/
// ********************************************************************************************************************************
/*
Check the given String is palindrome or not.
Sample Input
Input as :

Enter a String :  radar

Input as :

Enter a String : alfha

Sample Output
Output as :
radar is a palindrome string.
Output as :

radar is a not palindrome string.
*/
// ***********************************************************************************************************************************
