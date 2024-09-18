
/*


Write a program in C to store elements in an array and print it.

Input 10 elements in the array :

element - 0 : 1

element - 1 : 1

element - 2 : 2

element - 3 : 3

element - 4 : 4

element - 5 : 5

element - 6 : 6

element - 7 : 7

element - 8 : 8

element - 9 : 9

.......
#include<stdio.h>
int main(){
    int n=10,a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
       for(int i=0;i<n;i++){
        printf("element - %d : %d\n",i,a[i]);
    }
}

*/
// **********************************************************************************************
/*
 Display Array in Reverse Order
1 point

Write a program in C to read n number of values in an array and display it in reverse order.

Input the number of elements to store in the array :3

Input 3 number of elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 7

Expected Output :

The values store into the array are :

2 5 7

The values store into the array in reverse are :

7 5 2


#include<stdio.h>
int main(){
    int n;
 

    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the %d numbers \n",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("method one :\n");
       for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    int p=n%2?(n/2):(n/2)-1;
    printf("method two :\n");
    for(int i=0,j=n-1;i<=p;i++,j--)
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
*/
// ****************************************************************************************************
/*
 Sum of all elements
1 point

Write a program in C to find the sum of all elements of the array.

Input the number of elements to be stored in the array :3

Input 3 elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 8

Expected Output :

Sum of all elements stored in the array is : 15



=======================================================================================================================
 print odd and even elements
1 point

Write a program in C to print separately the  odd and even integers 

Test Data :

Input the number of elements to be stored in the array :5

Input 5 elements in the array :

element - 0 : 25

element - 1 : 47

element - 2 : 42

element - 3 : 56

element - 4 : 32

Expected Output :

The Even elements are :

42 56 32

The Odd elements are :

25 47


*/
#include<stdio.h>
int main(){
    int n;
 

    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the %d numbers \n",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("method one :\n");
       for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    int p=n%2?(n/2):(n/2)-1;
    printf("method two :\n");
    for(int i=0,j=n-1;i<=p;i++,j--)
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}