/*
1.

#include <stdio.h>
int main()
{
    int a, b, *p, *q;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the Second number:");
    scanf("%d", &b);
    p = &a;
    q = &b;
    *p > *q ? printf("value of a is greater :%d", *p) : *q != *p ? printf("q is is greater :%d", *q)
                                                                 : printf("both are equal :");
}
*/
/*
2.

#include <stdio.h>
int main()
{
    int a, b, *p, *q;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the Second number:");
    scanf("%d", &b);
    p = &a;
    q = &b;
    printf("The sum of the entered numbers is : %d", (*p + *q));
}
*/
/*
3.
#include <stdio.h>
int main()
{
    int a[5], *p;

    printf("Enter the %d number:", 5);
    p = a;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" element - %d : %d\n", i, *(p + i));
    }
}
*/
/*
4.
#include <stdio.h>
void swap(int *a, int *b, int *c)
{
    *a = *a + *b + *c;
    *b = *a - *b - *c;
    *c = *a - *b - *c;
    *a = *a - *c - *b;
}
int main()
{
    int a, b, c;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the Second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    printf("Before swaping :\n");
    printf("a=%d \nb=%d \nc=%d\n", a, b, c);
    printf("After swaping :\n");
    swap(&a, &b, &c);
    printf("a=%d \nb=%d \nc=%d\n", a, b, c);
}
*/
/*
5.

#include <stdio.h>

int main()
{
    int i = 0;
    char s[100];
    printf("Enter the string :");
    gets(s);
    for (i; s[i]; i++)
        ;
    printf("%s is :%d", s, i);
}
*/

/*
6.

#include <stdio.h>
int main() {
    char str[100];
    int c=0,v=0;
    printf("Enter a string :");
    gets(str);
    char *p=str;
    for(;*(p)!='\0';p++){
        if(!((*p>='A'&& *p<='Z') ||(*p>='a'&& *p<='z') ))continue;
        if(*p>='A'&& *p<='Z') *p+=32;
        if(*p=='a'|| *p=='e'||*p=='i'||*p=='o'||*p=='u')v++;
        else c++;
    }
    printf("vowels are :%d",v);
    printf("\nConsonants are :%d",c);

    return 0;
}

*/
/*
7.
#include<stdio.h>
float findMedian(int *array3,int size){
    float sum=0,median;
    for(int i=0;i<size;i++){
        sum+=array3[i];

    }
    median=sum/size;
    // printf("median is %.1f",sum/size);
    return median;

}
float magreandsort(int *array1,int size1,int *array2,int size2)
{
    int array3[100],size3=size1+size2;
    // adding elements to new array
        for(int i=0;i<size1;i++)
     {
         array3[i]=array1[i];

     }
            for(int i=size1;i<size3;i++)
     {
         array3[i]=array2[i-size1];

     }
     printf("new array :");
            for(int i=0;i<size3;i++)
     {
         printf("%d ",array3[i]);

     }
    //  sorting new array3
                for(int i=0;i<size3;i++)
     {
         for(int j=i;j<size3;j++)
         {
             if(array3[i]<array3[j+1]){
                 int t=array3[i];
                 array3[i]=array3[j+1];
                 array3[j+1]=t;
             }
         }

     }

     printf("\nnew sorted array\n");

                 for(int i=0;i<size3;i++)
     {
         printf("%d ",array3[i]);

     }

    // return findMedian(array3,size3);
}
int main()
{
    int array1[100],array2[100],size1,size2;
 printf("Enter size of array 1:");
 scanf("%d",&size1);
  printf("Enter size of array 2:");
 scanf("%d",&size2);
 printf("Enter %d elements in array 1:",size1);
 for(int i=0;i<size1;i++)
 {
     scanf("%d",&array1[i]);

 }
  printf("\nEnter %d elements in array 2:",size2);

     for(int i=0;i<size2;i++)
 {
     scanf("%d",&array2[i]);

 }

    printf("\nMedian :%.1f", magreandsort(array1,size1,array2,size2));




}
*/
