// Read n elements into array and find elements sum
// and avg[mean].
#include<stdio.h>
int main()
{
    int n,sum=0;
    float ar[100];
    printf("Enter the array size :");
    scanf("%d",&n);
    if(n>100 || n<1)puts("array size between 1-100");
    else{
    printf("Enter %d elements :",n);
        for(int i=0;i<n;i++){
            scanf("%f",&ar[i]);
            sum+=ar[i];
        }
    }
    printf("sum is =%d \nAvarage is =%.2f",sum,(float)(sum/n));
}