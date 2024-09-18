/*

Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .
Sample Input
Enter a String : Nareshit @123
Sample Output
Output as :

Vowel count is : 3

Consonant count is : 5

Digit count is : 3

Special Character count is : 1


#include<stdio.h>
int main(){
    char c[100];
    int v=0,co=0,s=0,n=0;
    printf("Enter string:");
    gets(c);
    printf("%s",c);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]=='A' || c[i]=='a'||c[i]=='O' || c[i]=='o'||c[i]=='E' || c[i]=='e'||c[i]=='I' || c[i]=='i'||c[i]=='U' || c[i]=='u')v++;
        else if(c[i]>='0'&& c[i]<='9')n++;
        else if((c[i]>=65 &&c[i]<=90)||(c[i]>=97 &&c[i]<=122))co++;
        else s++;
    }
    printf("\nvowels :%d , number : %d ,special charecter :%d ,consonents :%d",v,n,s,co);
}
*/
#include <stdio.h>
int main()
{
    int a[100];
    int n, c = 1, check = 0;
    printf("enter hte number :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {

        c = 1, check = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] % 2 != 0)
            {
                if (a[i] == a[j] && i < j)
                {
                    c++;
                }
                if (a[i] == a[j] && i > j)
                    check++;
            }
        }
        if (check == 0 && c > 1 && c % 2 != 0)
            printf("%d ", a[i]);
    }


}