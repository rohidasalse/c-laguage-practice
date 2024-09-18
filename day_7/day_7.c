#include<stdio.h>
int main()
{
    int a=6;
    int b=++a + a++ + --a;
    printf("%d\n",b);
    a=3;
     b=++a + ++a + a++ - --a;
    printf("%d",b);
}